#include "typewise-alert.h"
#include <bits/stdc++.h>

class IAlert {
  public:
      virtual void sendToController(BreachType breachType) =0;
      virtual void sendToEmail(BreachType breachType) = 0;
};

class Alert: public IAlert  {
  public:
     void sendToController(BreachType breachType);
     void sendToEmail(BreachType breachType);
};
