//////////////////////////////////////
//                                  //
//           ENZO TOYOS             //
//                                  //
//         VERSION: 1.0.0           // 
//                                  //
//////////////////////////////////////

#ifndef _ECRAN_H_ 
#define _ECRAN_H_
#endif



/************DECLARATION***********/
#include <LiquidCrystal_I2C.h>



//déclaration des fonctions 
void setupSreen(void);
void writeScreen(int cursorX, int cursorY, char* value);
void refershScreen(void);
