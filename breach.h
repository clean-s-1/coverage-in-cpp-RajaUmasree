#pragma once

#include <stdio.h>
#include <string>
#include "typewise-alert.h"

class Coolingtype {
    private:
         double lowerLimit;
         double upperLimit;
    public:
        Coolingtype(int lowlimit, int highlimit) : lowerLimit{lowlimit}, upperLimit{highlimit} {}
        
        double getlowlimit() {
            return lowerLimit;
        }
        double gethighlimit() {
            return upperLimit;
        }
};

class Passivecooling: public Coolingtype {
    public:
        passivecooling() : Coolingtype(0,20) {}
};

class Activecooling: public Coolingtype {
    public:
        activecooling() : Coolingtype(0,20) {}
};

class Normalcooling: public Coolingtype {
    public:
        passivecooling() : Coolingtype(0,20) {}
};


class Breach {
  Coolingtype *coolingtype= nullptr;
  public:
    
    BreachType inferBreach(double value, double lowerLimit, double upperLimit);
    BreachType classifyTemperatureBreach(Coolingtype* coolingtypeobj, double temperatureInC); 
};
