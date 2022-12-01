//////////////////////////////////////
//                                  //
//           ENZO TOYOS             //
//                                  //
//         VERSION: 1.0.0           // 
//                                  //
//////////////////////////////////////

#ifndef _NFCSCANNER_H_ 
#define _NFCSCANNER_H_
#endif



/************DECLARATION***********/
#include "MFRC522_I2C.h"



//déclaration des fonctions 
void setupNFCScanner(void);
String readUID(void);
