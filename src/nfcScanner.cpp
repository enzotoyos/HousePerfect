#include "nfcScanner.h"
#include "Arduino.h"
#include <MFRC522_I2C.h>
 #define RST_PIN 3

MFRC522 mfrc522(0x28, RST_PIN);	// Create MFRC522 instance.  // Create MFRC522 instance

void setupNFCScanner(void){
  mfrc522.PCD_Init();   // Initiate MFRC522
  //ShowReaderDetails();
  Serial.println("Approximate your card to the reader...");
  Serial.println();
};

String readUID(void){
   if ( ! mfrc522.PICC_IsNewCardPresent()) {
		
	}

	// Select one of the cards
	if ( ! mfrc522.PICC_ReadCardSerial()) {
		
	}

	// Dump debug info about the card; PICC_HaltA() is automatically called
	mfrc522.PICC_DumpToSerial(&(mfrc522.uid));


Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "39 F1 72 E2") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    Serial.println();

    return(content.substring(1));
  }
 
 else   {
    Serial.println(" Access denied");
    delay(3000);
  }

};