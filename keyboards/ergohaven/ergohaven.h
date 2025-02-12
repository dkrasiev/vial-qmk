#pragma once
#include "quantum.h"

#define EH_VERSION_STR "v3.6"

// my layers
#define _BASE   0
#define _HRM    1
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

#define BASE      DF(_BASE)
#define RAISE     MO(_RAISE)
#define LOWER     MO(_LOWER)
#define ADJUST    MO(_ADJUST)
#define PREVWRD   LCTL(KC_LEFT)
#define NEXTWRD   LCTL(KC_RIGHT)
#define CTRLUP    LCTL(KC_UP)
#define CTRLDN    LCTL(KC_DOWN)
#define LANG      LALT(KC_LSFT)

#define HRM   TG(_HRM)
#define GAMES TG(_GAMES)

// Home Row Mods
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

#define CT_Q      LCTL_T(KC_Q)
#define CT_CM     RCTL_T(KC_COMM)
#define SF_Z      LSFT_T(KC_Z)
#define SF_SS     RSFT_T(KC_SLSH)
#define AL_X      LALT_T(KC_X)
#define AL_DT     RALT_T(KC_DOT)
#define LO_TB     LT(LOWER, KC_TAB)

#define APP_A     LSG(KC_A)
#define APP_S     LSG(KC_S)
#define APP_D     LSG(KC_D)
#define APP_F     LSG(KC_F)
#define APP_G     LSG(KC_G)
#define APP_X     LSG(KC_X)
#define APP_C     LSG(KC_C)
#define APP_V     LSG(KC_V)
#define APP_B     LSG(KC_B)

enum custom_keycodes {
    EH_RESERV1 = QK_KB,
    EH_RESERV2,
    EH_RESERV3,
    WNEXT,
    WPREV,
    LAYER_NEXT,
    LAYER_PREV,
};

// 1st layer on the cycle
#define LAYER_CYCLE_START 0
// Last layer on the cycle
#define LAYER_CYCLE_END   15

const char* layer_name(int layer);

const char* layer_upper_name(int layer);

void kb_config_update_ruen_toggle_mode(uint8_t mode);
