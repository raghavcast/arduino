int lightSense = A0;

void setup() {
  Serial.begin(9600);
  pinMode(lightSense, INPUT);
}

void loop() {
  int sensorReading = analogRead(lightSense);
  Serial.println(lightSense);
  delay(10);
}
