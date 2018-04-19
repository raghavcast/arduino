int ledPin = 13;  //Declaring Pin 13 as the ledPin
int readPin = 2;  //Declaring Pin 2 as the Input Pin of the Button
int readValue;  //Declaring Variable to store the Value that is read on pin 2

void setup () {
  Serial.begin(9600); //Starting the Serial Monitor at 9600 bits per Second
  pinMode(ledPin, OUTPUT);  //Setting the ledPin to Output
  pinMode(readPin, INPUT);  //Setting the buttonPin to Input
}

void loop () {
  readValue = digitalRead(readPin); //Reading the Voltage on Pin 2
  if (readValue == HIGH) {
    digitalWrite(ledPin, HIGH); //Checking if button is pressed and turning on the LED
  } else if (readValue == LOW) {
    digitalWrite(ledPin, LOW);  //Checking if button is not pressed and turning off the LED
  }
}
