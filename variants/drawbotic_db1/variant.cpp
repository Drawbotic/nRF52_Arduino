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

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  //Digital Pins
  42,   //00: M1_DIR_A
  43,   //01: M1_DIR_B
  44,   //02: M2_DIR_A
  45,   //03: M2_DIR_B
  37,   //04: STAT_DOUT
  39,   //05: RGB_DOUT
  27,   //06: M1_E_A
  26,   //07: M1_E_B
  14,   //08: M2_E_A
  12,   //09: M2_E_B
  38,   //10: LED_EN
  6,    //11: TOF1_INT
  8,    //12: TOF2_INT
  41,   //13: TOF3_INT
  7,    //14: TOF1_EN
  40,   //15: TOF2_EN
  11,   //16: TOF3_EN
  10,   //17: BATT_LVL1
  9,    //18: BATT_LVL2
  32,   //19: BATT_LVL3
  22,   //20: BATT_LVL4
  15,   //21: HOST_INT_1
  17,   //22: HOST_INT_2
  33,   //23: IMU_INT
  35,   //24: IMU_RESET
  
  //PWM Pins
  46,   //25: M1_PWM
  47,   //26: M2_PWM
  36,   //27: BUZZER
  34,   //28: SERVO_PWM

  //Analog Pins
  2,    //29: IR1
  3,    //30: IR2
  4,    //31: IR3
  5,    //32: IR4
  28,   //33: IR5
  29,   //34: V_DIV_BATT
  30,   //35: MIC

  //I2C Pins
  25,   //36: SDA
  24,   //37: SCL
  16,   //38: SDA_PERIPH
  13,   //39: SCL_PERIPH

  //SPI Pins
  19,   //40: F_MISO
  20,   //41: F_SCK
  21,   //42: F_MOSI
  23,   //43: F_CS
  // Total Size: 44
};

void initVariant()
{
  
}

