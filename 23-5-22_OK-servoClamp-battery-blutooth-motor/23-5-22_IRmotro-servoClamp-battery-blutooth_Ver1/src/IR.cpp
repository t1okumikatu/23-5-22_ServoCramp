#include "IR.h"
#include "Arduino.h"
 
IR::IR(){
  pinMode(Lpin, INPUT_PULLUP);
  pinMode(Rpin, INPUT_PULLUP);  
}
void IR::sensor(){
     Ldata=analogRead(Lpin);
     Rdata=analogRead(Rpin);
}
