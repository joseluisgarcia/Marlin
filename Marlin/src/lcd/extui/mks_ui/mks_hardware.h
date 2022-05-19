/**
 * Marlin 3D Printer Firmware
<<<<<<<< HEAD:Marlin/src/pins/mega/pins_GT2560_V4_A20.h
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
========
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
>>>>>>>> Oficial/2.0.x:Marlin/src/lcd/extui/mks_ui/mks_hardware.h
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

<<<<<<<< HEAD:Marlin/src/pins/mega/pins_GT2560_V4_A20.h
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
========
#include "../../../inc/MarlinConfigPre.h"

#include <lvgl.h>

// Functions for MKS_TEST
#if BOTH(MKS_TEST, SDSUPPORT)
  void mks_hardware_test();
  void mks_test_get();
  void mks_gpio_test();
  extern uint8_t mks_test_flag;
#else
  #define mks_test_flag 0
#endif

// String display and assets
void disp_string(uint16_t x, uint16_t y, const char * cstr, uint16_t charColor, uint16_t bkColor);
void disp_string(uint16_t x, uint16_t y, FSTR_P const fstr, uint16_t charColor, uint16_t bkColor);
void disp_assets_update();
void disp_assets_update_progress(FSTR_P const msg);
>>>>>>>> Oficial/2.0.x:Marlin/src/lcd/extui/mks_ui/mks_hardware.h
