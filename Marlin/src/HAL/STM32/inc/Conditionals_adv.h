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

#if BOTH(SDSUPPORT, USBD_USE_CDC_MSC) && DISABLED(NO_SD_HOST_DRIVE)
  #define HAS_SD_HOST_DRIVE 1
#endif

<<<<<<<< HEAD:Marlin/src/HAL/TEENSY31_32/inc/SanityCheck.h
#if ENABLED(FAST_PWM_FAN) || SPINDLE_LASER_FREQUENCY
  #error "Features requiring Hardware PWM (FAST_PWM_FAN, SPINDLE_LASER_FREQUENCY) are not yet supported on Teensy 3.1/3.2."
#endif

#if HAS_TMC_SW_SERIAL
  #error "TMC220x Software Serial is not supported on Teensy 3.1/3.2."
#endif

#if ENABLED(POSTMORTEM_DEBUGGING)
  #error "POSTMORTEM_DEBUGGING is not yet supported on Teensy 3.1/3.2."
========
// Fix F_CPU not being a compile-time constant in STSTM32 framework
#ifdef BOARD_F_CPU
  #undef F_CPU
  #define F_CPU BOARD_F_CPU
>>>>>>>> Oficial/2.0.x:Marlin/src/HAL/STM32/inc/Conditionals_adv.h
#endif

// The Sensitive Pins array is not optimizable
#define RUNTIME_ONLY_ANALOG_TO_DIGITAL
