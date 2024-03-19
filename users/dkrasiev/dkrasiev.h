#pragma once
#include "quantum.h"

#define _BASE   0

#define _HMR    1
#define _GAMES  2

#define _THIRD  3
#define _FOUR   4
#define _FIVE   5
#define _SIX    6
#define _SEVEN  7
#define _EIGHT  8
#define _NINE   9
#define _TEN    10
#define _ELEVEN 11
#define _TWELVE 12
#define _LOWER  13

#define _RAISE  14
#define _ADJUST 15

#define BASE DF(_BASE)
#define HMR TG(_HMR)
#define GAMES TG(_GAMES)
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define ADJUST MO(_ADJUST)
#define PREVWRD LCTL(KC_LEFT)
#define NEXTWRD LCTL(KC_RIGHT)
#define LANG LGUI(KC_SPC)
#define SEARCH LALT(KC_SPC)
#define CT_Q LCTL_T(KC_Q)
#define CT_CM RCTL_T(KC_COMM)
#define SF_Z LSFT_T(KC_Z)
#define SF_SS RSFT_T(KC_SLSH)
#define AL_X LALT_T(KC_X)
#define AL_DT RALT_T(KC_DOT)
#define LO_TB LT(LOWER, KC_TAB)

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)

// Right-hand home row mods
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

enum custom_keycodes {
    NEXTSEN = QK_KB,
    PREDL,
    BRACES,
    PARENTH,
    ALT_TAB,
    LAYER_NEXT,
    LAYER_PREV,
};

// 1st layer on the cycle
#define LAYER_CYCLE_START 0
// Last layer on the cycle
#define LAYER_CYCLE_END 15
