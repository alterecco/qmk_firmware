#pragma once
#include "alterecco.h"
#include "keycodes.h"

/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/

// clang-format off
#define ___________________HDG_L1__________________   ___J___, ___F___, ___M___, ___P___, ___V___
#define ___________________HDG_L2__________________   ___R___, ___S___, ___N___, ___D___, ___W___
#define ___________________HDG_L3__________________   ___X___, ___G___, ___L___, ___C___, ___B___
#define ___________________HDG_L4__________________                              _LSHFT_, ___T___

#define ___________________HDG_R1__________________   _GRAVE_, __DOT__, __SLH__, _SQUOT_, _DQUOT_
#define ___________________HDG_R2__________________   _COMMA_, ___A___, ___E___, ___I___, ___H___
#define ___________________HDG_R3__________________   _MINUS_, ___U___, ___O___, ___Y___, ___K___
#define ___________________HDG_R4__________________   _SPACE_, _RSHFT_

//      -----------------------------------------------------------------------------------------

#define ___________________NAV_L1__________________   _______, _LCTRL_, _LOPT__, _LCTRL_, _______
#define ___________________NAV_L2__________________   _______, _______, _LCMD__, _LSHFT_, _______
#define ___________________NAV_L3__________________   _______, _______, _______, _______, _______
#define ___________________NAV_L4__________________                              _______, _______

#define ___________________NAV_R1__________________   _______, _BKSPC_, __UP___, __DEL__, _______
#define ___________________NAV_R2__________________   _______, _LEFT__, _DOWN__, _RIGHT_, _______
#define ___________________NAV_R3__________________   _______, __TAB__, _TABL__, _TABR__, _______
#define ___________________NAV_R4__________________   _SPACE_, _ENTER_

//      -----------------------------------------------------------------------------------------

#define ___________________NUM_L1__________________   _______, _LCTRL_, _LOPT__, _LCTRL_, _______
#define ___________________NUM_L2__________________   _______, _______, _LCMD__, _LSHFT_, _______
#define ___________________NUM_L3__________________   _______, _______, _______, _______, _______
#define ___________________NUM_L4__________________                              _______, _______

#define ___________________NUM_R1__________________   _______, ___7___, ___8___, ___9___, _______
#define ___________________NUM_R2__________________   ___0___, ___4___, ___5___, ___6___, _______
#define ___________________NUM_R3__________________   _______, ___1___, ___2___, ___3___, _______
#define ___________________NUM_R4__________________   _SPACE_, _ENTER_

//      -----------------------------------------------------------------------------------------

#define ___________________WIN_L1__________________   _______, _DSKT1_, _DSKT2_, _DSKT3_, _______
#define ___________________WIN_L2__________________   _______, _______, _WPREV_, _WNEXT_, _______
#define ___________________WIN_L3__________________   _______, _______, _______, _______, _______
#define ___________________WIN_L4__________________                              _______, _______

#define ___________________WIN_R1__________________   _______, _DSKT4_, _DSKT5_, _DSKT6_, _______
#define ___________________WIN_R2__________________   _______, _______, _______, _______, _______
#define ___________________WIN_R3__________________   _______, _______, _______, _______, _______
#define ___________________WIN_R4__________________   _SPACE_, _ENTER_

//      -----------------------------------------------------------------------------------------

#define ___________________SYS_L1__________________   _______, _______, _______, _______, _______
#define ___________________SYS_L2__________________   _______, _______, _______, _______, _______
#define ___________________SYS_L3__________________   _______, _______, _______, _______, _______
#define ___________________SYS_L4__________________                              _______, _______

#define ___________________SYS_R1__________________   _______, _______, _______, _______, _______
#define ___________________SYS_R2__________________   _______, _SCRSH_, _______, _______, _______
#define ___________________SYS_R3__________________   _______, _______, _______, _______, _______
#define ___________________SYS_R4__________________   _______, _______
// clang-format on
