#pragma once

#include "journeyhandler.hpp"
#include "journeynode.hpp"
#include "flugfert.hpp"
#include "hjolaferth.hpp"
#include "batsferth.hpp"
#include <iostream>
#include <string>

        journeyhandler::journeyhandler(){
            this->head = nullptr;
        }
        void journeyhandler::skrajouney(Journey* nytt){
            JourneyNode* nytt_node = new JourneyNode(nytt);
            if(!this->head) {
                this->head = nytt_node;
            } else {
                nytt_node->next = this->head;
                this->head = nytt_node;
            }
        }
        void journeyhandler::skrahjola(Journey* nytt){
            this->skraradad(new hjolaferth(nr, fjoldibokathir, heildarfjoldi, timi));
        }
        void journeyhandler::skraflug(Journey* nytt){
            this->skraradad(new flugfert(nr, fjoldibokathir, heildarfjoldi, timi));
        }
        void journeyhandler::skrabath(Journey* nytt){
            this->skraradad(new batsferth(nr, fjoldibokathir, heildarfjoldi, timi));
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

        void journeyhandler::beata(){
            // þarf ég að spyrja nontendan um hvaða týpu af ferð þeir vilja bæta við?
            // eða bara gera Journey?
        }
        void journeyhandler::printallt(){
            JourneyNode* current = this->head;
            while(current) {
                current->data->prentaallt();
                current = current->next;
    }
        }
        void journeyhandler::eyda(int id){
            if(this->head) {
                if(this->head->data->getID() == id) {
                    JourneyNode* nytt_head = this->head->next;
                    delete this->head;
                    this->head = nytt_head;
                } else {
                    JourneyNode* current = this->head;
                    JourneyNode* prev = this->head;
                    while(current && current->data->getID() != id) {
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
        bool journeyhandler::breyta(int gamla, int nyja){
            JourneyNode* current = this->head;
            while(current) {
                if(current->data->getfjoldibokathir()) {
                    return current->data->setfjoldibokathir(nyja);
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