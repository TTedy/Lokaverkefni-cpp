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
// Aðferð til að setja fjölda bókafjalla í ferðinni með áherslu á gilt gildi.
bool Journey::setfjoldibokathir(int fjoldibokathir){
    if (fjoldibokathir <= getheildarfjoldi() && fjoldibokathir >= 0) {
        // Tryggðu að ekki sé hægt að skrá fleiri farþega í ferð en pláss er fyrir.
        cout << "Þú getur ekki skráð fleiri farþega í ferðina en pláss er fyrir" << endl;
        return false;
    } else {
        this->fjoldibokathir = fjoldibokathir;
        return true;
    }
}
// Aðferð til að ná í heildarfjölda áttundaferðamanna í ferðinni.
int Journey::getheildarfjoldi(){
    return this->heildarfjoldi;
}
// Aðferð til að setja heildarfjölda áttundaferðamanna í ferðinni.
void Journey::setheildarfjoldi(int heildarfjoldi){
    this->heildarfjoldi = heildarfjoldi;
}
std::string Journey::getType(){
    return "Journey";
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



