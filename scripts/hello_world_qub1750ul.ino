// LANGUAGE: C++14
// ENV: Arduino
// AUTHOR: Giuseppe Masino
// GITHUB: https://github.com/qub1750ul

#include <Arduino.h>

void setup()
	{
		Serial.begin(9600);
		Serial.println("Hello World!");
		Serial.println("Fading a LED in the hello world of electronics !");
		Serial.end();

		pinMode( LED_BUILTIN, OUTPUT );
	}

void loop()
	{
		for( uint8_t var=0 ; var < 256 ; var++ )
			{
				analogWrite( LED_BUILTIN, var );
				delay(100);
			}

		for( uint8_t var=255 ; var >= 0 ; var-- )
			{
				analogWrite( LED_BUILTIN, var );
				delay(100);
			}
	}
