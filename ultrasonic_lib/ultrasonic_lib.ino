#include <NewPing.h>

const int trigPin = 9;
const int echoPin = 10;
int MAX_DISTANCE = 400; // Maximum distance to measure (in cm)

NewPing sonar(trigPin, echoPin, MAX_DISTANCE); // Create a NewPing object

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int distance = sonar.ping_cm(); // Send a ping and get the distance in cm
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
