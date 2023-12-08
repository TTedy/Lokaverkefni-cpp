// journey.h

#pragma once

#include <string>
#include <iostream>

class Journey {
private:
    //std::string name;
    int nr;
    int fjoldibokathir;
    int heildarfjoldi;
public:
    Journey();
    Journey(int nr, int fjoldibokathir, int heildarfjoldi);
    
    int getID();
    void setID(int nr);
    int getfjoldibokathir();
    bool setfjoldibokathir(int fjoldibokathir);
    int getheildarfjoldi();
    void setheildarfjoldi(int heildarfjoldi);
    void prenta();
};
