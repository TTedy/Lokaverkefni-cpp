// Hjolaferth.cpp

#include <iostream>
#include <string>

#include "hjolaferth.hpp"

// Tómi smiður fyrir hjolaferth hlutinn.
    hjolaferth::hjolaferth(){
        this->timi = 0;
    }
    // Smiður sem mótar hjolaferth hlut með tilgreindum upplýsingum og kallar á Journey smiðinn.
    hjolaferth::hjolaferth(int nr, int fjoldibokathir, int heildarfjoldi, int timi) : Journey(nr, fjoldibokathir, heildarfjoldi){
        this->timi = timi;
    }
    // Aðferð til að ná í fjölda klukkustunda sem hjólaförin er varandi.
    int hjolaferth::gettimi(){
        return this->timi;
    }
    // Aðferð til að setja fjölda klukkustunda sem hjólaförin er varandi.
    void hjolaferth::settimi(int timi){
        this->timi = timi;
    }
    // Aðferð til að prenta út upplýsingar um hjólaförina.
    void hjolaferth::prenta(){
        std::cout << "Hjólaferð: " << this->timi << std::endl;
    }
    std::string hjolaferth::getType(){
        return "hjolaferth";
    }