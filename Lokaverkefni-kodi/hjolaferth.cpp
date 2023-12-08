// Hjolaferth.cpp

#include <iostream>
#include <string>

#include "hjolaferth.hpp"

hjolaferth::hjolaferth(){
    this->timi = 0;
}

hjolaferth::hjolaferth(int, int, int, int timi){
    this->timi = timi;
}

int hjolaferth::gettimi(){
    return this->timi;
}

void hjolaferth::settimi(int timi){
    this->timi = timi;
}

void hjolaferth::prenta(){
    std::cout << "Hjólaferð: " << this->timi << std::endl;
}