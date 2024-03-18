/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x83, 0x85, 0x35, 0x7A, 0xB4, 0xD8, 0x47, 0x4E}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

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

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
