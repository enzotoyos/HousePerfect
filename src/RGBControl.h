//////////////////////////////////////
//                                  //
//           ENZO TOYOS             //
//                                  //
//         VERSION: 1.0.0           // 
//                                  //
//////////////////////////////////////

#ifndef _RGBCONTROL_H_ 
#define _RGBCONTROL_H_
#endif



/************DECLARATION***********/
#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

#define LED_COUNT 4
#define RGB6812_PIN 26

//déclaration des fonctions 
void setupRGB(void);
void controlRGB(char* color);
void refreshRGB(void);