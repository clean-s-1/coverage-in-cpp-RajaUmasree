#include <iostream>

using namespace std;

void Alert::sendToController(BreachType breachType) {
        const unsigned short header = 0xfeed;
        printf("%x : %x\n", header, breachType);       
}

void Alert::sendToEmail(BreachType breachType) {
  const char* recepient = "a.b@c.com";
  switch(breachType) {
    case TOO_LOW:
       printf("To: %s\n", recepient);
       printf("Hi, the temperature is too low\n");
       break;
     case TOO_HIGH:
        printf("To: %s\n", recepient);
        printf("Hi, the temperature is too high\n");
        break;
      case NORMAL:
          break;
      }
      
 }
  
  
  
}
