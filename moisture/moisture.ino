#define SENSOR_PIN A0  // Define the analog pin for the soil moisture sensor

void setup() {
    Serial.begin(9600);  // Start serial communication at 9600 baud
    pinMode(SENSOR_PIN, INPUT);
}

void loop() {
    int sensorValue = analogRead(SENSOR_PIN);  // Read analog value from sensor
    Serial.print("Soil Moisture Value: ");
    Serial.println(sensorValue);  // Print value to Serial Monitor
    
    delay(1000);  // Wait for 1 second before next reading
}
