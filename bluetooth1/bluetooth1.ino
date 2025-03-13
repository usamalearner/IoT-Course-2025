#include <SoftwareSerial.h>

// Create software serial object to communicate with HC-05
SoftwareSerial mySerial(3, 2);  // HC-05 Tx & Rx connected to Arduino #3 & #2
int ledPin = 8;
String receivedData = "";  // Variable to store received string

void setup() {
  Serial.begin(9600);    // Serial Monitor
  mySerial.begin(9600);  // HC-05 Bluetooth module
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.println("The device started, now you can pair it with Bluetooth!");
}

void loop() {
  // Read data from Bluetooth
  while (mySerial.available()) {
    char receivedChar = mySerial.read();  // Read each character
    Serial.println(receivedChar);
    if (receivedChar == 'A') {
      digitalWrite(ledPin, HIGH);
      Serial.print("led ON");
    } else if (receivedChar == 'a') {
      Serial.print("led OFF");
      digitalWrite(ledPin, LOW);
    }
  }
}
