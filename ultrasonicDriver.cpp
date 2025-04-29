#include "ultrasonic_driver.h"

void UltrasonicDriver::Init() {
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
}
void UltrasonicDriver::GetDistance(uint16_t &distance) {
  unsigned int pulseWidth = 0;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  pulseWidth = ((unsigned int)pulseIn(ECHO_PIN, HIGH) / 58);
  distance = pulseWidth;

}
void UltrasonicDriver::Test() {
  unsigned int pulseWidth;
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  pulseWidth = ((unsigned int)pulseIn(ECHO_PIN, HIGH) / 58);
  Serial.print("ULTRASONIC=");
  Serial.print(pulseWidth);
  Serial.println(" cm");
  delay(60);
}