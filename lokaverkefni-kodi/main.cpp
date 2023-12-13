#include "flugfert.hpp"
#include "journey.hpp"
#include "journeynode.hpp"
#include "journeyhandler.hpp"
#include "hjolaferth.hpp"
#include "batsferth.hpp"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string inntak, skipun, tegund, val, hvert, setstadsetning;
    int nr, timi, heildarfjoldi, fjoldibokathir, nyja, ferth;
    bool yfirbiggdur;

    journeyhandler journeyhandler;
    Journey journey;

    do {
        cout << "Sláðu inn skipun: ";
        getline(cin, inntak);
        stringstream ss(inntak);
        ss >> skipun;

        if (skipun == "skra" || skipun == "skrá") {
            cout << "Sláðu inn tegund ferðar: ";
            ss >> tegund;

            if (tegund == "flugfert" || tegund == "flugferð") {
                cout << "skráðu ferð með þvi að skrifa inn þessi gögn: ";
                cout << "nr, fjoldibokathir, heildarfjoldi, setstadsetning";
                ss >> nr >> fjoldibokathir >> heildarfjoldi >> setstadsetning;
                journeyhandler.skraflug(nr, fjoldibokathir, heildarfjoldi, setstadsetning);
            } else if (tegund == "hjolaferth" || tegund == "hjólaferð") {
                cout << "skráðu ferð með þvi að skrifa inn þessi gögn: ";
                cout << "nr, fjoldibokathir, heildarfjoldi, timi";
                ss >> nr >> fjoldibokathir >> heildarfjoldi >> timi;
                journeyhandler.skrahjola(nr, fjoldibokathir, heildarfjoldi, timi);
            } else if (tegund == "batsferth" || tegund == "bátsferð") {
                cout << "skráðu ferð með þvi að skrifa inn þessi gögn: ";
                cout << "nr, fjoldibokathir, heildarfjoldi, yfirbiggdur";
                ss >> nr >> fjoldibokathir >> heildarfjoldi >> yfirbiggdur;
                journeyhandler.skrabath(nr, fjoldibokathir, heildarfjoldi, yfirbiggdur);
            } else {
                cout << "Óþekkt tegund ferðar, reyndu aftur" << endl;
            }
        } else if (skipun == "skoda" || skipun == "skoða") {
            cout << "Sláðu inn tegund ferðar: ";
            ss >> val;

            if (val == "flugfert" || val == "flugferð") {
                journeyhandler.printflug();
                cout << "hvaða flugferð viltu skoða gefðu nr? ";
                ss >> ferth;
                journeyhandler.skodaval(ferth);
            }
            if (val == "hjolaferth" || val == "hjólaferð") {
                journeyhandler.printhjola();
                cout << "hvaða hjólaferð viltu skoða gefðu nr ? ";
                ss >> ferth;
                journeyhandler.skodaval(ferth);
            }
            if (val == "batsferth" || val == "bátsferð") {
                journeyhandler.printbath();
                cout << "hvaða bátsferð viltu skoða gefðu nr ? ";
                ss >> ferth;
                journeyhandler.skodaval(ferth);
            }
            journeyhandler.printallt();
        } else if (skipun == "eyda" || skipun == "eyða") {
            journeyhandler.printallt();
            cout << "Sláðu inn númer ferðar sem þú villt eyða: ";
            ss >> nr;
            journeyhandler.eyda(nr);
        } else if (skipun == "breyta" || skipun == "bæta") {
            journeyhandler.printallt();
            cout << "Sláðu inn númer ferðar sem þú villt breyta, og svog með nýju númeri: ";
            ss >> nr >> nyja;
            journeyhandler.breyta(nr,nyja);
        } else if (skipun == "prenta" || skipun == "print") {
            do {
                cout << "veldu hvað þú vilt prenta út: " << endl;
                cout << "1. prenta allt" << endl;
                cout << "2. prenta flugferðir" << endl;
                cout << "3. prenta hjólaferðir" << endl;
                cout << "4. prenta bátsferðir" << endl;

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
        } else if (skipun == "hætta" || skipun == "haetta") {
            cout << "Takk fyrir að nota ferðaskráningarkerfið okkar" << endl;
        } else {
            cout << "Óþekkt skipun" << endl;
        }
    } while (skipun != "hætta" && skipun != "haetta");

    // Búa til tilvik af Bátsferð
    batsferth(201, 2, 10, false);
    batsferth(202, 20, 100, true);
    batsferth(203, 6, 8, false);

    // Búa til tilvik af Flugferð
    flugfert(204, 10, 50, "Akureyri");
    flugfert(205, 120, 200, "Tenerife");
    flugfert(206, 3, 10, "Grímsey");
    flugfert(207, 50, 250, "Boston");

    // Búa til tilvik af Hjólaferð
    hjolaferth(208, 3, 10, 4);
    hjolaferth(209, 0, 20, 10);
    hjolaferth(210, 3, 5, 1);

    // Búa til tilvik af Journey og nota printallt() aðferðina til að prenta út upplýsingar um ferðina
    Journey myJourney(1, 30, 100);

    return 0;
}
