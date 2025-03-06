int ledPin = 13;
int btnPin = 4;
bool btnState = true;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
}

void loop() {
  // digitalWrite(ledPin, 1);
  // delay(2000);
  // digitalWrite(ledPin, 0);
  // delay(2000);
  if (btnState == 0) {
    Serial.println("Button is closed , so LED is closed");
  } else {
    Serial.println("Button is ON , so LED is ON");
  }
}
