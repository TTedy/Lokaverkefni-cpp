// journeyhandler.hpp

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
        void beataflug(int gamla, int nyja);
        void beatahjola(int gamla, int nyja);
        void beatabath(int gamla, int nyja);
        void skraradadSorted(Journey* nytt);
        void printallt();
        void eyda(int id);
        bool breyta(int gamla, int nyja);
        void prenta();
        ~journeyhandler();
};