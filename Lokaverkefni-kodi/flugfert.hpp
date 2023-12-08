// flugfert.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

// Klasinn hjolaferth erfir frá Journey og bætir við upplýsingum um tíma hjólaförarinnar.
class flugfert : public Journey{
    private:
        std::string stadsetning;  // Núverandi staðsetning flugferju.
    public: 
        flugfert(); // Tómi smiður fyrir flugfert hlutinn.
        flugfert(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning); // Smiður sem mótar Journey hlut með tilgreindum upplýsingum.
        std::string getstadsetning(); // Aðferð til að ná í núverandi staðsetningu flugferju.
        void setstadsetning(std::string setstadsetning);  // Aðferð til að setja nýja staðsetningu flugferju.
        void prenta();  // Aðferð til að prenta út upplýsingar um flugferjuna.
};
