// journeyhandler.cpp

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
        void journeyhandler::skrahjola(int nr, int fjoldibokathir, int heildarfjoldi, int timi){
            this->skraradad(new hjolaferth(nr, fjoldibokathir, heildarfjoldi, timi));
        }
        void journeyhandler::skraflug(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning){
            this->skraradad(new flugfert(nr, fjoldibokathir, heildarfjoldi, setstadsetning));
        }
        void journeyhandler::skrabath(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur){
            this->skraradad(new batsferth(nr, fjoldibokathir, heildarfjoldi, yfirbiggdur));
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
        }
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
