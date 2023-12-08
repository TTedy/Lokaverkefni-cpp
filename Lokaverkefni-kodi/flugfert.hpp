// flugfert.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class flugfert : public Journey
{
private:
    std::string stadsetning; 

public:
    flugfert();
    flugfert(int nr, int fjoldibokathir, int heildarfjoldi, const std::string& setstadsetning);
    std::string getstadsetning(); 
    void setstadsetning(const std::string& setstadsetning); 
};
