#include <iostream>
#include <string>

#include "journey.hpp"
#include "hjolaferth.hpp"
#include "flugfert.hpp"
#include "batsferth.hpp"

int main() {

    batsferth* b1 = new batsferth(201, 2, 10, false);
    batsferth* b2 = new batsferth(202, 20, 100, true);
    batsferth* b3 = new batsferth(203, 6, 8, false);
    
    flugfert* f1 = new flugfert(204, 10, 50, "Akureyri");
    flugfert* f2 = new flugfert(205, 120, 200, "Tenerife");
    flugfert* f3 = new flugfert(206, 3, 10, "Grímsey");
    flugfert* f4 = new flugfert(207, 50, 250, "Boston");
    
    hjolaferth* h1 = new hjolaferth(208, 3, 10, 4);
    hjolaferth* h2 = new hjolaferth(209, 0, 20, 10);
    hjolaferth* h3 = new hjolaferth(210, 3, 5, 1);

    b1->prenta();
    b2->prenta();
    b3->prenta();


    // memdump
    delete b1;
    delete b2;
    delete b3;
    delete f1;
    delete f2;
    delete f3;
    delete f4;
    delete h1;
    delete h2;
    delete h3;


    // er altaf að fá einhverjar villur þegar ég reyni að compile-a þetta 8.12.2023 kl 21:11
    // sem dæmi /usr/bin/ld: /usr/Tækniskolinn/FORR3CG/lokav/Lokaverkefni-cpp/Lokaverkefni-kodi/main.cpp:22: undefined reference to `batsferth::prenta()'
    // /usr/bin/ld: /usr/Tækniskolinn/FORR3CG/lokav/Lokaverkefni-cpp/Lokaverkefni-kodi/main.cpp:23: undefined reference to `batsferth::prenta()'

    return 0;
}
