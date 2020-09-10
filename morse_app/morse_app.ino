#include "src/include/morse.hpp"
#include "src/include/defs.h"

#include <Adafruit_NeoPixel.h>


Adafruit_NeoPixel strip(NUM_LEDS, LED_STRIP_PIN, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

String phrase = "monte subasio";

void setup()
{

    strip.begin();  
    strip.show(); // Initialize all pixels to 'off'

    Serial.begin(9600);
    Serial.println(phrase);

    pinMode(BUZZER_PIN, OUTPUT);

    // TODO: CHECK
    nummber_of_dot_leds = (int)(NUM_LEDS * 0.3);
    Serial.print("nummber_of_dot_leds: ");
    Serial.println(nummber_of_dot_leds);

    color_led = strip.Color(0, 0, 255);

    strip.setBrightness(20);
	
}

void loop()
{
    emit_morse(phrase);

    //end signal
}

void emit_morse(String phrase)
{
    int len = phrase.length();
    Serial.print("Len: ");
    Serial.println(len);

    // String* morse = parseString(phrase, len);
    String morse[len];
    parseString(phrase, morse, len);
    for(int j = 0; j < len; j++)
    {
        Serial.println(morse[j]);
        emit_letter(morse[j]);

    }

}

void emit_letter(String letter)
{
    // Serial.println("");
    
    for(int i = 0; i < letter.length(); i++)
    {
        emit_light(letter.charAt(i));
        emit_sound(letter.charAt(i));

        if(letter.charAt(i) == '.')
        {
            delay(DOT_DURATION_MILLIS); 
        }
        if(letter.charAt(i) == '-')
        {
            delay(LINE_DURATION_MILLIS);
        }

        noTone(BUZZER_PIN);
        strip.clear();
        strip.show();

        delay(DELAY_BETWEEN_MORSE);

    }
    delay(DELAY_BETWEEN_LETTERS_MILLIS);
    

}


void emit_light(char morse_letter)
{
    if(morse_letter == '.')
    {
        // Serial.print(" ");
        // Serial.print(" . ");
        for(int idx = 0; idx < nummber_of_dot_leds; idx++)
        {
            strip.setPixelColor((int)(NUM_LEDS/2) + idx, color_led);
        }
        strip.show();


    }
    if(morse_letter == '-')
    {
        // Serial.print(" ");
        // Serial.print(" - ");
        for(int idx = 0; idx < NUM_LEDS; idx++)
        {
            strip.setPixelColor(idx, color_led);
        }
        strip.show();

    }
    

    if(morse_letter == ' ')
    {
        delay(DELAY_SPACE_MILLIS);
    }


}

void emit_sound(char morse_letter)
{
   tone(BUZZER_PIN, TONE_FREQUENCY);
}
