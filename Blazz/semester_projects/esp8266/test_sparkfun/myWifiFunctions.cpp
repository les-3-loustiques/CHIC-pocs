#include "myWifiFunctions.h"




myWifi::myWifi(){}


/**
 * This function will connect to a Wifi access point and
 * print the Wifi adress to the serial terminal
 */
 void myWifi::setupWifi(const char *ssid, const char *password){
    // host mode
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
  

// access point mode
   /* IPAddress serverAddr(192, 168, 0, 1); 
    IPAddress subNet(255, 255, 255, 0); 
    Serial.println("hi");
    Serial.println(ssid);
    Serial.println(password);
    
    //access point part
    Serial.println("Creating Accesspoint");
    Serial.println(ssid);
    Serial.println(password);
    WiFi.softAP(ssid,password);
    WiFi.softAPConfig(serverAddr,serverAddr,subNet); 
    Serial.print("IP address:\t");
    Serial.println(WiFi.softAPIP()); */



