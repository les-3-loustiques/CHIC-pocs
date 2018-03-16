/* 
  This sketch reads the acceleration from the Bean's on-board accelerometer. 
  
  The acceleration readings are sent over serial and can be accessed in Arduino's Serial Monitor.
  
  To use the Serial Monitor, set Arduino's serial port to "/tmp/tty.LightBlue-Bean"
  and the Bean as "Virtual Serial" in the OS X Bean Loader.
    
  This example code is in the public domain.
*/
// Get the current acceleration with range of ±2g, and a conversion of 3.91×10-3 g/unit or 0.03834(m/s^2)/units. 

void setup() {
  Serial.begin();   
}

void loop() {
  AccelerationReading acceleration = Bean.getAcceleration();
  String stringToPrint = String();
  stringToPrint = stringToPrint + acceleration.xAxis + "," + acceleration.yAxis + "," + acceleration.zAxis;
  Serial.println(stringToPrint);
  Bean.sleep(10);
}



