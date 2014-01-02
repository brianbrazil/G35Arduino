/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright © 2011 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  See README for complete attributions.
*/

#include <TwinklePink.h>

TwinklePink::TwinklePink(G35& g35) : LightProgram(g35) {
  g35_.fill_random_max(0, light_count_, G35::MAX_INTENSITY);
}

uint32_t TwinklePink::Do() {
  g35_.set_color(rand() % light_count_, G35::MAX_INTENSITY, pink_colors());
  return bulb_frame_;
}

color_t TwinklePink::pink_colors() {
  switch (rand()%3) {
  	case 0: return COLOR(0xF, 1, 1);
  	case 1: return COLOR(0xF, 2, 2);
  	case 2: return COLOR(0xF, 3, 3);
  }
  
}