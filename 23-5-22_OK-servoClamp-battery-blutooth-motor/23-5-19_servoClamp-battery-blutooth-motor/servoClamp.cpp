#include "servoClamp.h"
    Servo myservoshou;
    Servo myservogrip;
    int shou=0;
    int grip=0;
   //int Cranp=0;
  
  void ServoClamp::servosetup() {
  myservoshou.attach(25); 
  delay(100);
  myservogrip.attach(26); 
  delay(100);
  myservoshou.write(40);  //9shoulder真上40    505050
  delay(50); 
  myservogrip.write(60);  //grip open   60-130
  delay(100);
  myservoshou.detach(); 
  delay(100);
  myservogrip.detach(); 
  delay(100);
  
 // motor.brake(0);
 // Motor();
  delay(100);   
}
void ServoClamp::gripclose(){//1a.ゆっくり閉める
   myservogrip.attach(26); 
   delay(50);
   for (grip = 60; grip <= 130; grip += 1) { // goes from 0 degrees to 180 degrees
   myservogrip.write(grip);// tell servo to go to position in variable 'pos'
   delay(50);
  Serial.println(grip);  
}
   myservogrip.detach();    
        delay(200);     
}
void ServoClamp::gripopen(){//2b.ゆっくり開く
  myservogrip.attach(26); 
   delay(15);
  for (grip = 130; grip >= 60; grip -= 1){ // goes from 0 degrees to 180 degrees
    myservogrip.write(grip);
    delay(50); // tell servo to go to position in variable 'pos'
    Serial.println(grip);
    delay(50);                       // waits 15ms for the servo to reach the position
  }
  myservogrip.detach();
  delay(50);
}
void ServoClamp::gripclose130(){//3c.すぐ閉める
   myservogrip.attach(26);
   delay(50); 
   myservogrip.write(140);              // tell servo to go to position in variable 'pos'
   delay(1000);
   myservogrip.detach();    
        delay(50);     
}
void ServoClamp::shoulderclose(){//4d.ゆっくりおろす
   myservoshou.attach(25);
   delay(100);
for (shou = 40; shou <= 170; shou += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservoshou.write(shou); 
    delay(50); // tell servo to go to position in variable 'pos'
     Serial.println(shou);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    myservoshou.detach();
    delay(100);
}
void ServoClamp::shoulderopen(){//5e.ゆっくりあげる
   myservoshou.attach(25); 
   delay(100);
   
   for (shou = 170; shou >= 40; shou -= 1) { // goes from 180 degrees to 0 degrees
    myservoshou.write(shou);
    delay(50); // tell servo to go to position in variable 'pos'
     Serial.println(shou);
     delay(15);   
  }
   myservoshou.detach();
   delay(100);
}
void ServoClamp::shoulderclose170(){//6f.すぐおろす
  myservoshou.attach(25);
   delay(50);
  myservoshou.write(170);              // tell servo to go to position in variable 'pos'
   delay(50);
  myservoshou.detach();
   delay(50);
}
