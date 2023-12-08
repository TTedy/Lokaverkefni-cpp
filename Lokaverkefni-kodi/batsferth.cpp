// batsferth.cpp

#include <iostream>
#include <string>

#include "batsferth.hpp"

    batsferth::batsferth(){
        this->nr = 0; 
        this->fjoldibokathir = 0; 
        this->heildarfjoldi = 0; 
        this->yfirbiggdur = false;       
    }
    batsferth::batsferth(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur){
        this->setID(nr);
        this->setfjoldibokathir(fjoldibokathir);
        this->setheildarfjoldi(heildarfjoldi);
        this->yfirbiggdur = yfirbiggdur;
    } 
    int batsferth::getID(){
        return this->nr;
    }
    void batsferth::setID(int nr){
        this->nr = nr;
    }
    int batsferth::getfjoldibokathir(){
        return this->fjoldibokathir;
    }
    void batsferth::setfjoldibokathir(int fjoldibokathir){
        this->fjoldibokathir = fjoldibokathir;
    }
    int batsferth::getheildarfjoldi(){
        return this->heildarfjoldi;
    }
    void batsferth::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }
    bool batsferth::getyfirbiggdur(){
        return this->yfirbiggdur;
    }
    void batsferth::setyfirbiggdur(bool yfirbiggdur){
        this->yfirbiggdur = yfirbiggdur;
    }
    void batsferth::prenta(){
        std::cout << "Bátsferð: " << this->yfirbiggdur << std::endl;
    }