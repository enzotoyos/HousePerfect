
#include "sensor.h"

DHT dht(DHTPIN, DHTTYPE);

void setupDHT11(void){
    dht.begin();
};

void setupGasIndicator(void){
      pinMode(GAS_SENSOR, INPUT);
};

float getTemperature(void){
    float t = dht.readTemperature();
    return t;
};

float getHumidity(void){
    float h = dht.readHumidity();
    return h;
};

bool getGasIndicator(void){
     bool gasValue = digitalRead(GAS_SENSOR);
     return gasValue;
};

