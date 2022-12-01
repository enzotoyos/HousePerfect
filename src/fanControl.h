//////////////////////////////////////
//                                  //
//           ENZO TOYOS             //
//                                  //
//         VERSION: 1.0.0           // 
//                                  //
//////////////////////////////////////

#ifndef _FANCONTROL_H_ 
#define _FANCONTROL_H_
#endif



/************DECLARATION***********/
#define fanPin1 19
#define fanPin2 18
#include <Arduino.h>


//déclaration des fonctions 
void setupFan(void);
void pilotFan(bool isActivate, int speed);

