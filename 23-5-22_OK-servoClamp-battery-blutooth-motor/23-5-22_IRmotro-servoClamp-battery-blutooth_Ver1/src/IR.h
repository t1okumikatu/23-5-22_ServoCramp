#ifndef _IR_H_
#define _IR_H_
#include "Arduino.h"

class IR{
  public:
    IR();
    void sensor();
    int Ldata = 0;
    int Rdata = 0;
  private :
    const int Lpin = 32;
    const int Rpin = 33;
   
};

#endif
