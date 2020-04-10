#define LIM 700 
#define LDR A0

#include <Servo.h>

Servo space;

void setup() {
  space.attach(9);
  space.write(20);

  Serial.begin(9600);
}

void loop() {
  float ldr = analogRead(LDR);

  Serial.println(ldr);
  
  if(ldr > LIM){
    space.write(20);
    delay(150);
  }
  space.write(0);
  delay(50);
}
