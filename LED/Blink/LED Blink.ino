int ledPin = 9;  //Declare Pin 9 as ledPin
int waitTime = 1000;  //Declaring the waitTime

void setup() {
  Serial.begin(9600); // Starting up the Serial Monitor
  pinMode(ledPin, OUTPUT);  //Setting ledPin to output
}

void loop() {
  digitalWrite(ledPin, HIGH); //Turning on the Led
  delay(waitTime);  //adding some waitTime
  digitalWrite(ledPin, LOW);  //Turning off the led
  delay(waitTime);  //adding some waitTime
}
