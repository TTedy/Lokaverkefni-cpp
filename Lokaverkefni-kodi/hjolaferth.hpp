// hjolaferth.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class hjolaferth : public Journey{
private:
    int timi;
    int nr;
    int fjoldibokathir;
    int heildarfjoldi;
public:
    hjolaferth();
    hjolaferth(int nr, int fjoldibokathir, int heildarfjoldi, int timi);
    int getID();
    void setID(int nr);
    int getfjoldibokathir();
    void setfjoldibokathir(int fjoldibokathir);
    int getheildarfjoldi();
    void setheildarfjoldi(int heildarfjoldi);
    int gettimi();
    void settimi(int timi);
    void prenta();
};