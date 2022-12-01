//////////////////////////////////////
//                                  //
//           ENZO TOYOS             //
//                                  //
//         VERSION: 1.0.0           // 
//                                  //
//////////////////////////////////////

#ifndef _SENSOR_H_ 
#define _SENSOR_H_
#endif



/************DECLARATION***********/
#include "DHT.h"
#define DHTPIN 17   
#define DHTTYPE DHT11
#define GAS_SENSOR 23 


//déclaration des fonctions 
float getTemperature(void);
float getHumidity(void);
bool getGasIndicator(void);
void setupGasIndicator(void);
void setupDHT11(void);
