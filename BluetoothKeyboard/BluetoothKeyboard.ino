/**********************************************
//                      TO DO:
//
//  OS X setup - configure the keyboard via a command
//  implement AT commands - allow user to change settings
//      -- such as device name & password
//      -- turn off authentication
//      -- show settings
//      -- configure different software modes
//          -- powerpoint? libreoffice? keynote? 
************************************************/

//this loop runs once
void setup() {
  /***************************************
  // On opening the serial port:
  // THIS NEEDS TO BE SERIAL1!! 
  // Arduino Micro has another serial 
  // library for USB communication 
  // We don't want to use this one because it won't work ;)
  // Baud rate on RN42 has been set to 9600
  // should probably write code to do this at startup, anyway
  // DeviceName & Password should also be modified here. 
  // 
  *****************************************/

  Serial1.begin(9600);

  // initialize control over the keyboard:
  Keyboard.begin();
}

//this loop is repeated indefinitely
void loop() {
  // check for incoming serial data:
  if (Serial1.available() > 0) {
    // read incoming serial data:
    char inChar = Serial1.read();
    // Type the next ASCII value from what you received:
    // check if there are better keyboard methods for this
    Keyboard.write(inChar);
  }  
}

