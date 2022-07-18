#include "typewise-alert.h"
#include "alert.h"
#include "breach.h"

#include <stdio.h>

void checkAndAlert(
    AlertTarget alertTarget, Coolingtype* coolingtypeobj, double temperatureInC) {

   Breach breachobj;
  BreachType breachType = breachobj.classifyTemperatureBreach(coolingtypeobj, temperatureInC
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

