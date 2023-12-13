// journeyhandler.hpp

#pragma once

#include <string>

#include "journey.hpp"
#include "journeynode.hpp"

class journeyhandler{
    private:
        JourneyNode* head;
        int nr;
    public:
        journeyhandler();
        void skrajourney(Journey* nytt);
        void skrahjola(int nr, int fjoldibokathir, int heildarfjoldi, int timi);
        void skraflug(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning);
        void skrabath(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur);
        void skraradad(Journey* nytt);
        void breytaflug(int gamla, int nyja);
        void breytahjola(int gamla, int nyja);
        void breytabath(int gamla, int nyja);
        void skraradadSorted(Journey* nytt);
        void skodaval(int nr);
        void printallt();
        void printflug();
        void printhjola();
        void printbath();
        void eyda(int id);
        bool breyta(int nr, int nyja);
        void prenta();
        ~journeyhandler();
};