/**
 * globalconfig.h
 *
 * Part of TapioTrack Prototype
 *
 * (C) Daniel Saul 2014
 * daniel@dansaul.co.uk
 *
 */

#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H

// Debug settings
#define DEBUG_SERIAL        true
#define DEBUG_BAUD          115200
#define DEBUG_LED           true

// Pin Assignments - Arduino Leonardo Pins
// Power
#define PWR_ONSWITCH        3   //32u4 PD0
#define PWR_KEEPON          2   //32u4 PD1

//Analog
#define ANLG_BATT           A5  //32u4 PF0
#define ANLG_TEMP           A4  //32u4 PF1

// LEDs
#define LEDON               LOW
#define LEDOFF              HIGH
#define LED_STATUS          13  //32u4 PC7

// Chip Selects
#define CS_ACCEL            11  //32u4 PB7
#define CS_GYRO             7   //32u4 PE6

// Iridium
#define IRID_AVAIL          9   //32u4 PB5
#define IRID_RI             8   //32u4 PB4
#define IRID_EN             4   //32u4 PD4
#define IRID_RX             6   //32u4 PD7
#define IRID_TX             12  //32u4 PD6

#endif
