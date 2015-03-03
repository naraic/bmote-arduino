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
  if (Serial.available() > 0) {
    // read incoming serial data:
    char inChar = Serial.read();
    // Type the next ASCII value from what you received:
    // check if there are better keyboard methods for this
    Keyboard.write(inChar);
  }  
}

