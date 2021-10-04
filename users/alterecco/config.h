#pragma once

// this makes it possible to do rolling combos (zx) with keys that
// convert to other keys on hold (z becomes ctrl when you hold it,
// and when this option isn't enabled, z rapidly followed by x
// actually sends Ctrl-x. That's bad.)
#define IGNORE_MOD_TAP_INTERRUPT
#undef PERMISSIVE_HOLD

#ifdef TAPPING_TERM
#    undef TAPPING_TERM
#endif
#if defined(KEYBOARD_cornelius)
#    define TAPPING_TERM 185
#else
#    define TAPPING_TERM 175
#endif


#define COMBO_TERM 50
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 5000
