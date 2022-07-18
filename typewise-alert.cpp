#include "typewise-alert.h"
#include "alert.h"

#include <stdio.h>

void checkAndAlert(
    AlertTarget alertTarget, BatteryCharacter batteryChar, double temperatureInC) {

   Breach breachobj;
  BreachType breachType = breachobj.classifyTemperatureBreach(
    batteryChar.coolingType, temperatureInC
  );
  
  IAlert *alert = new Alert();
  switch(alertTarget) {
    case TO_CONTROLLER:
      alert->sendToController(breachType);
      break;
    case TO_EMAIL:
      alert->sendToEmail(breachType);
      break;
  }
}

