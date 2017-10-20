#include <Servo.h>
//variables in camel case
int servoButton = 6;
int knifeButton = 7;
int servoButtonState = 0;
int knifeButtonState = 0;
int pieServoPin = 9;
int knifeServoPin = 10;
Servo pieServo;//Should be 360 degree
Servo knifeServo;//should be 180 degree
void slice();
void turn();

void setup() {
  pieServo.attach(pieServoPin);
  knifeServo.attach(knifeServoPin);
  
}

void loop() {
  void turn();//turn using pieServo
  
  void slice();//cuts using knifeServo
  
}
void turn(){
if(servoButtonState == HIGH){
  
    start = millis();//saves start time
    while(millis()-start == 1000)//check when 1 seconds of turning are over
    {
       pieServo.write(0);//turns continously at speed of 45
    }
        pieServo.write(90);//stops servo
      
    

  }
  
}

void slice() {
  //checks if knife is down then brings it up if still down
  if(knifeServo.read() != 90)
  {
    knifeServo.write(90); //brings it up
  }
if(knifeButtonState == HIGH ){
  {
    pieServo.write(0);//lowers knife
    knifeServo.write(90);//brings it back up
  }
  }

  
}

