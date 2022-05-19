/**
 * Marlin 3D Printer Firmware
<<<<<<<< HEAD:Marlin/src/HAL/ESP32/inc/SanityCheck.h
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
========
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
>>>>>>>> Oficial/2.0.x:Marlin/src/pins/mega/pins_GT2560_V4_A20.h
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

<<<<<<<< HEAD:Marlin/src/HAL/ESP32/inc/SanityCheck.h
#if ENABLED(EMERGENCY_PARSER)
  #error "EMERGENCY_PARSER is not yet implemented for ESP32. Disable EMERGENCY_PARSER to continue."
#endif

#if ENABLED(FAST_PWM_FAN) || SPINDLE_LASER_FREQUENCY
  #error "Features requiring Hardware PWM (FAST_PWM_FAN, SPINDLE_LASER_FREQUENCY) are not yet supported on ESP32."
#endif

#if HAS_TMC_SW_SERIAL
  #error "TMC220x Software Serial is not supported on ESP32."
#endif

#if BOTH(WIFISUPPORT, ESP3D_WIFISUPPORT)
  #error "Only enable one WiFi option, either WIFISUPPORT or ESP3D_WIFISUPPORT."
#endif

#if ENABLED(POSTMORTEM_DEBUGGING)
  #error "POSTMORTEM_DEBUGGING is not yet supported on ESP32."
#endif
========
/**
 * Geeetech A20 GT2560 V4.x board pin assignments
 */

#define BOARD_INFO_NAME "GT2560 4.x"

#define LCD_PINS_RS                            5
#define LCD_PINS_ENABLE                       36
#define LCD_PINS_D4                           21
#define LCD_PINS_D7                            6

#define SPEAKER                                  // The speaker can produce tones

#if IS_NEWPANEL
  #define BTN_EN1                             16
  #define BTN_EN2                             17
  #define BTN_ENC                             19
#endif

#include "pins_GT2560_V3.h"
>>>>>>>> Oficial/2.0.x:Marlin/src/pins/mega/pins_GT2560_V4_A20.h
