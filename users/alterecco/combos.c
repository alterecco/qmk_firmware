#include <stdint.h>
#include "process_combo.h"
#include "config.h"
#include "keycodes.h"

const uint16_t PROGMEM enter_combo[] =        {___A___, ___E___, COMBO_END};
const uint16_t PROGMEM backspace_combo[] =    {__DOT__, _SLASH_, COMBO_END};
const uint16_t PROGMEM tab_combo[] =          {___U___, ___O___, COMBO_END};
const uint16_t PROGMEM escape_combo[] =       {___S___, ___N___, COMBO_END};
const uint16_t PROGMEM delete_combo[] =       {_SLASH_, _SQUOT_, COMBO_END};

const uint16_t PROGMEM undo_combo[] =         {___X___, ___C___, COMBO_END};
const uint16_t PROGMEM redo_combo[] =         {___X___, ___R___, COMBO_END};
const uint16_t PROGMEM copy_combo[] =         {___G___, ___L___, COMBO_END};
const uint16_t PROGMEM paste_combo[] =        {___L___, ___C___, COMBO_END};
const uint16_t PROGMEM cut_combo[] =          {___G___, ___C___, COMBO_END};
const uint16_t PROGMEM select_all_combo[] =   {___X___, ___C___, COMBO_END};

const uint16_t PROGMEM kc_q_combo[] =         {___F___, ___M___, COMBO_END};
const uint16_t PROGMEM kc_z_combo[] =         {___M___, ___P___, COMBO_END};

const uint16_t PROGMEM kc_0_combo[] =         {___S___, _COMMA_, COMBO_END};
const uint16_t PROGMEM kc_1_combo[] =         {___S___, ___U___, COMBO_END};
const uint16_t PROGMEM kc_2_combo[] =         {___S___, ___O___, COMBO_END};
const uint16_t PROGMEM kc_3_combo[] =         {___S___, ___Y___, COMBO_END};
const uint16_t PROGMEM kc_4_combo[] =         {___S___, ___A___, COMBO_END};
const uint16_t PROGMEM kc_5_combo[] =         {___S___, ___E___, COMBO_END};
const uint16_t PROGMEM kc_6_combo[] =         {___S___, ___I___, COMBO_END};
const uint16_t PROGMEM kc_7_combo[] =         {___S___, __DOT__, COMBO_END};
const uint16_t PROGMEM kc_8_combo[] =         {___S___, _SLASH_, COMBO_END};
const uint16_t PROGMEM kc_9_combo[] =         {___S___, _SQUOT_, COMBO_END};

const uint16_t PROGMEM aelig_combo[] =        {_SQUOT_, _DQUOT_, COMBO_END};
const uint16_t PROGMEM oslsh_combo[] =        {_DQUOT_, ___H___, COMBO_END};
const uint16_t PROGMEM aring_combo[] =        {___H___, ___K___, COMBO_END};

const uint16_t PROGMEM lparn_combo[] =        {___D___, ___A___, COMBO_END};
const uint16_t PROGMEM rparn_combo[] =        {___D___, __DOT__, COMBO_END};
const uint16_t PROGMEM lcbrc_combo[] =        {___D___, ___E___, COMBO_END};
const uint16_t PROGMEM rcbrc_combo[] =        {___D___, _SLASH_, COMBO_END};
const uint16_t PROGMEM lbrac_combo[] =        {___D___, ___I___, COMBO_END};
const uint16_t PROGMEM rbrac_combo[] =        {___D___, _SQUOT_, COMBO_END};
const uint16_t PROGMEM labrc_combo[] =        {___D___, ___H___, COMBO_END};
const uint16_t PROGMEM rabrc_combo[] =        {___D___, _DQUOT_, COMBO_END};

const uint16_t PROGMEM tilde_combo[] =        {___N___, _COMMA_, COMBO_END};
const uint16_t PROGMEM colon_combo[] =        {___N___, ___A___, COMBO_END};
const uint16_t PROGMEM semi_combo[] =         {___N___, ___E___, COMBO_END};
const uint16_t PROGMEM hash_combo[] =         {___N___, ___I___, COMBO_END};
const uint16_t PROGMEM percent_combo[] =      {___N___, ___H___, COMBO_END};

const uint16_t PROGMEM caret_combo[] =        {___N___, _GRAVE_, COMBO_END};
const uint16_t PROGMEM pipe_combo[] =         {___N___, __DOT__, COMBO_END};
const uint16_t PROGMEM bslash_combo[] =       {___N___, _SLASH_, COMBO_END};
const uint16_t PROGMEM at_combo[] =           {___N___, _SQUOT_, COMBO_END};
const uint16_t PROGMEM dollar_combo[] =       {___N___, _DQUOT_, COMBO_END};

combo_t key_combos[] = {

  COMBO(enter_combo, _ENTER_),
  COMBO(backspace_combo, _BKSPC_),
  COMBO(tab_combo, __TAB__),
  COMBO(escape_combo, __ESC__),
  COMBO(delete_combo, __DEL__),

  COMBO(undo_combo, MAC_UNDO),
  COMBO(redo_combo, MAC_REDO),
  COMBO(copy_combo, MAC_COPY),
  COMBO(paste_combo, MAC_PASTE),
  COMBO(cut_combo, MAC_CUT),
  COMBO(select_all_combo, MAC_SELECT_ALL),

  COMBO(kc_q_combo, ___Q___),
  COMBO(kc_z_combo, ___Z___),

  COMBO(kc_0_combo, ___0___),
  COMBO(kc_1_combo, ___1___),
  COMBO(kc_2_combo, ___2___),
  COMBO(kc_3_combo, ___3___),
  COMBO(kc_4_combo, ___4___),
  COMBO(kc_5_combo, ___5___),
  COMBO(kc_6_combo, ___6___),
  COMBO(kc_7_combo, ___7___),
  COMBO(kc_8_combo, ___8___),
  COMBO(kc_9_combo, ___9___),

  COMBO(aelig_combo, _AELIG_),
  COMBO(oslsh_combo, _OSLSH_),
  COMBO(aring_combo, _ARING_),

  COMBO(lparn_combo, _LPARN_),
  COMBO(rparn_combo, _RPARN_),
  COMBO(lcbrc_combo, _LCBRC_),
  COMBO(rcbrc_combo, _RCBRC_),
  COMBO(lbrac_combo, _LBRAC_),
  COMBO(rbrac_combo, _RBRAC_),
  COMBO(labrc_combo, _LABRC_),
  COMBO(rabrc_combo, _RABRC_),

  COMBO(tilde_combo, _TILDE_),
  COMBO(colon_combo, _COLON_),
  COMBO(semi_combo, _SCOLN_),
  COMBO(hash_combo, _HASH__),
  COMBO(percent_combo, _PERCT_),
  COMBO(caret_combo, _CIRCF_),
  COMBO(pipe_combo, _PIPE__),
  COMBO(bslash_combo, _BSLSH_),
  COMBO(at_combo, __AT___),
  COMBO(dollar_combo, _DOLLR_),
};

uint16_t COMBO_LEN = sizeof(key_combos) / sizeof(key_combos[0]);
