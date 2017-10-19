#include <Servo.h>
//variables in camel case
int servoButton = 6;
int knifeButton = 7;
int servoButtonState = 0;
int knifeButtonState = 0;
int pieServoPin = 9;
int knifeServoPin = 10;
Servo pieServo;
Servo knifeServo;
void slice();
void turn();

void setup() {
  pieServo.attach(pieServoPin);
  knifeServo.attach(knifeServoPin);
  
}

void loop() {
  void turn();
  
  void slice();
  
}
void turn(){
if(servoButtonState == HIGH){
  //turn pie
  }
  
}

void slice() {
if(knifeButtonState == HIGH ){
  //slice pie
  }

  
}

