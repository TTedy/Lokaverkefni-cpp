#include "batsferth.hpp"
#include "flugfert.hpp"
#include "hjolaferth.hpp"
#include "journey.hpp"
#include "journeyhandler.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string inntak, skipun, tegund, val, hvert, setstadsetning;
    int nr, nytt_id, timi, heildarfjoldi, fjoldibokathir, nyja, ferth;
    bool yfirbiggdur;

    journeyhandler journeyhandler;

    do {
        cout << "Sláðu inn skipun: ";
        stringstream ss(inntak);
        getline(cin, inntak);
        ss >> skipun;

        if (skipun == "skra" || skipun == "skrá") {
            cout << "Sláðu inn tegund ferðar: ";
            ss << tegund;
            ss >> tegund;

            if (tegund == "flugfert" || tegund == "flugferð") {
                journeyhandler.skraflug(nr, fjoldibokathir, heildarfjoldi, setstadsetning);
            } else if (tegund == "hjolaferth" || tegund == "hjólaferð") {
                ss << nr << fjoldibokathir << heildarfjoldi << timi;
                journeyhandler.skrahjola(nr, fjoldibokathir, heildarfjoldi, timi);
            } else if (tegund == "batsferth" || tegund == "bátsferð") {
                journeyhandler.skrabath(nr, fjoldibokathir, heildarfjoldi, yfirbiggdur);
            } else {
                cout << "Óþekkt tegund ferðar, reyndu aftur" << endl;
            }
        } 
        
        
        
        
        
        
        
        
        
         else if (skipun == "skoda" || skipun == "skoða") {
            cout << "Sláðu inn tegund ferðar: ";
            ss << val;
            ss >> val;

            if (val == "flugfert" || val == "flugferð") {
                journeyhandler.printflug();
                cout << "hvaða flugferð viltu skoða gefðu nr? ";
                ss << ferth;
                journeyhandler.skodaval(ferth);
            }
            if (val == "hjolaferth" || val == "hjólaferð") {
                journeyhandler.printhjola();
                cout << "hvaða hjólaferð viltu skoða gefðu nr ? ";
                ss << ferth;
                
                journeyhandler.skodaval(ferth);
            }
            if (val == "batsferth" || val == "bátsferð") {
                journeyhandler.printbath();
                cout << "hvaða bátsferð viltu skoða gefðu nr ? ";
                ss << ferth;
                journeyhandler.skodaval(ferth);
            }
            journeyhandler.printallt();
            } 
        
        else if (skipun == "eyda" || skipun == "eyða") {
            journeyhandler.printallt();
            cout << "Sláðu inn númer ferðar sem þú villt eyða: ";
            ss << nr;
            journeyhandler.eyda(nr);
        } 
        
        
        
        else if (skipun == "breyta" || skipun == "bæta") {
            journeyhandler.printallt();
            cout << "Sláðu inn númer ferðar sem þú villt breyta, og svog með nýju númeri: ";
            ss << nr << nyja;
            journeyhandler.breyta(nr,nyja);
        } 
        
        
        
        
        else if (skipun == "prenta" || skipun == "print") {
            do {
                cout << "veldu hvað þú vilt prenta út: " << endl;
                cout << "1. prenta allt" << endl;
                cout << "2. prenta flugferðir" << endl;
                cout << "3. prenta hjólaferðir" << endl;
                cout << "4. prenta bátsferðir" << endl;

                ss << val;
                ss >> val;

                if (val == "prentaallt" || val == "prenta allt" || val == "prentallt") {
                    journeyhandler.printallt();
                } else if (val == "prentaflug" || val == "prenta flug" || val == "prenta flugferðir") {
                    journeyhandler.printflug();
                } else if (val == "prentahjola" || val == "prenta hjóla" || val == "prenta hjólaferðir") {
                    journeyhandler.printhjola();
                } else if (val == "prentabath" || val == "prenta báts" || val == "prenta bátsferðir") {
                    journeyhandler.printbath();
                } else if (val == "heatta" || val == "hætta") {
                    cout << "Takk fyrir að nota pretunar fall ferðaskráningarkerfið okkar" << endl;
                } else {
                    cout << "Óþekkt skipun" << endl;
                }
            } while (val != "hætta" && val != "haetta");
        } 
        
        
        
        
        else if (skipun == "hætta" || skipun == "haetta") {
            cout << "Takk fyrir að nota ferðaskráningarkerfið okkar" << endl;
        } 
        
        
        else {
            cout << "Óþekkt skipun" << endl;
        }
    } while (skipun != "hætta" && skipun != "haetta");

    // Búa til tilvik af Bátsferð
    batsferth* batsferth1 = new batsferth(201, 2, 10, false);
    batsferth* batsferth2 = new batsferth(202, 20, 100, true);
    batsferth* batsferth3 = new batsferth(203, 6, 8, false);

    // Búa til tilvik af Flugferð
    flugfert* flugfert1 = new flugfert(204, 10, 50, "Akureyri");
    flugfert* flugfert2 = new flugfert(205, 120, 200, "Tenerife");
    flugfert* flugfert3 = new flugfert(206, 3, 10, "Grímsey");
    flugfert* flugfert4 = new flugfert(207, 50, 250, "Boston");

    // Búa til tilvik af Hjólaferð
    hjolaferth* hjolaferth1 = new hjolaferth(208, 3, 10, 4);
    hjolaferth* hjolaferth2 = new hjolaferth(209, 0, 20, 10);
    hjolaferth* hjolaferth3 = new hjolaferth(210, 3, 5, 1);

    // Búa til tilvik af Journey og nota printallt() aðferðina til að prenta út upplýsingar um ferðina
    Journey myJourney(1, 30, 100);

    return 0;
}
