// batsferth.cpp



#include <iostream>
#include <string>

#include "batsferth.hpp"

    batsferth::batsferth(){
        this->yfirbiggdur = false;
    }

    batsferth::batsferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, bool yfirbiggdur): Journey(Nr, Fjöldi_bókaðir, Heildarfjöldi){
        this->yfirbiggdur = yfirbiggdur;
        this->setID(Nr);
        this->setFjöldi_bókaðir(Fjöldi_bókaðir);  
        this->setHeildarfjöldi(Heildarfjöldi);
    }

    bool batsferth::getyfirbiggdur(){
         return this->yfirbiggdur = yfirbiggdur;
    }
    void batsferth::setyfirbiggdur(bool yfirbiggdur){
        this->yfirbiggdur = yfirbiggdur;
    }