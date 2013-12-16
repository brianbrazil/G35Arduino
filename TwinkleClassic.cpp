/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright © 2011 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  See README for complete attributions.
*/

#include <TwinkleClassic.h>

TwinkleClassic::TwinkleClassic(G35& g35) : LightProgram(g35) {
  g35_.fill_random_max(0, light_count_, G35::MAX_INTENSITY);
}

uint32_t TwinkleClassic::Do() {
  g35_.set_color(rand() % light_count_, G35::MAX_INTENSITY,
                 classic_colors(rand()));
  return bulb_frame_;
}

color_t TwinkleClassic::classic_colors(uint16_t sequence) {
  switch(sequence % 4) {
  	case 0: return COLOR_RED;
  	case 1: return COLOR_GREEN;
  	case 2: return COLOR_BLUE;
  	case 3: return COLOR_YELLOW;
  }
}