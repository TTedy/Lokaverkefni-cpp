// flugfert.cpp

#include "flugfert.hpp"

#include <iostream>
#include <string>


std::string Flugfert::getstadsetning(){
    stadsetning = "Reykjavík";
    return stadsetning;
}

void Flugfert::setstadsetning(std::string stadsetning){
    this->stadsetning = stadsetning;
}