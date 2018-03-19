import oscP5.*; //libraries required
import netP5.*;
import processing.serial.*;
import java.util.ArrayList;
import java.util.List;

// Acceleration datas exchange
OscP5 oscP5;
NetAddress sonicPi;
Serial myPort;  // Create object from Serial class
String valAccel;     // Data received from the serial port
void setup() {
  oscP5 = new OscP5(this, 8000);
  sonicPi = new NetAddress("127.0.0.1",4559);
  myPort = new Serial(this, "/tmp/cu.LightBlue-Bean", 57600);
  frameRate(100); // speed of draw function
}
void draw() {
  gettingValues();  
}
void gettingValues(){
    if ( myPort.available() > 0) 
    {  // If data is available,
      valAccel = myPort.readStringUntil('$'); // read it and store it in val (10)
    }  
     // get values 
    if(valAccel != null && !valAccel.isEmpty() && !valAccel.equals("null")){ 
      println("pulse sent");
      sendOscPulse(1.0);   
    }
}
/*
  This function allow to send a OSC pulse to Sonic Pi
*/
void sendOscPulse(float pulse) {
  OscMessage toSend = new OscMessage("/notesend");
  toSend.add(pulse); //add mx and my values as floating numbers
  oscP5.send(toSend, sonicPi);
  delay(100);
}