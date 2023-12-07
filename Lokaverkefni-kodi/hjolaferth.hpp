// hjolaferth.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class hjolaferth : public Journey
{
private:
    int timi;
public:
    hjolaferth();
    hjolaferth(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi, int timi); // Define a new constructor
    int gettimi();
    void settimi(int timi);
    virtual ~hjolaferth();
};