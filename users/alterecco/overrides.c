#include QMK_KEYBOARD_H
#include "alterecco.h"

const key_override_t** key_overrides = (const key_override_t*[]){
  &ko_make_basic(MOD_MASK_SHIFT,      KC_MINUS,        KC_PLUS),
  &ko_make_basic(MOD_MASK_SHIFT,      KC_COMMA,        KC_UNDERSCORE),
  &ko_make_basic(MOD_MASK_SHIFT,      KC_GRAVE,        KC_EQUAL),
  &ko_make_basic(MOD_MASK_SHIFT,      KC_DOT,          KC_AMPERSAND),
  &ko_make_basic(MOD_MASK_SHIFT,      KC_SLASH,        KC_ASTERISK),
  &ko_make_basic(MOD_MASK_SHIFT,      KC_QUOTE,        KC_EXCLAIM),
  &ko_make_basic(MOD_MASK_SHIFT,      KC_DOUBLE_QUOTE, KC_QUESTION),
  NULL
};
