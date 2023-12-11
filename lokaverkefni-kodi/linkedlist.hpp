#pragma once

#include <string>
#include "journey.hpp"
#include "hjolaferth.hpp"
#include "batsferth.hpp"
#include "flugfert.hpp"
#include "journeynode.hpp"

class Journey {
    private:
        JourneyNode* head;
    public:
        Journey(); // Tómir smiður fyrir Journey hlutinn.
        Journey(int nr, int fjoldibokathir, int heildarfjoldi); // Smiður sem mótar Journey hlut með tilgreindum upplýsingum.
        int getID(); // Aðferð til að ná í auðkenni ferðarinnar.
        void setID(int nr); // Aðferð til að setja auðkenni ferðarinnar.
        int getfjoldibokathir();  // Aðferð til að ná í fjölda bókafjalla í ferðinni.
        bool setfjoldibokathir(int fjoldibokathir); // Aðferð til að setja fjölda bókafjalla í ferðinni með áherslu á gilt gildi.
        int getheildarfjoldi(); // Aðferð til að ná í heildarfjölda áttundaferðamanna í ferðinni.
        void setheildarfjoldi(int heildarfjoldi); // Aðferð til að setja heildarfjölda áttundaferðamanna í ferðinni.
        virtual void prentaallt();
        std::string getType();
        virtual ~Journey() {} // er bara að elta dyr synidæmi
};