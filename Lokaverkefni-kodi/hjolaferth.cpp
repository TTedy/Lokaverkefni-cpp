// Hjolaferth.cpp

#include "hjolaferth.hpp"

#include <iostream>
#include <string>

    hjolaferth::hjolaferth(){
        this->timi = 2;
    }
    hjolaferth::hjolaferth(int timi){
        this->timi = timi;
    }
    int hjolaferth::gettimi(){
        return this->timi = timi;
    }
    void hjolaferth::settimi(int timi){
        this->timi = timi;
    }