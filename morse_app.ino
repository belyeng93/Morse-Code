
#include "src/include/morse.hpp"
#include "src/include/defs.h"

#include <Adafruit_NeoPixel.h>


Adafruit_NeoPixel strip(NUM_LEDS, LED_STRIP_PIN, NEO_GRB + NEO_KHZ800);

String phrase = "prova" 

void setup()
{

    strip.begin();  
    strip.show(); // Initialize all pixels to 'off'

    pinMode(BUZZER_PIN, Output);

    // TODO: CHECK
    nummber_of_dot_leds = (NUM_LEDS * 0.3);

    color_led = strip.Color(255, 0, 255);

    strip.setBrightness(20);
	
}

void loop()
{
    emit_morse(phrase);
}

void emit_morse(String phrase)
{
    int len = phrase.lenght();
    String[] morse = parseString(phrase, *len);
    for(int j = 0; j < len; j++)
    {
        emit_letter(morse[i]);

    }

}

void emit_letter(String letter)
{
    for(int i = 0; i < letter.lenght(); i++)
    {
        emit_light(letter[i]);
        emit_sound(letter[i]);

        if(letter == '.')
        {
            delay(DOT_DURATION_MILLIS); 
        }
        if(letter == '_')
        {
            delay(LINE_DURATION_MILLIS);
        }

        noTone(BUZZER_PIN);
        strip.clear();

    }
    delay(DELAY_BETWEEN_LETTERS_MILLIS);

}


void emit_light(char morse_letter)
{
    if(morse_letter == '.')
    {
        for(int idx = 0; idx < nummber_of_dot_leds; idx++)
        {
            strip.setPixelColor((int)(NUM_LEDS/2) + idx, color_led);
            strip.show();
        }

    }
    if(morse_letter == '_')
    {
        strip.fill(color_led, 0, NUM_LEDS);
        strip.show();
    }
    

    if(morse_letter == ' ')
    {
        delay(DELAY_SPACE_MILLIS);
    }


}

void emit_sound(char morse_letter)
{
    if(morse_letter == '.')
    {
        tone(BUZZER_PIN, TONE_FREQUENCY);
    }
    if(morse_letter == '_')
    {
        tone(BUZZER_PIN, TONE_FREQUENCY);
    }
}
