#include <iostream>
#include <string>
#include "breach.h"

using namespace std;


BreachType Breach::inferBreach(double value, double lowerLimit, double upperLimit) {
  if(value < lowerLimit) {
    return TOO_LOW;
  }
  if(value > upperLimit) {
    return TOO_HIGH;
  }
  return NORMAL;
}

BreachType Breach::classifyTemperatureBreach(
   Coolingtype* coolingtypeobj, double temperatureInC) {
    coolingtype =coolingtypeobj; 
  return this->inferBreach(temperatureInC, coolingtype->getlowlimit(), coolingtype->gethighlimit());
}
