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
    batsferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, bool yfirbiggdur); // Define a new constructor
    bool getyfirbiggdur();
    void setyfirbiggdur(bool yfirbiggdur);
    virtual ~batsferth();
};