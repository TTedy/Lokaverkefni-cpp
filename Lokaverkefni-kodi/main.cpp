// main.cpp

#include <iostream>
#include <string>

#include "journey.hpp"
#include "hjolaferth.hpp"
#include "flugfert.hpp"
#include "batsferth.hpp"

int main(){
    batsferth(201, 2, 10, false);
    batsferth(202, 20, 100, true);
    batsferth(203, 6, 8, false);
    flugfert(204, 10, 50, "Akureyri");
    flugfert(205, 120, 200, "Tenerife");
    flugfert(206, 3, 10, "Grímsey");
    flugfert(207, 50, 250, "Boston");
    hjolaferth(208, 3, 10, 4);
    hjolaferth(209, 0, 20, 10);
    hjolaferth(210, 3, 5, 1);

    return 0;
}