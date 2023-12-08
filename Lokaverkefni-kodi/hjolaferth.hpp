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
    hjolaferth(int nr, int fjoldibokathir, int heildarfjoldi, int timi); // Define a new constructor
    int gettimi();
    void settimi(int timi);
};