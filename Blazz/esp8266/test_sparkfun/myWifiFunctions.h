#include <ESP8266WiFi.h>

class myWifi{
  public:

  myWifi(); // constructor
  
   /**
   * This function will connect to a Wifi access point and
   * print the Wifi adress to the serial terminal
   */
   void setupWifi(const char *ssid, const char *password);
   
  };


