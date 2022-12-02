//////////////////////////////////////
//                                  //
//           ENZO TOYOS             //
//                                  //
//         VERSION: 1.0.0           // 
//                                  //
//////////////////////////////////////

#ifndef _BUTTON_H_ 
#define _BUTTON_H_
#endif



/************DECLARATION***********/
#define LEFT_BUTTON_PIN 16
#define RIGHT_BUTTON_PIN 27
#include <Arduino.h>


//déclaration des fonctions 
void setupButton(void);
void pilotLED(bool light);
void leftButtonPressed(void);
void rightButtonPressed(void);