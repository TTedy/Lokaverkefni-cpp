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
<<<<<<< HEAD
    int Journey::getFjöldi_bókaðir(){
        return Fjöldi_bókaðir;
=======
    bool Journey::setfjoldibokathir(int fjoldibokathir){
        if (fjoldibokathir > getheildarfjoldi()){
            return false;
        } else {
            this->fjoldibokathir = fjoldibokathir;
            return true;
        }
    }
<<<<<<< HEAD
    int Journey::getHeildarfjöldi(){
        return Heildarfjöldi;
=======

    int Journey::getheildarfjoldi(){
        return this->heildarfjoldi;
>>>>>>> dad7c05d1d044c3fc0668a8971258358df5ea7d2
    }
    void Journey::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }
<<<<<<< HEAD

=======
    void Journey::prenta(){
        std::cout << "ID: " << getID() << std::endl;
        std::cout << "Fjöldi bókaðra þátta: " << getfjoldibokathir() << std::endl;
        std::cout << "Heildarfjöldi þátta: " << getheildarfjoldi() << std::endl;
    }
>>>>>>> dad7c05d1d044c3fc0668a8971258358df5ea7d2
