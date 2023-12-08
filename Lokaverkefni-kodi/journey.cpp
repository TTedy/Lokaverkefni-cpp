// Journey.cpp

#include "journey.hpp"

    Journey::Journey(){
        this->nr = 0;
        this->fjoldibokathir = 0;
        this->heildarfjoldi = 0;
    }
    Journey::Journey(int nr, int fjoldibokathir, int heildarfjoldi){
        this->setID(nr);
        this->setfjoldibokathir(fjoldibokathir);
        this->setheildarfjoldi(heildarfjoldi);
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
    int Journey::getheildarfjoldi(){
        return this->heildarfjoldi;
    }
    void Journey::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }

    void Journey::prentaallt() {
        std::cout << "ID: " << this->nr << std::endl;
        std::cout << "Fjöldi bókaða þátttakenda: " << this->fjoldibokathir << std::endl;
        std::cout << "Heildarfjöldi þátttakenda: " << this->getheildarfjoldi() << std::endl;
    }// þarf static til að geta notað þetta í main, þvi það er ekki til instance af þessu

    bool Journey::setfjoldibokathir(int fjoldibokathir) {
        if (fjoldibokathir <= getheildarfjoldi() || fjoldibokathir < 0) {
            return false;
        } else {
            this->fjoldibokathir = fjoldibokathir;
            return true;
        }
    }

