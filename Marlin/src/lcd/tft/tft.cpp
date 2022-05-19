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

#include "../../inc/MarlinConfig.h"

#if HAS_GRAPHICAL_TFT

#include "tft.h"

<<<<<<<< HEAD:Marlin/src/gcode/sd/M20.cpp
/**
 * M20: List SD card to serial output
 */
void GcodeSuite::M20() {
  if (card.flag.mounted) {
    SERIAL_ECHOLNPGM(STR_BEGIN_FILE_LIST);
    card.ls(TERN_(LONG_FILENAME_HOST_SUPPORT, parser.boolval('L')));
    SERIAL_ECHOLNPGM(STR_END_FILE_LIST);
  }
  else
    SERIAL_ECHO_MSG(STR_NO_MEDIA);
========
//#define DEBUG_GRAPHICAL_TFT
#define DEBUG_OUT ENABLED(DEBUG_GRAPHICAL_TFT)
#include "../../core/debug_out.h"

uint16_t TFT::buffer[];

void TFT::init() {
  io.Init();
  io.InitTFT();
>>>>>>>> Oficial/2.0.x:Marlin/src/lcd/tft/tft.cpp
}

TFT tft;

#endif // HAS_GRAPHICAL_TFT
