// flugfert.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class flugfert : public Journey{
private:
    int nr;
    int fjoldibokathir;
    int heildarfjoldi;
    std::string stadsetning; 
public:
    flugfert();
    flugfert(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning);
    std::string getstadsetning(); 
    int getID();
    void setID(int nr);
    int getfjoldibokathir();
    void setfjoldibokathir(int fjoldibokathir);
    int getheildarfjoldi();
    void setheildarfjoldi(int heildarfjoldi);

    void setstadsetning(const std::string& setstadsetning); 
    void prenta();
};
