#include "src/motor.h"
#include "servoClamp.h"
#include "BluetoothSerial.h"
BluetoothSerial SerialBT;
Motor motor = Motor();
ServoClamp servoClamp;
Servo myservo25;  // create servo object to control a servo
Servo myservo26;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos25 = 0;    // grip variable to store the servo position
int pos26 = 0;    // sholder variable to store the servo position
int count=0;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test");
  servoClamp.servosetup();
  delay(1000);
}

void loop() { 
   battery();
   bluetooth();
  //TEST();
 // servoClamp.gripclose();
  Motor();
  motor.forward(180);
  delay(1000);
}
