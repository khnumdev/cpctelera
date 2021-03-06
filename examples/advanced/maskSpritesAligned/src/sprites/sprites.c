//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2015 Dardalorth / Fremos / Carlio
//  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//------------------------------------------------------------------------------

#include "sprites.h"

// Common palette for background and sprites, using hardware colour values
const u8 g_palette[7] = {
// HW Value  | FW Value  | Colour name
//---------------------------------------
    0x14, // |    0      | Black
    0x12, // |   18      | Bright Green
    0x1D, // |    5      | Mauve
    0x0C, // |    6      | Bright Red
    0x16, // |    9      | Green
    0x17, // |   11      | Sky Blue
    0x1E  // |   12      | Yellow
//---------------------------------------
};

// Alien sprite 
//   The alien sprite must be 256-bytes aligned to be usable by cpct_drawSpriteMaskedAlignedTable,
// The sprite requires 6*24=148 bytes (0x94 in hex) so we include it at memory location 0x0200.
// This way, the sprite occupies 0x0200-0x0293 memory locations, being 256-bytes aligned (none
// of the memory locations is outside page 0x02).
//
__at(0x200) const u8 g_alien[6*24] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xF0, 0xF0, 0xF0, 0xF0, 0xA0,
   0x00, 0xB4, 0x3C, 0x3C, 0x3C, 0xA0,
   0x00, 0xB4, 0xD8, 0x78, 0x9C, 0xA0,
   0x00, 0xB4, 0xE4, 0x6C, 0xB4, 0xA0,
   0x00, 0xB4, 0x3C, 0x3C, 0x3C, 0xA0,
   0x00, 0xB4, 0x6C, 0xCC, 0x3C, 0xA0,
   0x00, 0xF0, 0x3C, 0x3C, 0x78, 0xA0,
   0x00, 0x00, 0x50, 0x78, 0x00, 0x00,
   0xF0, 0x00, 0x50, 0x78, 0x00, 0x00,
   0x70, 0xF0, 0xF0, 0x78, 0xF0, 0xF0,
   0x34, 0xF0, 0x78, 0x78, 0x78, 0x30,
   0xB4, 0x3C, 0x78, 0x78, 0x3C, 0xB0,
   0xF0, 0xF0, 0xF0, 0x78, 0xF0, 0xF0,
   0x70, 0x00, 0xF0, 0x78, 0x00, 0xF0,
   0x34, 0xF0, 0x78, 0x78, 0xF0, 0x38,
   0xF0, 0x3C, 0x3C, 0x3C, 0x3C, 0x38,
   0x70, 0xF0, 0xF0, 0x78, 0xF0, 0xF0,
   0x34, 0x3C, 0xF0, 0x78, 0x00, 0x50,
   0xF0, 0xF0, 0x3C, 0x78, 0xF0, 0xB0,
   0x00, 0x00, 0xF0, 0x78, 0x3C, 0x38,
   0xF0, 0xF0, 0xF0, 0x78, 0xF0, 0xF0,
   0xB0, 0xB4, 0x78, 0x3C, 0xF0, 0xF0,
   0xB0, 0x3C, 0xF0, 0xF0, 0x3C, 0x30
};
