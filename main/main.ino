#define LIM 700 
#define LDR A0

#include <Servo.h>

Servo space;

void setup() {
  space.attach(9);
  space.write(20);
}

void loop() {
  float ldr = analogRead(LDR);
  if(ldr > LIM){
    space.write(20);
    delay(150);
  }
  space.write(0);
  delay(50);
}
