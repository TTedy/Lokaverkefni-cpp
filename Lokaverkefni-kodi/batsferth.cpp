// batsferth.cpp

#include "batsferth.hpp"

#include <iostream>
#include <string>

    batsferth::batsferth(){
        this->yfirbiggdur = false;
    }

    batsferth::batsferth(bool yfirbiggdur){
        this->yfirbiggdur = yfirbiggdur;
    }

    bool batsferth::getyfirbiggdur(){
         return this->yfirbiggdur = yfirbiggdur;
    }
    void batsferth::setyfirbiggdur(bool yfirbiggdur){
        this->yfirbiggdur = yfirbiggdur;
    }