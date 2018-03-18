/* 
  This sketch reads the acceleration from the Bean's on-board accelerometer. 
  
  The acceleration readings are sent over serial and can be accessed in Arduino's Serial Monitor.
  
  To use the Serial Monitor, set Arduino's serial port to "/tmp/tty.LightBlue-Bean"
  and the Bean as "Virtual Serial" in the OS X Bean Loader.
    
  This example code is in the public domain.
*/
// Get the current acceleration with range of ±2g, and a conversion of 3.91×10-3 g/unit or 0.03834(m/s^2)/units. 

uint8_t threshold = 120;
uint8_t cpt = 0;
uint16_t axeX;
uint16_t axeZ;
uint16_t axeY;

int PWM = 2;
int GND = 1;
int test = 0;
void setup() {
  Serial.begin();   
  pinMode(PWM,OUTPUT);
  pinMode(GND,OUTPUT);
  pinMode(test,OUTPUT);
  digitalWrite(GND,0);
  
  Bean.setAccelerometerPowerMode(0x00); // acceleromter to normal mode
  //Bean.setAccelerationRange(16);
  Bean.accelRegisterWrite(0x0f,0x08); // set 8g range for accelerometer
}

void loop() {

 /* for(int i=0 ; i<10 ; i++){
    AccelerationReading acceleration = Bean.getAcceleration();
    String stringToPrint = String();
    Bean.sleep(1);
  }*/
  Bean.setLed(0,0,0);  
  AccelerationReading acceleration = Bean.getAcceleration();
  axeX = abs(acceleration.xAxis); 
  axeY = abs(acceleration.yAxis); 
  axeZ = abs(acceleration.zAxis);  
  
  if((axeX>threshold) || (axeY>threshold) || (axeZ>threshold)){
      String stringToPrint = String();
      stringToPrint = stringToPrint + axeX + "," + axeY + "," + axeZ + "," + "$";
      Serial.println(stringToPrint);  
      Bean.setLed(0,0,255);
      analogWrite(PWM,150); 
      Bean.sleep(50); 
      analogWrite(PWM,0);      
      Bean.sleep(50); //120  en tout 
  }
}



