// batsferth.cpp

#include "batsferth.hpp"

#include <iostream>
#include <string>

    batsferth::batsferth(){
        this->yfirbiggdur = false;
    }

    batsferth::batsferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, bool yfirbiggdur){
        this->yfirbiggdur = yfirbiggdur;
    }

    bool batsferth::getyfirbiggdur(){
         return this->yfirbiggdur = yfirbiggdur;
    }
    void batsferth::setyfirbiggdur(bool yfirbiggdur){
        this->yfirbiggdur = yfirbiggdur;
    }