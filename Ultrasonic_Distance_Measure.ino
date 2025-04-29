#include "ultrasonic_driver.h"

UltrasonicDriver ultrasonic;

void setup() {
  Serial.begin(9600);
  ultrasonic.Init();

}

void loop() {
  // put your main code here, to run repeatedly:
  ultrasonic.Test();
}
