// Journey.hpp

#pragma once

#include <string>
#include <iostream>

// head klassin fyrir verkefnið sem heldur utan um ferðirnar
class Journey {
    private:
        int nr; // Auðkenni ferðar 
        int fjoldibokathir; // Fjöldi bókafjalla í ferðinni
        int heildarfjoldi; // Heildarfjöldi áttundaferðamanna í ferðinni
    public:
        Journey(); // Tómir smiður fyrir Journey hlutinn.
        Journey(int nr, int fjoldibokathir, int heildarfjoldi); // Smiður sem mótar Journey hlut með tilgreindum upplýsingum.
        int getID(); // Aðferð til að ná í auðkenni ferðarinnar.
        void setID(int nr); // Aðferð til að setja auðkenni ferðarinnar.
        int getfjoldibokathir();  // Aðferð til að ná í fjölda bókafjalla í ferðinni.
        bool setfjoldibokathir(int fjoldibokathir); // Aðferð til að setja fjölda bókafjalla í ferðinni með áherslu á gilt gildi.
        int getheildarfjoldi(); // Aðferð til að ná í heildarfjölda áttundaferðamanna í ferðinni.
        void setheildarfjoldi(int heildarfjoldi); // Aðferð til að setja heildarfjölda áttundaferðamanna í ferðinni.
        void prentaallt(); // Aðferð til að prenta út upplýsingar um hjólaförina.
};
