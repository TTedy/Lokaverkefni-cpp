// Hjolaferth.cpp

#include <iostream>
#include <string>

#include "hjolaferth.hpp"

hjolaferth::hjolaferth(){
    this->timi = 0;
}

<<<<<<< HEAD
hjolaferth::hjolaferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, int timi){
=======
hjolaferth::hjolaferth(int, int, int, int timi){
>>>>>>> dad7c05d1d044c3fc0668a8971258358df5ea7d2
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

void hjolaferth::prenta(){
    std::cout << "Hjólaferð: " << this->timi << std::endl;
}