#include <Servo.h> 
int servoPin = 2;
Servo Servo1;

void setup() {
  Servo1.attach(servoPin);
  
      Servo1.write(0);
      delay(100);  
   
      Servo1.write(45);
      delay(100);

      Servo1.write(90);
      delay(100);

            Servo1.write(135);
      delay(100);  
   
      Servo1.write(175);
      delay(100);
}

void loop(){
}

