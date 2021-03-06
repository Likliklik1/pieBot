#include <Servo.h>
//variables in camel case
int servoButton = 6;
int knifeButton = 7;
int servoButtonState = 0;
int knifeButtonState = 0;
int pieServoPin = 9;
int knifeServoPin = 10;
int angle = 0;
Servo pieServo;
Servo knifeServo;

void setup() {
  pieServo.attach(pieServoPin);
  knifeServo.attach(knifeServoPin);
  
}

void loop() {

  if(servoButtonState == HIGH) { 
  //turn pie
  //speeds not angles
   pieServo.write(110); //pricing in weight, person can stop the servo when they choose to do so.
  }

  else if (knifeButtonState == HIGH ){
  //turn knife
  for (angle = 0; angle < 180; angle++) {
      knifeServo.write(angle);
      delay(15);
    }
  for (angle = 180; angle > 0; angle--) {
      knifeServo.write(angle);
      delay(15);
   }

  
  } else {
    knifeServo.write(0); //sets knife back to original position
    pieServo.write(90); //stops moving pie servo
  }


}
