#include <ArduinoJson.h>
#include <WiFi.h>
#include <WiFiAP.h>


// WiFi network name and password:
const char * networkName = "test_ESP32";
const char * networkPswd = "123456789";

// Internet settings
IPAddress serverAddr(192, 168, 0, 1); 
IPAddress subNet(255, 255, 255, 0); 
const int hostPort = 80;

// Logical variables
bool switcher = false;
const int BUTTON_PIN = 0;
const int LED_PIN = 5;

void setup()
{
  // Initilize hardware:
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);

  // Connect to the WiFi network (see function below loop)
  createAccessPoint(networkName, networkPswd);

  digitalWrite(LED_PIN, LOW); // LED off
  //Serial.print("Press button 0 to connect to ");
  //Serial.println(hostDomain);
}

void loop()
{
  /*if (digitalRead(BUTTON_PIN) == LOW)
  { // Check if button has been pressed
    while (digitalRead(BUTTON_PIN) == LOW); // Wait for button to be released

    // ici on envoit la requête au serveur 
    digitalWrite(LED_PIN, HIGH); // Turn on LED
    sendData(hostDomain, hostPort); // Connect to server
    digitalWrite(LED_PIN, LOW); // Turn off LED
  } */
}

/*
* Create the access point here 
*/
void createAccessPoint(const char * ssid, const char * pwd)
{

  Serial.println("hi");
  Serial.println(ssid);
  Serial.println(pwd);
  
  //access point part
  Serial.println("Creating Accesspoint");
  Serial.println(ssid);
  Serial.println(pwd);
  WiFi.softAP(ssid,pwd);
  WiFi.softAPConfig(serverAddr,serverAddr,subNet); 
  Serial.print("IP address:\t");
  Serial.println(WiFi.softAPIP());
}

void sendData(const char * host, uint8_t port)
{
  printLine();
  Serial.println("Connecting to domain: " + String(host));

  // Use WiFiClient class to create TCP connections
  // here "client" means "server"
  WiFiClient client;
  if (!client.connect(host, port))
  {
    Serial.println("connection failed");
    return;
  }
  Serial.println("Connected!");
  printLine();

  // create JSON object to send 
  //{
  //  "led_state" : "on"  
  //}
  /*const size_t bufferSize = JSON_OBJECT_SIZE(1) + 20;
  DynamicJsonBuffer jsonBuffer(bufferSize);
  const char* json = "{\"led_state\":\"on\"}";
  JsonObject& root = jsonBuffer.parseObject(json);
  const char* led_state = root["led_state"]; // "on"*/
  const size_t bufferSize = JSON_OBJECT_SIZE(1);
  DynamicJsonBuffer jsonBuffer(bufferSize);

  JsonObject& root = jsonBuffer.createObject();
  switcher = ~switcher;
  if(switcher){
    root["led_state"] = "on"; 
  }else{
    root["led_state"] = "off";
  }

  // Send JSON
  root.prettyPrintTo(client);
  

  Serial.println();
  Serial.println("closing connection");
  client.stop();
}

void printLine()
{
  Serial.println();
  for (int i=0; i<30; i++)
    Serial.print("-");
  Serial.println();
}

