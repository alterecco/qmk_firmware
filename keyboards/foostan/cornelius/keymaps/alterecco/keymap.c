#include QMK_KEYBOARD_H
#include "alterecco.h"

// clang-format off
#define LAYOUT_wrapper(...)            LAYOUT(__VA_ARGS__)
#define LAYOUT_cornelius_base( \
    K01, K02, K03, K04, K05,    K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15,    K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25,    K26, K27, K28, K29, K2A, \
                   K31, K32,    K33, K34 \
  ) \
  LAYOUT_wrapper( \
    ___, K01, K02, K03, K04, K05,    K06, K07, K08, K09, K0A, ___, \
    ___, K11, K12, K13, K14, K15,    K16, K17, K18, K19, K1A, ___, \
    ___, K21, K22, K23, K24, K25,    K26, K27, K28, K29, K2A, ___, \
    ___, ___, ___, ___, K31, K32,    K33, K34, ___, ___, ___, ___, \
    )


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEF] = LAYOUT(
    _________________HDGOLD_L1_________________, _________________HDGOLD_R1_________________,
    _________________HDGOLD_L2_________________, _________________HDGOLD_R2_________________,
    _________________HDGOLD_L3_________________, _________________HDGOLD_R3_________________,
    _________________HDGOLD_L4_________________, _________________HDGOLD_R4_________________,
  ),
  [NAV] = LAYOUT(
    ________________NAVIGATE_L1________________, ________________NAVIGATE_R1________________,
    ________________NAVIGATE_L2________________, ________________NAVIGATE_R2________________,
    ________________NAVIGATE_L3________________, ________________NAVIGATE_R3________________,
    ________________NAVIGATE_L4________________, ________________NAVIGATE_R4________________,
  ),
  [NUM] = LAYOUT(
    _________________NUMBERS_L1________________, _________________NUMBERS_R1________________,
    _________________NUMBERS_L2________________, _________________NUMBERS_R2________________,
    _________________NUMBERS_L3________________, _________________NUMBERS_R3________________,
    _________________NUMBERS_L4________________, _________________NUMBERS_R4________________,
  ),
  [WIN] = LAYOUT(
    _________________WINDOWS_L1________________, _________________WINDOWS_R1________________,
    _________________WINDOWS_L2________________, _________________WINDOWS_R2________________,
    _________________WINDOWS_L3________________, _________________WINDOWS_R3________________,
    _________________WINDOWS_L4________________, _________________WINDOWS_R4________________,
  ),
  [SYS] = LAYOUT(
    _________________SYSTEM_L1_________________, _________________SYSTEM_R1_________________,
    _________________SYSTEM_L2_________________, _________________SYSTEM_R2_________________,
    _________________SYSTEM_L3_________________, _________________SYSTEM_R3_________________,
    _________________SYSTEM_L4_________________, _________________SYSTEM_R4_________________,
  ),
};
