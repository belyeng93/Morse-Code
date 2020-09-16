#include "src/include/morse.hpp"
#include "src/include/defs.h"

#include <Adafruit_NeoPixel.h>

#define TEST


Adafruit_NeoPixel strip(NUM_LEDS, LED_STRIP_PIN, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

String phrase = "parcheggio degli stazzi";
int len_ph = phrase.length();
char *rec_phrase;

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

    rec_phrase = new char[len_ph];
	
}

void loop()
{
    emit_start();
    emit_morse(phrase);
    emit_end();
#ifdef TEST
    check_conversion(rec_phrase, len_ph);
#endif


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
        rec_phrase[j] = parseMorse(morse[j]);

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

void check_conversion(char* phrase_rec, int len_ph_rec)
{
    for(int j = 0; j < len_ph_rec; j++)
    {
        Serial.print(phrase_rec[j]);
    }
    Serial.println("");
}

void emit_end()
{
    for(int idx = 0; idx < NUM_LEDS; idx++)
    {
        strip.setPixelColor(idx, 255,0,0);
    }
    strip.show();

    int ii = 5000;
    while(ii > 0)
    {
        tone(BUZZER_PIN, ii);
        delay(100);
        noTone(BUZZER_PIN);
        delay(100);
        ii =  ii - 500;

    }
    // for(int idx = 0; idx < 2; idx++)
    // {
    //     tone(BUZZER_PIN, 5000);
    //     delay(100);
    //     noTone(BUZZER_PIN);
    //     delay(100);
    //     // tone(BUZZER_PIN, 200);
    //     // delay(100);
    //     // noTone(BUZZER_PIN);
    //     // delay(100);
    // }


    delay(DELAY_END_PHRASE);

    noTone(BUZZER_PIN);
    strip.clear();
    strip.show();

}

void emit_start()
{
    for(int idx = 0; idx < NUM_LEDS; idx++)
    {
        strip.setPixelColor(idx, 0,255,0);
    }
    strip.show();

    for(int idx = 0; idx < 2; idx++)
    {
        tone(BUZZER_PIN, 5000);
        delay(100);
        noTone(BUZZER_PIN);
        delay(100);
        tone(BUZZER_PIN, 200);
        delay(100);
        noTone(BUZZER_PIN);
        delay(100);
    }
    


    delay(DELAY_END_PHRASE);

    noTone(BUZZER_PIN);
    strip.clear();
    strip.show();

    delay(100);
}