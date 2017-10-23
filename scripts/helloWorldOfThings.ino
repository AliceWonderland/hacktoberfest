// LANGUAGE: Arduino (Modified C)
// ENV: Arduino
// AUTHOR: Matthew Piercey
// GITHUB: https://github.com/hyperionlevelq
// NEEDS: Arduino (UNO, Leonardo, Mega, or Duo)

int ledPin = 5; // Connect to an LED on Digital Pin 5

void setup() { // Setup part of the code, pretty self-explanatory
Serial.begin(9600); // Starts streaming data to any connected computer at a baudrate of 9600
pinMode(ledPin, OUTPUT);
Serial.println('Hello World');
}

void loop() { // Runs forever
digitalWrite(ledPin, HIGH);
Serial.println('I\'m blinking!');
delay(1000); // Delay of 1000 ms
digitalWrite(ledPin, LOW);
Serial.println('I\'m not blinking!');
delay(1000); // Another delay

}
