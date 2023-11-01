// LANGUAGE: C++
// ENV: Arduino
// AUTHOR: Mark Carlson
// GITHUB: https://github.com/electrek

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Hello World!");
    delay(1000);
}