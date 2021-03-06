/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright © 2011 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  See README for complete attributions.
*/

#include <TwinkleRandom.h>

TwinkleRandom::TwinkleRandom(G35& g35) : LightProgram(g35) {
  g35_.fill_random_max(0, light_count_, G35::MAX_INTENSITY);
}

uint32_t TwinkleRandom::Do() {
  g35_.set_color(rand() % light_count_, G35::MAX_INTENSITY, random_colors());
  return bulb_frame_;
}

color_t TwinkleRandom::random_colors() {
  return COLOR(rand()%16, rand()%16, rand()%16);
}