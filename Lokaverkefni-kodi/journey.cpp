// listedlist.cpp

#include "journey.hpp"

    Journey::Journey() {
        this->nr = 0;
        this->fjoldibokathir = 0;
        this->heildarfjoldi = 0;
    }

    Journey::Journey(int nr, int fjoldibokathir, int heildarfjoldi){
        this->nr = nr;
        this->fjoldibokathir = fjoldibokathir;
        this->heildarfjoldi = heildarfjoldi;
    }
    
    int Journey::getID(){
        return this->nr;
    }
    void Journey::setID(int nr){
        this->nr = nr;
    }
    int Journey::getfjoldibokathir(){
        return this->fjoldibokathir;
    }
    bool Journey::setfjoldibokathir(int fjoldibokathir){
        if (fjoldibokathir > getheildarfjoldi()){
            //std::cout << "Það eru ekki nógu mörg sæti laus" << std::endl;
            return false;
        } else {
            this->fjoldibokathir = fjoldibokathir;
            return true;
        }
    }

    int Journey::getheildarfjoldi(){
        return this->heildarfjoldi;
    }
    void Journey::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }
    void Journey::prenta(){
        std::cout << "ID: " << getID() << std::endl;
        std::cout << "Fjöldi bókaðra þátta: " << getfjoldibokathir() << std::endl;
        std::cout << "Heildarfjöldi þátta: " << getheildarfjoldi() << std::endl;
    }