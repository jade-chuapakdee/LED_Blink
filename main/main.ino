#include <Arduino.h>
#include "LEDController.h"

const int ledPinRed = PC13;
const int ledPinWhite = PC14;
const int ledPinGreen = PC15;

// Create an instance of LEDController
LEDController led(ledPinRed,ledPinWhite,ledPinGreen);

void setup() {
  led.initialize();

}

void loop() {
  led.blink(800);

}
