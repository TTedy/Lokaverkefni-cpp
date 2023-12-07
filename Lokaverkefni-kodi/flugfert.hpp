// flugfert.hpp

#pragma once

#include <iostream>
#include <string>

#include "journey.hpp"

class Flugfert : public Journey{
    private:
        std::string stadsetning;
    public:
        Flugfert();
        Flugfert(std::string stadsetning);
        std::string getstadsetning();
        void setstadsetning(std::string stadsetning);
        virtual ~Flugfert();
        
};