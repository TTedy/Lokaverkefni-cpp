// batsferth.hpp

#pragma once

#include "journey.hpp"

#include <iostream>
#include <string>

class batsferth : public Journey
{
private:
    bool yfirbiggdur;

public:
    batsferth();
    batsferth(bool yfirbiggdur);
    bool getyfirbiggdur();
    void setyfirbiggdur(bool yfirbiggdur);
    virtual ~batsferth();
};