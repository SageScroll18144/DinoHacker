#define LIM 700 
#define LDR A0

#include <Servo.h>

Servo space;

void setup() {
  space.attach(9);
}

void loop() {
  float ldr = analogRead(LDR);
  
}
