// journeyhandler.cpp

#include "flugfert.hpp"
#include "journey.hpp"
#include "journeynode.hpp"
#include "journeyhandler.hpp"
#include "hjolaferth.hpp"
#include "batsferth.hpp"
#include <iostream>
#include <string>

using namespace std; // er ekki viss ef ég má hafa þetta hérna. þarf að spurja kennara

        journeyhandler::journeyhandler(){
            this->head = nullptr;
        }

        // Fall sem skráir nýja ferð í lista
        void journeyhandler::skrajourney(Journey* nytt){
            JourneyNode* nytt_node = new JourneyNode(nytt);
            if(!this->head) {
                this->head = nytt_node;
            } else {
                nytt_node->next = this->head;
                this->head = nytt_node;
            }
        } 

        // Fall sem skráir nýtt flug í lista
        void journeyhandler::skraflug(int nr, int setfjoldibokathir, int setheildarfjoldi, const std::string& setstadsetning){
            this->skraradad(new flugfert(nr, setfjoldibokathir, setheildarfjoldi, setstadsetning));
        }

        // Fall sem skráir nýja hjólferð í lista
        void journeyhandler::skrahjola(int nr, int setfjoldibokathir, int setheildarfjoldi, int timi){
            this->skraradad(new hjolaferth(nr, setfjoldibokathir, setheildarfjoldi, timi));
        }

        // Fall sem skráir nýja bátferð í lista
        void journeyhandler::skrabath(int nr, int setfjoldibokathir, int setheildarfjoldi, bool yfirbiggdur){
            this->skraradad(new batsferth(nr, setfjoldibokathir, setheildarfjoldi, yfirbiggdur));
        }

        // Fall sem raðar ferð inn í rétta röð í lista eftir heildarfjölda
        void journeyhandler::skraradad(Journey* nytt) {
            JourneyNode* nyttNode = new JourneyNode(nytt);
            
            if (!this->head || this->head->data->getheildarfjoldi() <= nytt->getheildarfjoldi()) {
                nyttNode->next = this->head;
                this->head = nyttNode;
            } else {
                JourneyNode* current = this->head;
                JourneyNode* prev = nullptr;

                while (current && current->data->getheildarfjoldi() > nytt->getheildarfjoldi()) {
                    prev = current;
                    current = current->next;
                }

                if (prev) {
                    prev->next = nyttNode;
                } else {
                    nyttNode->next = this->head;
                    this->head = nyttNode;
                }

                nyttNode->next = current;
            }
        }

        // Fall sem prentar út allar ferðir í lista
        void journeyhandler::printallt(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
            }
        }

        // Fall sem prentar út allar flugferðir í lista
        void journeyhandler::printflug(){
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "flugfert") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
        }

        // Fall sem prentar út allar hjólferðir í lista
        void journeyhandler::printhjola(){
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "hjolaferth") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
        }

        // Fall sem prentar út allar bátferðir í lista
        void journeyhandler::printbath(){
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "batsferth") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
        }

        // Fall sem skoðar ferð eftir númeri og prentar hana út ef hún er til
        void journeyhandler::skodaval(int nr) {
            JourneyNode* current = this->head;
            while (current) {
                if (current->data->getID() == nr) {
                    current->data->prentaallt();
                    return;
                }
                current = current->next;
            }
            
            cout << "Þessi ferð er ekki til" << endl;
        }

        // Fall sem eyðir ferð eftir númeri
        void journeyhandler::eyda(int nr){
            if(this->head) {
                if(this->head->data->getID() == nr) {
                    JourneyNode* nytt_head = this->head->next;
                    delete this->head;
                    this->head = nytt_head;
                } else {
                    JourneyNode* current = this->head;
                    JourneyNode* prev = this->head;
                    while(current && current->data->getID() != nr) {
                        prev = current;
                        current = current->next;
                    }
                    if(current) { // það fannst dýr með þetta id (nei það fannst nr)
                        prev->next = current->next;
                        delete current;
                    }
                }
            }
        }

        // Fall sem breytir fjölda bókaða sæta í ferð eftir númeri, skilar false ef ekki er hægt
        bool journeyhandler::breyta(int nr, int nyja){
            JourneyNode* current = this->head;
            //cout<< "þetta er nyja: " << nyja << endl; villu skilaboð
            //cout<< "þetta fall var keyrt" << endl; villu skilaboð
            while(current) {
                if(current->data->getID() == nr) {
                    if (nyja > this->head->data->getheildarfjoldi()) {
                        return false;
                    }else{
                        return current->data->setfjoldibokathir(nyja); // afhverju virkar set heildarfjolda hér en ekki í skra wtf
                    }
                }
                current = current->next;
            }
            return false;
        }

        // Fall sem prentar út allar ferðir í lista
        void journeyhandler::prenta(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
            }
        }
