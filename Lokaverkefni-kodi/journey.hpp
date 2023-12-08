// Journey.hpp

#pragma once

#include <string>
#include <iostream>

class Journey {
private:
    int nr;
    int fjoldibokathir;
    int heildarfjoldi;
    int hofundarfjoldi;

public:
    Journey();
    Journey(int nr, int fjoldibokathir, int heildarfjoldi);

    int getID();
    void setID(int nr);
    int getfjoldibokathir();
    bool setfjoldibokathir(int fjoldibokathir);
    int getheildarfjoldi();
    void setheildarfjoldi(int heildarfjoldi);
    void prentaallt(); // þarf static til að geta notað þetta í main, þvi það er ekki til instance af þessu
};
