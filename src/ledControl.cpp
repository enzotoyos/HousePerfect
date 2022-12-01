 
#include <ledControl.h>

//déclaration des fonctions 
void setupLED(void){
    pinMode(ledPin, OUTPUT);
};
void pilotLED(bool light){

    if(light == true){
        digitalWrite(ledPin, HIGH);
    }else{
        digitalWrite(ledPin,LOW);
    }
    
};
 
 