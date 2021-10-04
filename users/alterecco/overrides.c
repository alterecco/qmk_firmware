#include QMK_KEYBOARD_H
#include "alterecco.h"

const key_override_t ctrl_h = ko_make_basic(MOD_MASK_CTRL, KC_H, C(KC_LEFT)); //MocOS Desktop Navigation
const key_override_t ctrl_n = ko_make_basic(MOD_MASK_CTRL, KC_N, C(KC_UP));  //MocOS Desktop Navigation
const key_override_t ctrl_t = ko_make_basic(MOD_MASK_CTRL, KC_T, C(KC_DOWN));  //MocOS Desktop Navigation
const key_override_t ctrl_s = ko_make_basic(MOD_MASK_CTRL, KC_S, C(KC_RGHT));  //MocOS Desktop Navigation

const key_override_t **key_overrides = (const key_override_t *[]){
    &ctrl_h,
    &ctrl_n,
    &ctrl_t,
    &ctrl_s,
    NULL
};




// #include "process_key_override.h"
// #include "keycodes.h"

// const key_override_t minus_plus_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINUS, S(KC_EQUAL)),

// // #define _COMMA_ &morph_comma_underscore
// // #define _MINUS_ &morph_minus_plus
// // #define _COLON_ &morph_colon_pipe
// // #define _GRAVE_ &morph_grave_equal
// // #define __DOT__ &morph_hmrc_dot_ampersand
// // #define _SLASH_ &morph_hmro_slash_star
// // #define _SQUOT_ &morph_squote_exclamation
// // #define _DQUOT_ &morph_dquote_question

// // Shift + esc = ~
// const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRAVE));
// // GUI + esc = `
// const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_GUI, KC_ESC, KC_GRAVE);

// const key_override_t** key_overrides = (const key_override_t*[]){
//   &minus_plus_override,
//   &tilde_esc_override,
//   &grave_esc_override,
//   // &ko_make_basic(MOD_MASK_SHIFT,      _COMMA_,        _UNDRS_),
//   // &ko_make_basic(MOD_MASK_SHIFT,      _GRAVE_,        _EQUAL_),
//   // &ko_make_basic(MOD_MASK_SHIFT,      KC_DOT,         _AMPRS_),
//   // &ko_make_basic(MOD_MASK_SHIFT,      KC_SLASH,       _ASTRS_),
//   // &ko_make_basic(MOD_MASK_SHIFT,      _SQUOT_,        _EXCLM_),
//   // &ko_make_basic(MOD_MASK_SHIFT,      _DQUOT_,        _QUEST_),
//   NULL
// };
