#include "fanControl.h"

void setupFan(void){
  pinMode(fanPin1, OUTPUT);
  pinMode(fanPin2, OUTPUT);
};

void pilotFan(bool isActivate, int speed){
    if(isActivate == true){
        digitalWrite(fanPin1, HIGH); //pwm = 0
        analogWrite(fanPin2, speed);
    }else {
        digitalWrite(fanPin1, LOW);
    }

};