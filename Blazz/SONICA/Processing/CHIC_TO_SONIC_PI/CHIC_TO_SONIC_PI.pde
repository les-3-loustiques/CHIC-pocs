import oscP5.*; //libraries required
import netP5.*;
import processing.serial.*;

OscP5 oscP5;
NetAddress sonicPi;
float mx;
float my;
float mz;
Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port
void setup() {
  oscP5 = new OscP5(this, 8000);
  sonicPi = new NetAddress("127.0.0.1",4559);
  myPort = new Serial(this, "/tmp/cu.LightBlue-Bean", 57600);
}
void sendOscNote(float mx, float my, float mz) {
  OscMessage toSend = new OscMessage("/notesend");
  toSend.add(mx); //add mx and my values as floating numbers
  toSend.add(my); //add mx and my values as floating numbers
  toSend.add(mz); //add mx and my values as floating numbers 
  oscP5.send(toSend, sonicPi);
  println(toSend);
}
void draw() {
 
  if ( myPort.available() > 0) 
  {  // If data is available,
    delay(10);
    val = myPort.readStringUntil(10); // read it and store it in val
    if(val == null){val = "";}
  } 
   
  if(val != null && !val.isEmpty() && !val.equals("null")){ 
    String[] vals = val.split(","); 
    sendOscNote(Float.valueOf(vals[0]).floatValue(),Float.valueOf(vals[1]).floatValue(),Float.valueOf(vals[0]).floatValue()); //send the mx and my values to SP 
  }
}

/* 
    println(val);println(vals);
    println(Float.parseFloat(vals[0]));
    println(Float.parseFloat(vals[1]));
    println(Float.parseFloat(vals[2])); */