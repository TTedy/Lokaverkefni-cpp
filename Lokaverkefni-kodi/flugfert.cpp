// flugfert.cpp

#include "flugfert.hpp"

#include <iostream>
#include <string>

    flugfert::flugfert(){
        this->stadsetning = "Reykjavík";    
    }

    flugfert::flugfert(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, const std::string& setstadsetning){
        this->stadsetning = setstadsetning;
    }

    std::string flugfert::getstadsetning(){
        return stadsetning;
    }

    void flugfert::setstadsetning(const std::string& setstadsetning){
        this->stadsetning = setstadsetning;
    }
