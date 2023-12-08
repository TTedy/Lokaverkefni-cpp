// batsferth.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class batsferth : public Journey{
private:
    int nr;
    int fjoldibokathir;
    int heildarfjoldi;    
    bool yfirbiggdur;
public:
    batsferth();
    batsferth(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur); // Define a new constructor
    int getID();
    void setID(int nr);
    int getfjoldibokathir();
    void setfjoldibokathir(int fjoldibokathir);
    int getheildarfjoldi();
    void setheildarfjoldi(int heildarfjoldi);
    bool getyfirbiggdur();
    void setyfirbiggdur(bool yfirbiggdur);
    void prenta();
};