#include <SoftwareSerial.h>

//Create software serial object to communicate with HC-05
SoftwareSerial mySerial(3, 2);  //HC-05 Tx & Rx is connected to Arduino #3 & #2
const int ledPin = 13;

void setup() {
  //Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
  Serial.begin(9600);

  //Begin serial communication with Arduino and HC-05
  mySerial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
  if (mySerial.available()) {
    char receivedChar = mySerial.read();  // Read the incoming character
    Serial.println(receivedChar);

    // Control LED based on received character
    if (receivedChar == 'A') {
      digitalWrite(ledPin, HIGH);
      Serial.println("LED 1 ON");
    } else if (receivedChar == 'a') {
      Serial.println("LED 1 OFF");
      digitalWrite(ledPin, LOW);
    }
  }
  delay(20);
}