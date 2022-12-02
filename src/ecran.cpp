#include "ecran.h"

LiquidCrystal_I2C mylcd(0x27,16,2);

void setupSreen(void){
  mylcd.init();
  mylcd.backlight();
};

void writeScreen(int cursorX, int cursorY,  char* value){
  mylcd.setCursor(cursorX, cursorY);
  mylcd.print(value);
};

void refreshScreen(void){
  mylcd.clear();  
};