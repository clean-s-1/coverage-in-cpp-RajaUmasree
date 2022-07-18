#pragma once
#include <stdio.h>
#include <string>
#include "typewise-alert.h"


class Breach {
  public:
    BreachType inferBreach(double value, double lowerLimit, double upperLimit);
    BreachType classifyTemperatureBreach(CoolingType coolingType, double temperatureInC); 
};
