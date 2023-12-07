// main.cpp

#include <iostream>
#include <string>

#include "journey.hpp"
#include "hjolaferth.hpp"
#include "flugfert.hpp"
#include "batsferth.hpp"

int main(){
    batsferth batsferth1(201, 2, 10, false);
    batsferth batsferth2(202, 20, 100, true);
    batsferth batsferth3(203, 6, 8, false);
    flugfert flugfert1(204, 10, 50, "Akureyri");
    flugfert flugfert2(205, 120, 200, "Tenerife");
    flugfert flugfert3(206, 3, 10, "Grímsey");
    flugfert flugfert4(207, 50, 250, "Boston");
    hjolaferth hjolaferth1(208, 3, 10, 4);
    hjolaferth hjolaferth2(209, 0, 20, 10);
    hjolaferth hjolaferth3(210, 3, 5, 1);

    return 0;
}