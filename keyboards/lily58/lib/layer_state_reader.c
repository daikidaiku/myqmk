
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_LOWER (1 << 1)
#define L_RAISE (1 << 2)
#define L_ADJUST (1 << 3)
#define L_ADJUST_TRI (L_ADJUST | L_RAISE | L_LOWER)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    // snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    snprintf(layer_state_str, sizeof(layer_state_str), "Dflt");
    break;
  case L_RAISE:
    // snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
    snprintf(layer_state_str, sizeof(layer_state_str), "Rse");
    break;
  case L_LOWER:
    // snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
    snprintf(layer_state_str, sizeof(layer_state_str), "Low");
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    // snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    snprintf(layer_state_str, sizeof(layer_state_str), "Adj");
    break;
  default:
    // snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
    snprintf(layer_state_str, sizeof(layer_state_str), "Undef-%ld", layer_state);
  }

  return layer_state_str;
}
