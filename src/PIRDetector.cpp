#include "PIRDetector.h"

void setupPIRDetection(void){
    pinMode(PIR_PIN, INPUT);
};

int PIRDetection(void){
  int test = digitalRead(PIR_PIN);
  return test;
};