// flugfert.cpp

#include <iostream>
#include <string>

#include "flugfert.hpp"

    flugfert::flugfert(){
        this->nr = 0; 
        this->fjoldibokathir = 0; 
        this->heildarfjoldi = 0; 
        this->stadsetning = "";      
    }
    flugfert::flugfert(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning){
        this->setID(nr);
        this->setfjoldibokathir(fjoldibokathir);
        this->setheildarfjoldi(heildarfjoldi);
        this->stadsetning = stadsetning;
    }

    int flugfert::getID(){
        return this->nr;
    }
    void flugfert::setID(int nr){
        this->nr = nr;
    }
    int flugfert::getfjoldibokathir(){
        return this->fjoldibokathir;
    }
    void flugfert::setfjoldibokathir(int fjoldibokathir){
        this->fjoldibokathir = fjoldibokathir;
    }
    int flugfert::getheildarfjoldi(){
        return this->heildarfjoldi;
    }
    void flugfert::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }
    std::string flugfert::getstadsetning() {
        return stadsetning;
    }
    void flugfert::setheildarfjoldi(int heildarfjoldi){
        this->heildarfjoldi = heildarfjoldi;
    }
    void flugfert::prenta(){
        std::cout << "Flugferð: " << this->stadsetning << std::endl;
    }