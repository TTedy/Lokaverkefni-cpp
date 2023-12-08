// Journey.cpp

#include "journey.hpp"


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
// Aðferð til að prenta út upplýsingar um ferðina.
void Journey::prentaallt(){
    std::cout << "Journey: " << this->nr << std::endl;
}


