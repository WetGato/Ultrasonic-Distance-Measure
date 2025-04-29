#ifndef ULTRASONIC_DRIVER_H
#define ULTRASONIC_DRIVER_H

#include <Arduino.h>

class UltrasonicDriver {

  public:
    void Init();
    void Test();
    void GetDistance(uint16_t &distance);

  private:
    static constexpr uint8_t TRIG_PIN = 13;
    static constexpr uint8_t ECHO_PIN = 12;
};

#endif
