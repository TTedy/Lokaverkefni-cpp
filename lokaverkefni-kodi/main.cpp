#include "batsferth.hpp"
#include "flugfert.hpp"
#include "hjolaferth.hpp"
#include "journey.hpp"

using namespace std;

int main() {
    // Búa til tilvik af Bátsferð
    batsferth batsferth1(201, 2, 10, false); 
    batsferth batsferth2(202, 20, 100, true);
    batsferth batsferth3(203, 6, 8, false); 

    // Búa til tilvik af Flugferð
    flugfert flugfert1(204, 10, 50, "Akureyri");
    flugfert flugfert2(205, 120, 200, "Tenerife");
    flugfert flugfert3(206, 3, 10, "Grímsey"); 
    flugfert flugfert4(207, 50, 250, "Boston"); 

    // Búa til tilvik af Hjólaferð
    hjolaferth hjolaferth1(208, 3, 10, 4); 
    hjolaferth hjolaferth2(209, 0, 20, 10); 
    hjolaferth hjolaferth3(210, 3, 5, 1); 

    // Nota prenta() aðferðina til að prenta út upplýsingar um tilvikin
    batsferth1.prenta();
    batsferth2.prenta();
    batsferth3.prenta();

    flugfert1.prenta();
    flugfert2.prenta();
    flugfert3.prenta();
    flugfert4.prenta();

    hjolaferth1.prenta();
    hjolaferth2.prenta();
    hjolaferth3.prenta();

    // Búa til tilvik af Journey og nota prentaallt() aðferðina til að prenta út upplýsingar um ferðina
    Journey myJourney(1, 30, 100);
    myJourney.prentaallt(); // hef einga hugmynd hvernig ég á gera þetta án þess að nota node klasa

    

    return 0;
}
