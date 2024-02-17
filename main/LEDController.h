#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H
#include <Arduino.h>

class LEDController {
  private:
    int pin1;
    int pin2;
    int pin3;

  public:
    LEDController(int pin1, int pin2, int pin3);
    void initialize();
    void blink(int duration);
};

#endif
