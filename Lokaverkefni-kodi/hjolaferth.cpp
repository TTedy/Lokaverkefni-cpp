// Hjolaferth.cpp

#include <iostream>
#include <string>

#include "hjolaferth.hpp"

    hjolaferth::hjolaferth(){
        this->timi = 0;
        this->nr = 0; 
        this->fjoldibokathir = 0; 
        this->heildarfjoldi = 0;        
    }
    hjolaferth::hjolaferth(int nr, int fjoldibokathir, int heildarfjoldi, int timi){
        this->setID(nr);
        this->setfjoldibokathir(fjoldibokathir);
        this->setheildarfjoldi(heildarfjoldi);
        this->timi = timi;
    }
    int hjolaferth::getID(){
        return this->nr;
    }
    void hjolaferth::setID(int nr){
        this->nr = nr;
    }
    int hjolaferth::getfjoldibokathir(){
        return this->fjoldibokathir;
    }
    void hjolaferth::setfjoldibokathir(int fjoldibokathir){
        this->fjoldibokathir = fjoldibokathir;
    }
    int hjolaferth::getheildarfjoldi(){
        return this->heildarfjoldi;
    }
    void hjolaferth::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }
    int hjolaferth::gettimi(){
        return this->timi;
    }
    void hjolaferth::settimi(int timi){
        this->timi = timi;
    }   
    void hjolaferth::prenta(){
        std::cout << "Hjólaferð: " << this->timi << " mínútur" << std::endl;
    }