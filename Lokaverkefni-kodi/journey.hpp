#pragma once

#include <string>
#include <iostream>

class Journey {
private:
    int Nr;
    int Fjöldi_bókaðir;
    int Heildarfjöldi;

public:
    Journey(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi);

    int getID();
    void setID(int Nr);
    int getFjöldi_bókaðir();
    void setFjöldi_bókaðir(int Fjöldi_bókaðir);
    int getHeildarfjöldi();
    void setHeildarfjöldi(int Heildarfjöldi);
};
