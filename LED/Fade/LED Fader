int ledPin = 9; // Declaring Pin 9 as ledPin
int brightness = 0; //Setting Initial Brightness to 0
int fadeAmount = 5; //Setting the fadeAmount to 5
int waitTime = 20; //Setting the delay

void setup () {
  pinMode (ledPin, OUTPUT);  //Setting the ledPin to output
}

void loop () {
  analogWrite (ledPin, brightness); // turning on the LED
  brightness = brightness + fadeAmount; // Changing the brightness of the LED
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount; //Reversing the fadeAmount to keep fading
  }
  delay(waitTime);  //adding some delay
}
