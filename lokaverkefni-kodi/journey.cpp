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
bool Journey::setfjoldibokathir(int fjoldibokathir) { // afhverju verður þetta hunsað þegar ég skra i ferðina?
    if (fjoldibokathir >= 0 && fjoldibokathir <= getheildarfjoldi()) {
        this->fjoldibokathir = fjoldibokathir;
        cout << "þetta var keyrt" << endl;
        return true;
    } else {
        // Tryggðu að ekki sé hægt að skrá fleiri farþega í ferðina en pláss er fyrir.
        cout << "Þú getur ekki skráð fleiri farþega í ferðina en pláss er fyrir" << endl;
        return false;
    }
}


bool Journey::operator==(Journey& hitt){
    return this->nr == hitt.getID();
}
bool Journey::operator!=(Journey& hitt){
    return !(*this == hitt);
}
bool Journey::operator<(Journey& hitt){
        if(this->getfjoldibokathir() == hitt.getfjoldibokathir()) {
        return this->nr < hitt.getID();
    } 
    return this->fjoldibokathir < hitt.getfjoldibokathir();
}
bool Journey::operator>(Journey& hitt){
    return hitt < *this;
}
bool Journey::operator<=(Journey& hitt){
    return !(*this > hitt);
}
bool Journey::operator>=(Journey& hitt){
    return !(*this < hitt);
}

std::string Journey::getType() {
    return "Jouney";
}

void Journey::prentaallt() {
    cout << "Nr: " << this->nr << endl;
    cout << "Fjöldi bókaðra þátta: " << this->fjoldibokathir << endl;
    cout << "Heildarfjöldi áttundaferðamanna: " << this->heildarfjoldi << endl;
    cout << "Tegund ferðar: " << this->getType() << endl;
}



