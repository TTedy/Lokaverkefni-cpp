// flugfert.cpp

#include <iostream>
#include <string>

#include "flugfert.hpp"

// Tómi smiður fyrir hjolaferth hlutinn.
flugfert::flugfert(){
    this->stadsetning = "";
}
// Smiður sem mótar flugfert hlut með tilgreindum upplýsingum og kallar á Journey smiðinn.
flugfert::flugfert(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning) : Journey(nr, fjoldibokathir, heildarfjoldi){
    this->stadsetning = setstadsetning;
}
// Aðferð til að ná í núverandi staðsetningu flugferju.
std::string flugfert::getstadsetning(){
    return this->stadsetning;
}
// Aðferð til að setja nýja staðsetningu flugferju.
void flugfert::setstadsetning(std::string setstadsetning){
    this->stadsetning = setstadsetning;
}
// Aðferð til að prenta út upplýsingar um flugferjuna.
void flugfert::prenta(){
    std::cout << "Flugferð: " << this->stadsetning << std::endl;
}