#include "src/motor.h"
#include "src/IR.h"  //library
#include "src/servoClamp.h"
#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
IR ir = IR();         //library_use
Motor motor = Motor();
ServoClamp servoClamp;
Servo myservo25;  // create servo object to control a servo
Servo myservo26;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos25 = 0;    // grip variable to store the servo position
int pos26 = 0;    // sholder variable to store the servo position
int count=0;
int Flag=0;
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test");
  servoClamp.servosetup();
  delay(1000);
  Motor();
  motor.brake(0);
  delay(1000);
  
}

void loop() { 
   battery();
   bluetooth();
  if(Flag==0){
     battery();
   bluetooth();
   ir.sensor();
   IRmotor();
   Flag=0;
  }
  if(Flag==1){
     battery();
   bluetooth();
   motor.brake(0);
        Serial.println("TEST");
        servoClamp.gripopen();//160-60
        servoClamp.shoulderclose();//40-170
        servoClamp.gripclose();//60-160
        servoClamp.shoulderopen();//170-40
        motor.brake(0);
         Motor();   
        Serial.println("TEST");   
  }              
  delay(1);
}
