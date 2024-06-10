/*
    Project name : LED
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-led
*/

const int ledPin = 13; // Pin connected to the LED

void setup() 
{
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() 
{
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(1000); // Wait for 1 second (1000 milliseconds)
}
