#include "LEDController.h"

LEDController::LEDController(int pin1, int pin2, int pin3){
  this->pin1 = pin1;
  this->pin2 = pin2;
  this->pin3 = pin3;
}

void LEDController::initialize(){
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
}


void LEDController::blink(int duration){
  int pins[] = {pin1, pin2, pin3};
  int numPins = sizeof(pins) / sizeof(pins[0]);

  for (int i = 0; i < numPins; i++){
    digitalWrite(pins[i],HIGH);
    delay(duration);
    digitalWrite(pins[i], LOW);
    delay(duration);
  }
 
}

