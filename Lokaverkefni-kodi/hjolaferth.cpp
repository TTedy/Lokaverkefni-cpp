// Hjolaferth.cpp

#include <iostream>
#include <string>

#include "hjolaferth.hpp"

hjolaferth::hjolaferth(){
    this->timi = 2;
}

hjolaferth::hjolaferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, int timi){
    this->timi = timi;
    this->setID(Nr);
    this->setFjöldi_bókaðir(Fjöldi_bókaðir);
    this->setHeildarfjöldi(Heildarfjöldi);
}

int hjolaferth::gettimi(){
    return this->timi;
}

void hjolaferth::settimi(int timi){
    this->timi = timi;
}