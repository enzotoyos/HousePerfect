#include <WiFi.h>
extern "C" {
  #include "freertos/FreeRTOS.h"
  #include "freertos/timers.h"
}
#include <AsyncTCP.h>
#include <AsyncMqttClient.h>
#include "Wire.h"
#include "Adafruit_Sensor.h"
#include "sensor.h"
#include "ecran.h"
#include "ledControl.h"
#include "fanControl.h"
#include "PIRDetector.h"
#include <SPI.h>
#include "nfcScanner.h"
// Replace with your network credentials (STATION)
const char* ssid = "iPhone de Enzo";
const char* Password = "123456789";



void initWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, Password);
  Serial.print("Connecting to WiFi ..");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print('.');
    delay(1000);
  }
  Serial.println(WiFi.localIP());
}




void setup() {
  Serial.begin(9600);
  Wire.begin(); 
  initWiFi();
  Serial.print("RRSI: ");
  Serial.println(WiFi.RSSI());
  setupDHT11();
  setupGasIndicator();
  setupSreen();
  setupLED();
  setupFan();
  setupPIRDetection();
  setupNFCScanner();

}

void loop() {
  delay(1000);
  Serial.println(getTemperature());
  Serial.println(getHumidity());
  Serial.print("Gas Value: ");
  Serial.println(getGasIndicator());
  char* test = "Hello";
  writeScreen(1,1, test);
  pilotLED(true);
  pilotFan(true, 50);
  PIRDetection(); // false == aucune detection // true == detection de quelqu'un
  String i = readUID();
  Serial.print("ceci est un test : " + i);

}


