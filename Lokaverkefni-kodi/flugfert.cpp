// flugfert.cpp



#include <iostream>
#include <string>

#include "flugfert.hpp"

    flugfert::flugfert(){
        this->stadsetning = "Reykjavík";    
    }

    flugfert::flugfert(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, const std::string& setstadsetning){
        this->stadsetning = setstadsetning;
        this->setID(Nr);
        this->setFjöldi_bókaðir(Fjöldi_bókaðir);
        this->setHeildarfjöldi(Heildarfjöldi);
    }

    std::string flugfert::getstadsetning(){
        return stadsetning;
    }

    void flugfert::setstadsetning(const std::string& setstadsetning){
        this->stadsetning = setstadsetning;
    }
