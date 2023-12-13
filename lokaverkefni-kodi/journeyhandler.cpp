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
        void journeyhandler::skrajourney(Journey* nytt){
            JourneyNode* nytt_node = new JourneyNode(nytt);
            if(!this->head) {
                this->head = nytt_node;
            } else {
                nytt_node->next = this->head;
                this->head = nytt_node;
            }
        } 

        
              
        void journeyhandler::skraflug(int nr, int setfjoldibokathir, int setheildarfjoldi, const std::string& setstadsetning){
            this->skraradad(new flugfert(nr, setfjoldibokathir, setheildarfjoldi, setstadsetning));
        }
        void journeyhandler::skrahjola(int nr, int setfjoldibokathir, int setheildarfjoldi, int timi){
            this->skraradad(new hjolaferth(nr, setfjoldibokathir, setheildarfjoldi, timi));
        }
        void journeyhandler::skrabath(int nr, int setfjoldibokathir, int setheildarfjoldi, bool yfirbiggdur){
            this->skraradad(new batsferth(nr, setfjoldibokathir, setheildarfjoldi, yfirbiggdur));
        }
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

        void journeyhandler::printallt(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
        }}

        void journeyhandler::printflug(){
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "flugfert") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
        }
        void journeyhandler::printhjola(){
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "hjolaferth") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
            
        }
        void journeyhandler::printbath(){
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "batsferth") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
        }

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
        bool journeyhandler::breyta(int nr, int nyja){
            JourneyNode* current = this->head;
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

        void journeyhandler::prenta(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
            }
        }
