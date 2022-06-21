 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_DB1_
#define _VARIANT_DB1_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (44)
#define NUM_DIGITAL_PINS     (37)
#define NUM_ANALOG_INPUTS    (7) // A6 is used for battery, A7 is analog reference
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_NEOPIXEL         (4)
#define NEOPIXEL_NUM         1

#define LED_BUILTIN          (17)

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Analog pins
 */
#define PIN_A0               (29)
#define PIN_A1               (30)
#define PIN_A2               (31)
#define PIN_A3               (32)
#define PIN_A4               (33)
#define PIN_A5               (34)
#define PIN_A6               (35)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
static const uint8_t A6  = PIN_A6 ;
#define ADC_RESOLUTION    14

// Other pins
#define M1_DIR_A    (00)
#define M1_DIR_B    (01)
#define M2_DIR_A    (02)
#define M2_DIR_B    (03)
#define STAT_DOUT   (04)
#define RGB_DOUT    (05)
#define M1_E_A      (06)
#define M1_E_B      (07)
#define M2_E_A      (08)
#define M2_E_B      (09)
#define LED_EN      (10)
#define TOF1_INT    (11)
#define TOF2_INT    (12)
#define TOF3_INT    (13)
#define TOF1_EN     (14)
#define TOF2_EN     (15)
#define TOF3_EN     (16)
#define BATT_LVL1   (17)
#define BATT_LVL2   (18)
#define BATT_LVL3   (19)
#define BATT_LVL4   (20)
#define HOST_INT_1  (21)
#define HOST_INT_2  (22)
#define IMU_INT_1   (23)
#define IMU_INT_2   (24)
#define M1_PWM      (25)
#define M2_PWM      (26)
#define BUZZER      (27)
#define SERVO_PWM   (28)
#define LINE1       (29)
#define LINE2       (30)
#define LINE3       (31)
#define LINE4       (32)
#define LINE5       (33)
#define V_DIV_BATT  (34)
#define MIC         (35)
#define SDA         (36)
#define SCL         (37)
#define SDA_PERIPH  (38)
#define SCL_PERIPH  (39)
#define F_MISO      (40)
#define F_SCK       (41)
#define F_MOSI      (42)
#define F_CS        (43)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (40)
#define PIN_SPI_MOSI         (42)
#define PIN_SPI_SCK          (41)

static const uint8_t SS   = (43);
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 2

#define PIN_WIRE_SDA         (36)
#define PIN_WIRE_SCL         (37)
#define PIN_WIRE_SDA2        (38)
#define PIN_WIRE_SCL2        (39)

// On-board SPI Flash
#define EXTERNAL_FLASH_DEVICES   S25FL064L
#define EXTERNAL_FLASH_USE_SPI

// Bad things happen if the serial pins aren't defined. Instead
// define them with an invalid pin number
// Serial
#define PIN_SERIAL1_RX       (45)
#define PIN_SERIAL1_TX       (45)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
