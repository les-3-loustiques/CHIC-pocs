#include "myWifiFunctions.h"




myWifi::myWifi(){}


/**
 * This function will connect to a Wifi access point and
 * print the Wifi adress to the serial terminal
 */
 void myWifi::setupWifi(const char *ssid, const char *password){
    Serial.println("Configuring WiFi..");
    WiFi.persistent(true);
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid,password);
  
    Serial.println();
    Serial.println();
    Serial.println("Waiting for connection");
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
  
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
  }
  




