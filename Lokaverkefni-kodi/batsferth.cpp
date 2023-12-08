// batsferth.cpp



#include <iostream>
#include <string>

#include "batsferth.hpp"

    batsferth::batsferth(){
        this->yfirbiggdur = false;
    }
    batsferth::batsferth(int, int, int, bool yfirbiggdur){
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
    void batsferth::prenta(){
        std::cout << "Bátsferð: " << (this->yfirbiggdur ? "Já" : "Nei") << std::endl;
    }