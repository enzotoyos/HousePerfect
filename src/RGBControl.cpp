#include "RGBControl.h"
Adafruit_NeoPixel strip(LED_COUNT, RGB6812_PIN, NEO_GRB + NEO_KHZ800);

void setupRGB(void){
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void controlRGB(char* color){
  if(color == "blue"){
    strip.setPixelColor(0, strip.Color(0,   0,   255));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0,   0,   255));
    strip.setPixelColor(2, strip.Color(0,   0,   255));
    strip.setPixelColor(3, strip.Color(0,   0,   255));  
  }else if(color = "red"){
    strip.setPixelColor(0, strip.Color(255,   0,   0));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(255,   0,   0));
    strip.setPixelColor(2, strip.Color(255,   0,   0));
    strip.setPixelColor(3, strip.Color(255,   0,   0));
  }else if(color = "green"){
    strip.setPixelColor(0, strip.Color(0,   255,   0));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(0,   255,   0));
    strip.setPixelColor(2, strip.Color(0,   255,   0));
    strip.setPixelColor(3, strip.Color(0,   255,   0));  
  }else if(color = "purple"){
    strip.setPixelColor(0, strip.Color(128,   0,  128));         //  Set pixel's color (in RAM)
    strip.setPixelColor(1, strip.Color(128,   0,  128));
    strip.setPixelColor(2, strip.Color(128,   0,  128));
    strip.setPixelColor(3, strip.Color(128,   0,  128)); 
  }
  
 strip.show();
 return;
}

void refreshRGB(void){
   strip.clear();
}