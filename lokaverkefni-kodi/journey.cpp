// Journey.cpp

#include <iostream>
#include <string>

#include "journey.hpp"
#include "flugfert.hpp"
#include "journeynode.hpp"
#include "journeyhandler.hpp"
#include "hjolaferth.hpp"
#include "batsferth.hpp"
using namespace std;

// Tómi smiður fyrir Journey hlutinn.
Journey::Journey(){
    this->nr = 0;
    this->fjoldibokathir = 0;
    this->heildarfjoldi = 0;
}
// Smiður sem mótar Journey hlut með tilgreindum upplýsingum.
Journey::Journey(int nr, int fjoldibokathir, int heildarfjoldi){
    this->nr = nr;
    this->fjoldibokathir = fjoldibokathir;
    this->heildarfjoldi = heildarfjoldi;
}
// Aðferð til að ná í auðkenni ferðarinnar.
int Journey::getID(){
    return this->nr;
}
// Aðferð til að setja auðkenni ferðarinnar.
void Journey::setID(int nr){
    this->nr = nr;
}
// Aðferð til að ná í fjölda bókafjalla í ferðinni.
int Journey::getfjoldibokathir(){
    return this->fjoldibokathir;
}


// Aðferð til að ná í heildarfjölda áttundaferðamanna í ferðinni.
int Journey::getheildarfjoldi(){
    return this->heildarfjoldi;
}

// Aðferð til að setja heildarfjölda áttundaferðamanna í ferðinni.
void Journey::setheildarfjoldi(int heildarfjoldi){
    this->heildarfjoldi = heildarfjoldi;
}

// Aðferð til að setja fjölda bókafjalla í ferðinni með áherslu á gilt gildi.
bool Journey::setfjoldibokathir(int fjoldibokathir) { // afhverju verður þetta hunsað þegar ég skra i ferðina

    int heildarfjoldi = getheildarfjoldi();

    if (fjoldibokathir >= 0 && fjoldibokathir <= heildarfjoldi) {
        this->fjoldibokathir = fjoldibokathir;
        cout << "þetta var keyrt" << endl;
        return true;
    } else {
        cout << "Þú getur ekki skráð fleiri farþega í ferðina en pláss er fyrir" << endl; // þetta loksins vikar! nei það gerir það ekki
        return false;
    }
}

// Fall sem ber saman númer ferða til að athuga hvort þær eru jafnar
bool Journey::operator==(Journey& hitt){
    return this->nr == hitt.getID();
}

// Fall sem ber saman númer ferða til að athuga hvort þær eru mismunandi
bool Journey::operator!=(Journey& hitt){
    return !(*this == hitt);
}

// Fall sem ber saman fjölda bókaðra þátta og númer ferða til að athuga hvort þessi ferð er minni en önnur
bool Journey::operator<(Journey& hitt){
    if(this->getfjoldibokathir() == hitt.getfjoldibokathir()) {
        return this->nr < hitt.getID();
    } 
    return this->fjoldibokathir < hitt.getfjoldibokathir();
}

// Fall sem athugar hvort þessi ferð er stærri en önnur
bool Journey::operator>(Journey& hitt){
    return hitt < *this;
}

// Fall sem athugar hvort þessi ferð er minni eða jafn stór og önnur
bool Journey::operator<=(Journey& hitt){
    return !(*this > hitt);
}

// Fall sem athugar hvort þessi ferð er stærri eða jafn stór og önnur
bool Journey::operator>=(Journey& hitt){
    return !(*this < hitt);
}

// Fall sem skilar tegund ferðar sem streng
std::string Journey::getType() {
    return "Jouney";
}

// Fall sem prentar út allar upplýsingar um ferð
void Journey::prentaallt() {
    cout << "Nr: " << this->nr << endl;
    cout << "Fjöldi bókaðra þátta: " << this->fjoldibokathir << endl;
    cout << "Heildarfjöldi áttundaferðamanna: " << this->heildarfjoldi << endl;
    cout << "Tegund ferðar: " << this->getType() << endl;
}


