/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

/**
<<<<<<<< HEAD:Marlin/src/pins/stm32f1/pins_MKS_ROBIN_E3.h
 * MKS Robin E3 (STM32F103RCT6) board pin assignments
 */

#if HAS_MULTI_HOTEND || E_STEPPERS > 1
  #error "MKS Robin E3 only supports one hotend / E-stepper. Comment out this line to continue."
#endif

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "MKS Robin E3"
#endif

#include "pins_MKS_ROBIN_E3_common.h"
========
 * feature/z_stepper_align.h
 */

#include "../inc/MarlinConfig.h"

class ZStepperAlign {
  public:
    static xy_pos_t xy[NUM_Z_STEPPERS];

    #if HAS_Z_STEPPER_ALIGN_STEPPER_XY
      static xy_pos_t stepper_xy[NUM_Z_STEPPERS];
    #endif

  static void reset_to_default();
};

extern ZStepperAlign z_stepper_align;
>>>>>>>> Oficial/2.0.x:Marlin/src/feature/z_stepper_align.h
