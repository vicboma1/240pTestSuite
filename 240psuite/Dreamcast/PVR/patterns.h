/* 
 * 240p Test Suite
 * Copyright (C)2011 Artemio Urbina
 *
 * This file is part of the 240p Test Suite
 *
 * The 240p Test Suite is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * The 240p Test Suite is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 240p Test Suite; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef PATTERNS_H
#define PATTERNS_H

void DrawPluge();
void DrawWhiteScreen();
void DrawGrayRamp();
void DrawColorBars();
void DrawColorBleed();
void Draw601ColorBars();
void DrawGrid(int full);
void DrawMonoscope();
void DrawLinearity(int full);
void Draw100IRE();
void DrawSMPTEColorBars();
void DrawSharpness();
void DrawOverscan();

#endif

