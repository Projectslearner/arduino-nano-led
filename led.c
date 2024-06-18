/*
    Project name : External External LED
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-External LED
*/

const int External LEDPin = 13; // Pin connected to the External LED

void setup() 
{
  pinMode(External LEDPin, OUTPUT); // Set the External LED pin as an output
}

void loop() 
{
  digitalWrite(External LEDPin, HIGH); // Turn on the External LED
  delay(1000); // Wait for 1 second (1000 milliseconds)
}
