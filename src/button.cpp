#include "button.h"


void setupButton(void){
  pinMode(RIGHT_BUTTON_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(RIGHT_BUTTON_PIN), rightButtonPressed, HIGH);
  pinMode(LEFT_BUTTON_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(LEFT_BUTTON_PIN), leftButtonPressed, HIGH);
}

void rightButtonPressed(void){
  Serial.println("bouton droit appuyé");
}

void leftButtonPressed(void){
  Serial.println("bouton gauche appuyé");
}