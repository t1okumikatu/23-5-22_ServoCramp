#ifndef _SERVOCLAMP_H_
#define _SERVOCLAMP_H_
#include <Servo.h>
#include <Arduino.h>

class ServoClamp{
  public:
    void servosetup();
    void gripclose();//1a.ゆっくり閉める
    void gripopen();//2b.ゆっくり開く
    void gripclose130();//3c.すぐ閉める    
    void shoulderclose();//4d.ゆっくりおろす
    void shoulderopen();//5e.ゆっくりあげる
    void shoulderclose170();//6f.すぐおろす
    //int Cranp=0;
    //int pos16=0;
   // int pos17=0;
    Servo myservoshou;
    Servo myservogrip;
  private:
    
};

#endif
