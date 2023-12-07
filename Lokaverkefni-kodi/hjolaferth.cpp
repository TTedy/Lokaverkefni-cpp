// Hjolaferth.cpp

#include <iostream>
#include <string>

#include "hjolaferth.hpp"

hjolaferth::hjolaferth(){
    this->timi = 2;
}

hjolaferth::hjolaferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, int timi){
    // You need to set Nr, Fjöldi_bókaðir, and Heildarfjöldi here as well
    this->timi = timi;
}

int hjolaferth::gettimi(){
    return this->timi;
}

void hjolaferth::settimi(int timi){
    this->timi = timi;
}