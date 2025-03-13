// Define sensor pins
const int trigPin = 9;
const int echoPin = 10;

void setup() {
    Serial.begin(9600);  // Start serial communication
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
    // Send a 10us pulse to trigger the sensor
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    // Read the echo pin
    long duration = pulseIn(echoPin, HIGH);
    
    // Calculate distance
    float distance_cm = duration * 0.0343 / 2;
    float distance_ft = distance_cm * 0.0328;
    
    // Print values to Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.print(" cm | ");
    Serial.print(distance_ft);
    Serial.println(" ft");
    
    delay(500); // Wait before next reading
}
