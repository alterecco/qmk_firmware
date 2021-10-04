#include QMK_KEYBOARD_H
#include "alterecco.h"

// clang-format off
#define LAYOUT_wrapper(...)            LAYOUT(__VA_ARGS__)
#define _LAYOUT_cornelius_base( \
    K01, K02, K03, K04, K05,    K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15,    K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25,    K26, K27, K28, K29, K2A, \
                   K31, K32,    K33, K34 \
  ) \
  LAYOUT_wrapper( \
    ___, K01, K02, K03, K04, K05,    K06, K07, K08, K09, K0A, ___, \
    ___, K11, K12, K13, K14, K15,    K16, K17, K18, K19, K1A, ___, \
    ___, K21, K22, K23, K24, K25,    K26, K27, K28, K29, K2A, ___, \
    ___, ___, ___, ___, K31, K32,    K33, K34, ___, ___, ___, ___  \
    )
#define LAYOUT_cornelius_base(...)   _LAYOUT_cornelius_base(__VA_ARGS__)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEF] = LAYOUT_cornelius_base(
    ___________________HDG_L1__________________, ___________________HDG_R1__________________,
    ___________________HDG_L2__________________, ___________________HDG_R2__________________,
    ___________________HDG_L3__________________, ___________________HDG_R3__________________,
    ___________________HDG_L4__________________, ___________________HDG_R4__________________
  ),
  [NAV] = LAYOUT_cornelius_base(
    ___________________NAV_L1__________________, ___________________NAV_R1__________________,
    ___________________NAV_L2__________________, ___________________NAV_R2__________________,
    ___________________NAV_L3__________________, ___________________NAV_R3__________________,
    ___________________NAV_L4__________________, ___________________NAV_R4__________________
  ),
  [NUM] = LAYOUT_cornelius_base(
    ___________________NUM_L1__________________, ___________________NUM_R1__________________,
    ___________________NUM_L2__________________, ___________________NUM_R2__________________,
    ___________________NUM_L3__________________, ___________________NUM_R3__________________,
    ___________________NUM_L4__________________, ___________________NUM_R4__________________
  ),
  [WIN] = LAYOUT_cornelius_base(
    ___________________WIN_L1__________________, ___________________WIN_R1__________________,
    ___________________WIN_L2__________________, ___________________WIN_R2__________________,
    ___________________WIN_L3__________________, ___________________WIN_R3__________________,
    ___________________WIN_L4__________________, ___________________WIN_R4__________________
  ),
  [SYS] = LAYOUT_cornelius_base(
    ___________________SYS_L1__________________, ___________________SYS_R1__________________,
    ___________________SYS_L2__________________, ___________________SYS_R2__________________,
    ___________________SYS_L3__________________, ___________________SYS_R3__________________,
    ___________________SYS_L4__________________, ___________________SYS_R4__________________
  ),
};

const key_override_t ctrl_h = ko_make_basic(MOD_MASK_CTRL, KC_H, C(KC_LEFT)); //MocOS Desktop Navigation
const key_override_t ctrl_n = ko_make_basic(MOD_MASK_CTRL, KC_N, C(KC_UP));  //MocOS Desktop Navigation
const key_override_t ctrl_t = ko_make_basic(MOD_MASK_CTRL, KC_T, C(KC_DOWN));  //MocOS Desktop Navigation
const key_override_t ctrl_s = ko_make_basic(MOD_MASK_CTRL, KC_S, C(KC_RGHT));  //MocOS Desktop Navigation
const key_override_t bsp_del = ko_make_basic(MOD_MASK_SHIFT, BSP_CMD, KC_DEL);  //  Shift+Bksp sends Delete

const key_override_t **key_overrides = (const key_override_t *[]){
    &ctrl_h,
    &ctrl_n,
    &ctrl_t,
    &ctrl_s,
    &bsp_del,
    NULL
};
