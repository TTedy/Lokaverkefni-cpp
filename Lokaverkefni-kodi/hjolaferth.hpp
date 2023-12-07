// Hjolaferth.hpp

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
    hjolaferth(int timi);
    int gettimi();
    void settimi(int timi);
    virtual ~hjolaferth();
};


