// listedlist.cpp

#include "journey.hpp"

    Journey::Journey(int Nr, int Fjöldi_bókaðir, int Heildarfjöldi){
        this->Nr = Nr;
        this->Fjöldi_bókaðir = Fjöldi_bókaðir;
        this->Heildarfjöldi = Heildarfjöldi;
    }
    int Journey::getID(){
        return Nr;
    }
    void Journey::setID(int Nr){
        this->Nr = Nr;
    }
    int Journey::getFjöldi_bókaðir(){
        return Fjöldi_bókaðir;
    }
    void Journey::setFjöldi_bókaðir(int Fjöldi_bókaðir){
        if (Fjöldi_bókaðir > getHeildarfjöldi()){
            std::cout << "Það eru ekki nógu mörg sæti laus" << std::endl;
        } else {
            this->Fjöldi_bókaðir = Fjöldi_bókaðir;
        }
    }
    int Journey::getHeildarfjöldi(){
        return Heildarfjöldi;
    }
    void Journey::setHeildarfjöldi(int Heildarfjöldi){
        this->Heildarfjöldi = Heildarfjöldi;
    }

