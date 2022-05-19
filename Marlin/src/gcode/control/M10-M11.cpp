/**
 * Marlin 3D Printer Firmware
<<<<<<<< HEAD:Marlin/src/gcode/sd/M21_M22.cpp
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
========
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
>>>>>>>> Oficial/2.0.x:Marlin/src/gcode/control/M10-M11.cpp
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

#include "../../inc/MarlinConfig.h"

#if ENABLED(AIR_EVACUATION)

#include "../gcode.h"
#include "../../feature/spindle_laser.h"

/**
 * M10: Vacuum or Blower On
 */
void GcodeSuite::M10() {
  cutter.air_evac_enable();   // Turn on Vacuum or Blower motor
}

/**
 * M11: Vacuum or Blower OFF
 */
<<<<<<<< HEAD:Marlin/src/gcode/sd/M21_M22.cpp
void GcodeSuite::M22() {
  if (!IS_SD_PRINTING()) card.release();
========
void GcodeSuite::M11() {
  cutter.air_evac_disable();  // Turn off Vacuum or Blower motor
>>>>>>>> Oficial/2.0.x:Marlin/src/gcode/control/M10-M11.cpp
}

#endif // AIR_EVACUATION
