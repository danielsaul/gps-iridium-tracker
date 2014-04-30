/**
 * tapio.ino
 *
 * Part of TapioTrack Prototype
 *
 * (C) Daniel Saul 2014
 * daniel@dansaul.co.uk
 *
 */

#include "globalconfig.h"

void setup(){

    // Start up serial debugging
    if(DEBUG_SERIAL){
        Serial.begin(DEBUG_BAUD);
        Serial.println("TapioTrack");
    }

    // Initialise Status LED
    pinMode(LED_STATUS, OUTPUT);
    if(DEBUG_LED)
        digitalWrite(LED_STATUS, LEDON);
    else
        digitalWrite(LED_STATUS, LEDOFF);

    // Initialise GPS
    gps_init();

}

void loop(){


}
