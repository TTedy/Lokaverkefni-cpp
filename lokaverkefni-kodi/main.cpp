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

    // Búa til tilvik af Bátsferð
    journeyhandler.skrabath(201, 2, 10, false);
    journeyhandler.skrabath(202, 20, 100, true);
    journeyhandler.skrabath(203, 6, 8, false);

    // Búa til tilvik af Flugferð
    journeyhandler.skraflug(204, 10, 50, "Akureyri");
    journeyhandler.skraflug(205, 120, 120, "Tenerife");
    journeyhandler.skraflug(206, 3, 10, "Grímsey");
    journeyhandler.skraflug(207, 50, 250, "Boston");

    // Búa til tilvik af Hjólaferð
    journeyhandler.skrahjola(208, 3, 10, 4);
    journeyhandler.skrahjola(209, 0, 20, 10);
    journeyhandler.skrahjola(210, 3, 5, 1);


    // Búa til tilvik af Journey og nota printallt() aðferðina til að prenta út upplýsingar um ferðina
    Journey myJourney(1, 30, 100);


    do {
        cout << "Sláðu inn skipun: ";
        getline(cin, inntak);
        stringstream ss(inntak);
        ss >> skipun; // skill ekki þetta stringstream nogu vél þannig byrjaði bara að nota cin í staðinn

        if (skipun == "skra" || skipun == "skrá") {
            cout << "Sláðu inn tegund ferðar: ";
            cin >> tegund;

            if (tegund == "flugfert" || tegund == "flugferð") {
                cout << "skráðu ferð með því að skrifa inn þessi gögn: ";
                cout << "nr, fjoldibokathir, heildarfjoldi, setstadsetning";
                cin >> nr >> fjoldibokathir >> heildarfjoldi >> setstadsetning;
                journeyhandler.skraflug(nr, fjoldibokathir, heildarfjoldi, setstadsetning);
                journeyhandler.printflug();
            } else if (tegund == "hjolaferth" || tegund == "hjólaferð") {
                cout << "skráðu ferð með því að skrifa inn þessi gögn: ";
                cout << "nr, fjoldibokathir, heildarfjoldi, timi";
                cin >> nr >> fjoldibokathir >> heildarfjoldi >> timi;
                journeyhandler.skrahjola(nr, fjoldibokathir, heildarfjoldi, timi);
                cout << "Skráði hjólaferð nr. " << nr << endl;
                journeyhandler.printhjola();
            } else if (tegund == "batsferth" || tegund == "bátsferð") {
                cout << "skráðu ferð með því að skrifa inn þessi gögn: ";
                cout << "nr, fjoldibokathir, heildarfjoldi, yfirbiggdur";
                cin >> nr >> fjoldibokathir >> heildarfjoldi >> yfirbiggdur;
                journeyhandler.skrabath(nr, fjoldibokathir, heildarfjoldi, yfirbiggdur);
                cout << "Skráði bátsferð nr. " << nr << endl;
                journeyhandler.printbath();
            } else {
                cout << "Óþekkt tegund ferðar, reyndu aftur" << endl;
            }
        } 
        else if (skipun == "skoda" || skipun == "skoða") {
            cout << "Sláðu inn tegund ferðar: ";
            cin >> tegund;

            if (tegund == "flugfert" || tegund == "flugferð") {
                journeyhandler.printflug();
                cout << "Hvaða flugferð viltu skoða? Gefðu nr: ";
                cin >> ferth;
                cout << "\n";
                journeyhandler.skodaval(ferth);
            } else if (tegund == "hjolaferth" || tegund == "hjólaferð") {
                journeyhandler.printhjola();
                cout << "Hvaða hjólaferð viltu skoða? Gefðu nr: ";
                cin >> ferth;
                cout << "\n";
                journeyhandler.skodaval(ferth);
            } else if (tegund == "batsferth" || tegund == "bátsferð") {
                journeyhandler.printbath();
                cout << "Hvaða bátsferð viltu skoða? Gefðu nr: ";
                cin >> ferth; 
                cout << "\n";
                journeyhandler.skodaval(ferth);
            } else {
                cout << "Óþekkt tegund ferðar, reyndu aftur" << endl;
            }
        } else if (skipun == "eyda" || skipun == "eyða") {
            journeyhandler.printallt();
            cout << "Sláðu inn númer ferðar sem þú vilt eyða: ";
            
            cin >> nr;
            journeyhandler.eyda(nr);
            cout << "Eyddi ferð nr. " << nr << endl;
            cout << "\n" << endl;
            journeyhandler.printallt();
            break; // hada þegar þetta keyrir endalaust
        } else if (skipun == "breyta" || skipun == "bæta") {
            journeyhandler.printallt();
            cout << "Sláðu inn númer ferðar sem þú vilt breyta, og svo með nýju númeri: ";
            cin >> nr >> nyja;
            journeyhandler.breyta(nr, nyja);
            cout << "Breytti ferð nr. " << nr << " í " << nyja << endl; 
            cout << "\n" << endl;
            cout << "\n" << endl;
            journeyhandler.printallt();
            break; // hata þegar þetta keyrir endalaust
        } else if (skipun == "prentaallt" || skipun == "prenta allt" || skipun == "prentallt") {
            journeyhandler.printallt();
        } else if (skipun == "prentaflug" || skipun == "prenta flug" || skipun == "prenta flugferðir") {
            journeyhandler.printflug();
        } else if (skipun == "prentahjola" || skipun == "prenta hjóla" || skipun == "prenta hjólaferðir") {
            journeyhandler.printhjola();
        } else if (skipun == "prentabath" || skipun == "prenta báts" || skipun == "prenta bátsferðir") { // lagað var vandamál með type en núna er allt komið í lag
            journeyhandler.printbath();
        } else if (skipun == "hætta" || skipun == "haetta") {
            cout << "Takk fyrir að nota ferðaskráningarkerfið okkar" << endl;
        } else {
            cout << "Óþekkt skipun" << endl;
        }
    } while (skipun != "hætta" && skipun != "haetta");

    // takk fyrir spönnina. þetta var mjög gaman að gera. ég er búinn að vera að vinna í þessu í 7 daga og er búinn að læra mikið.

    return 0;
}
