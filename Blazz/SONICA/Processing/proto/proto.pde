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
List<Float> datasAccel = new ArrayList<Float>(); // all datas from accelerometer

// Acceleration computation
float currentValue = 0; // current value of the acceleration (normal vector)
float oldValue = 0;  // the previous value of the acceleration

// Graphical window
int xSize = 600;
int ySize = 200;


void setup() {
  //oscP5 = new OscP5(this, 8000);
  //sonicPi = new NetAddress("127.0.0.1",4559);
  myPort = new Serial(this, "/tmp/cu.LightBlue-Bean", 57600);
  
  // for drawing a graph
  size(600,500);
  frameRate(100); // speed of draw function
  drawStuff();
}


/*
  Main function
*/
void draw() {
  
  gettingValues();
  while(datasAccel.size()>=xSize){
    datasAccel.remove(0);
  }
  if(datasAccel.size()>=2){
    clear();
    drawStuff();
      for (int i=1 ; i < datasAccel.size() ; i++){
        line((i-1),500-(datasAccel.get(i-1)),i,500-(datasAccel.get(i)));
      }
    } 
}

void gettingValues(){
  //while(true){
    if ( myPort.available() > 0) 
    {  // If data is available,
      valAccel = myPort.readStringUntil('$'); // read it and store it in val (10)
    } 
     
     // get values 
    if(valAccel != null && !valAccel.isEmpty() && !valAccel.equals("null")){ 
      String[] vals = valAccel.split(","); 
      currentValue = calculateNorm(Float.valueOf(vals[0]).floatValue(),Float.valueOf(vals[1]).floatValue(),Float.valueOf(vals[2]).floatValue());
      float difference = calculateDifference(currentValue,oldValue);
      println(difference);
      datasAccel.add(difference);
      oldValue = currentValue;
     /*       
      sendOscNote(Float.valueOf(vals[0]).floatValue(),Float.valueOf(vals[1]).floatValue(),Float.valueOf(vals[2]).floatValue()); //send the mx and my values to SP 
      */
    }
    //delay(100);
  //}
}

/*
  This function allow to send x,y,z axis to the OSC server Sonic Pi
*/
void sendOscNote(float mx, float my, float mz) {
  OscMessage toSend = new OscMessage("/notesend");
  toSend.add(mx); //add mx and my values as floating numbers
  toSend.add(my); //add mx and my values as floating numbers
  toSend.add(mz); //add mx and my values as floating numbers 
  oscP5.send(toSend, sonicPi);
  println(toSend);
}

/*
  This function calculate the difference between two values
  and return the absolute value of the difference
*/
float calculateDifference(float current, float previous){
  return abs(current-previous);
}

/*
  This function calculate the norme of the 3 axis acceleration
*/
float calculateNorm(float mx, float my, float mz){
  return sqrt(pow(mx,2)+pow(my,2)+pow(mz,2));
}

/*
  This function simple draw the graphical window
*/
void drawStuff() {
  background(0);
  // verticale
  for (int i = 0; i <= width; i += 50) {
    fill(0, 255, 0);
    text(i/2, i-10, height-15);
    stroke(255);
    line(i, height, i, 0);
  }
  // horizontale 
  for (int j = 0; j < height; j += 33) {
    fill(0, 255, 0);
    text(6-j/(height/6), 0, j);
    stroke(255);
    line(0, j, width, j);
  }
}