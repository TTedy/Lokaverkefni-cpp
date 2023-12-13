// journeyhandler.hpp

#pragma once

#include <string>

#include "journey.hpp"
#include "journeynode.hpp"

class journeyhandler : public Journey{ // þarf að erfða frá Journey
    private:
        JourneyNode* head; // Pointer sem peikar á fyrsta stak í listanum
    public:
        journeyhandler(); // Tómi smiður fyrir Journey hlutinn.
        void skrajourney(Journey* nytt); // Fall sem skráir nýja ferð í lista
        void skrahjola(int nr, int fjoldibokathir, int heildarfjoldi, int timi); // Fall sem skráir nýja hjólferð í lista
        void skraflug(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning); // Fall sem skráir nýtt flug í lista
        void skrabath(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur); // Fall sem skráir nýja bátferð í lista
        void skraradad(Journey* nytt); // Fall sem raðar ferð inn í rétta röð í lista eftir heildarfjölda
        void breytaflug(int gamla, int nyja); // Fall sem breytir flugi í lista
        void breytahjola(int gamla, int nyja); // Fall sem breytir hjólferð í lista
        void breytabath(int gamla, int nyja); // Fall sem breytir bátferð í lista
        void skodaval(int nr); // Fall sem skoðar hvort ferð sé til í lista
        void printallt(); // Fall sem prentar út allar ferðir í lista
        void printflug(); // Fall sem prentar út allar flugferðir í lista
        void printhjola(); // Fall sem prentar út allar hjólferðir í lista
        void printbath(); // Fall sem prentar út allar bátferðir í lista
        void eyda(int id); // Fall sem eyðir ferð úr lista
        bool breyta(int nr, int nyja); // Fall sem breytir ferð í lista
        void prenta(); // Fall sem prentar út ferð í lista

        virtual ~journeyhandler(); // Destructor fyrir Journey hlutinn.
};