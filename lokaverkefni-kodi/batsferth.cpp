// batsferth.cpp

#include "flugfert.hpp"
#include "journey.hpp"
#include "journeynode.hpp"
#include "journeyhandler.hpp"
#include "hjolaferth.hpp"
#include "batsferth.hpp"

using namespace std;

// Tómi smiður fyrir hjolaferth hlutinn.
batsferth::batsferth(){
    this->yfirbiggdur = false;      
}
// Smiður sem mótar flugfert hlut með tilgreindum upplýsingum og kallar á Journey smiðinn.
batsferth::batsferth(int nr, int fjoldibokathir, int heildarfjoldi, bool yfirbiggdur) : Journey(nr,fjoldibokathir, heildarfjoldi){
    this->yfirbiggdur = yfirbiggdur;
} 

// Aðferð til að ná í upplýsingar um hvort ferja sé yfirbyggð eða ekki.
bool batsferth::getyfirbiggdur(){
    return this->yfirbiggdur;
}

// Aðferð til að setja upplýsingar um hvort ferja sé yfirbyggð eða ekki.
void batsferth::setyfirbiggdur(bool yfirbiggdur){
    this->yfirbiggdur = yfirbiggdur;
}

// Aðferð til að prenta út upplýsingar um ferjuna.
void batsferth::prenta(){
    std::cout << "er laust pláss í Bátsferðinni : " << (this->yfirbiggdur ? "Nei" : "Já") << std::endl;
}

std::string batsferth::getType(){
    return "batsferth";
}

