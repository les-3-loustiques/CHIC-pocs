#include "myWifiFunctions.h"
#include <ESP8266WebServer.h>

#define ESP8266_LED 5 // the blue led

ESP8266WebServer server(80);
myWifi wiObject;


const char *ssid = "Sunrise_2.4GHz_709CD0";
const char *pass = "Y94xEkcvc96t";


void handleRoot() {
  server.send(200, "text/html", "<h1>You are connected</h1>");
}
void ledOn(){
  server.send(200, "text/html", "<h1>LED on</h1>");  
  digitalWrite(ESP8266_LED, LOW);
}
void ledOff(){
  server.send(200, "text/html", "<h1>LED off</h1>");
  digitalWrite(ESP8266_LED, HIGH);  
}

void setup() {
  pinMode(ESP8266_LED, OUTPUT);
  Serial.begin(9600); // setup the serial communication for debuging
  wiObject.setupWifi(ssid,pass);

  server.on("/", handleRoot);
  server.on("/led_on", ledOn);
  server.on("/led_off", ledOff);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
