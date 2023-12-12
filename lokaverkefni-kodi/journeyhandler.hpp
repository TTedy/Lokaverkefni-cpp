#pragma once

#include <string>

#include "journey.hpp"
#include "journeynode.hpp"

class journeyhandler{
    private:
        JourneyNode* head;
    public:
        journeyhandler();
        void skrajouney(Journey* nytt);
        void skrahjola(Journey* nytt);
        void skraflug(Journey* nytt);
        void skrabath(Journey* nytt);
        void skraradad(Journey* nytt);
        void beata(int gamla, int nyja);
        void printallt();
        void eyda(int id);
        bool breyta();
        void prenta();
        ~journeyhandler();
};