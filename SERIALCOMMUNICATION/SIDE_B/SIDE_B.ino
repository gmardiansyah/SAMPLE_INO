#define SerialComm Serial1

//SoftwareSerial mySerial(6, 5); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  SerialComm.begin(9600);
  while (!SerialComm) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


//  Serial.println("Goodnight moon!");
//
//  // set the data rate for the SoftwareSerial port
  Serial.begin(9600);
//  mySerial.println("Hello, world?");
}

void loop() { // run over and over
//  if (SerialComm.available()) {
//    Serial.write(SerialComm.read());
//  }

  int data[3] = {5, 6, 7};
  if (Serial.available()) 
  {
    SerialComm.write(data[0]);
    SerialComm.write(data[1]);
    SerialComm.write(data[2]);
  }

  delay(1000);
}
