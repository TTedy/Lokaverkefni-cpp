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
        void journeyhandler::skraflug(int nr, int fjoldibokathir, int setheildarfjoldi, const std::string& setstadsetning){
            this->skraradad(new flugfert(nr, fjoldibokathir, setheildarfjoldi, setstadsetning));
        }
        void journeyhandler::skrahjola(int nr, int fjoldibokathir, int setheildarfjoldi, int timi){
            this->skraradad(new hjolaferth(nr, fjoldibokathir, setheildarfjoldi, timi));
        }
        void journeyhandler::skrabath(int nr, int fjoldibokathir, int setheildarfjoldi, bool yfirbiggdur){
            this->skraradad(new batsferth(nr, fjoldibokathir, setheildarfjoldi, yfirbiggdur));
        }
        void journeyhandler::skraradad(Journey* nytt){
                JourneyNode* nytt_node = new JourneyNode(nytt);
                if(!this->head) {
                    this->head = nytt_node;
                } else {
                    if(*this->head->data > *nytt) {
                        nytt_node->next = this->head;
                        this->head = nytt_node;
                    } else {
                        JourneyNode* current = this->head;
                        JourneyNode* prev = this->head;
                        while(current && *current->data <= *nytt) {
                            prev = current;
                            current = current->next;
                        }
                        nytt_node->next = current;
                        prev->next = nytt_node;
                    }
                }
        }

        void journeyhandler::skraradadSorted(Journey* nytt) {
            JourneyNode* nytt_node = new JourneyNode(nytt);

            JourneyNode* current = this->head;
            JourneyNode* prev = nullptr;

            while (current && *current->data >= *nytt) {
                prev = current;
                current = current->next;
            }
            if (prev) { // ef nullptr
                nytt_node->next = current;
                prev->next = nytt_node;
            } else { // ef ekki nullptr
                nytt_node->next = this->head;
                this->head = nytt_node;
            }
        }



        void journeyhandler::printallt(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
        }}

        void journeyhandler::printflug(){
            // use getType() to check if it's a flugfert then print it all out
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "flugfert") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
        }
        void journeyhandler::printhjola(){
            // use getType() to check if it's a hjolaferth then print it all out
            JourneyNode* current = this->head;
            while(current) {
                if (current->data->getType() == "hjolaferth") {
                    current->data->prentaallt();
                }
                current = current->next;
            }
            
        }
        void journeyhandler::printbath(){
            // use getType() to check if it's a batsferth then print it all out
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
                    if(current) { // það fannst dýr með þetta id
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
                    // check if heildarfjoldi is valid
                    if (nyja > this->head->data->getheildarfjoldi()) {
                        return false;
                    }else{
                        return current->data->setfjoldibokathir(nyja);
                    }
                }
                current = current->next;
            }
            return false;
        }

        void journeyhandler::breytaflug(int gamla, int nyja){
            journeyhandler::breyta(gamla, nyja);
        }
        void journeyhandler::breytahjola(int gamla, int nyja){
            journeyhandler::breyta(gamla, nyja);
        }
        void journeyhandler::breytabath(int gamla, int nyja){
            journeyhandler::breyta(gamla, nyja);
        }

        void journeyhandler::prenta(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
            }
        }
