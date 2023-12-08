// batsferth.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class batsferth : public Journey
{
private:
    bool yfirbiggdur;
public:
    batsferth();
    batsferth(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur); // Define a new constructor
    bool getyfirbiggdur();
    void setyfirbiggdur(bool yfirbiggdur);
    void prenta();
};