#include "process_key_override.h"
#include "keycodes.h"

const key_override_t** key_overrides = (const key_override_t*[]){
  &ko_make_basic(MOD_MASK_SHIFT,      KC_MINUS,        KC_PLUS),
  // &ko_make_basic(MOD_MASK_SHIFT,      _COMMA_,        _UNDRS_),
  // &ko_make_basic(MOD_MASK_SHIFT,      _GRAVE_,        _EQUAL_),
  // &ko_make_basic(MOD_MASK_SHIFT,      KC_DOT,         _AMPRS_),
  // &ko_make_basic(MOD_MASK_SHIFT,      KC_SLASH,       _ASTRS_),
  // &ko_make_basic(MOD_MASK_SHIFT,      _SQUOT_,        _EXCLM_),
  // &ko_make_basic(MOD_MASK_SHIFT,      _DQUOT_,        _QUEST_),
  NULL
};
