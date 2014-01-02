/*
  G35: An Arduino library for GE Color Effects G-35 holiday lights.
  Copyright © 2011 The G35 Authors. Use, modification, and distribution are
  subject to the BSD license as described in the accompanying LICENSE file.

  By Mike Tsao <http://github.com/sowbug>.

  See README for complete attributions.
*/

#ifndef INCLUDE_G35_PROGRAMS_TWINKLE_RANDOM_H
#define INCLUDE_G35_PROGRAMS_TWINKLE_RANDOM_H

#include <LightProgram.h>

class TwinkleRandom : public LightProgram {
 public:
  TwinkleRandom(G35& g35);
  uint32_t Do();
  char* GetName() { return "Twinkle Random"; }
  static color_t random_colors();
};

#endif  // INCLUDE_G35_PROGRAMS_TWINKLE_RANDOM_H
