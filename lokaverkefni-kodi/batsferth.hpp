// batsferth.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

// Klasinn hjolaferth erfir frá Journey og bætir við upplýsingum um tíma hjólaförarinnar.
class batsferth : public Journey{
    private:   
        bool yfirbiggdur; // ef bátsferðin er yfirbyggð já eða nei
    public:
        batsferth(); // Tómi smiður fyrir batsferth hlutinn.
        batsferth(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur); // Smiður sem mótar batsferth hlut með tilgreindum upplýsingum og kallar á Journey smiðinn.
        bool getyfirbiggdur(); // Aðferð til að ná í upplýsingar um hvort ferja sé yfirbyggð eða ekki.
        void setyfirbiggdur(bool yfirbiggdur); // Aðferð til að setja upplýsingar um hvort ferja sé yfirbyggð eða ekki.
        virtual void prenta(); // Aðferð til að prenta út upplýsingar um ferjuna.
        std::string getType();
};