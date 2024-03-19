#include QMK_KEYBOARD_H
#include "dkrasiev.h"
#include "oled/ergohaven_dark.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                            KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC,
        KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                            KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                            KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN,KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                            KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LSFT,
                          KC_LGUI, KC_LALT, KC_LCTL, LOWER  , KC_SPC ,          KC_ENT , RAISE  , KC_RCTL, KC_RALT, KC_RGUI
    ),

    [_HMR] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, GUI_A  , ALT_S  , SFT_D  , CTL_F  , _______,                            _______, CTL_J  , SFT_K  , ALT_L  , GUI_SCLN,_______,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
    ),

    [_GAMES] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, KC_T   , KC_Q   , KC_W   , KC_E   , KC_R   ,                            _______, _______, _______, _______, _______, _______,
        _______, KC_G   , KC_A   , KC_S   , KC_D   , KC_F   ,                            _______, _______, _______, _______, _______, _______,
        _______, KC_B   , KC_Z   , KC_X   , KC_C   , KC_V   ,                            _______, _______, _______, _______, _______, _______,
                          _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
    ),

    [_LOWER] = LAYOUT(
        KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  ,                            KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 ,
        _______, _______, _______, KC_PGUP, _______, KC_INS ,                            _______, _______, _______, _______, _______, _______,
        _______, _______, KC_HOME, KC_PGDN, KC_END , KC_ENT ,                            KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT,_______, _______,
        _______, _______, PREVWRD, KC_CAPS, NEXTWRD, KC_DEL ,                            KC_PSCR, _______, _______, _______, _______, _______,
                          QK_BOOT, _______, _______, _______, _______,          _______, ADJUST , _______, _______, _______
    ),

    [_RAISE] = LAYOUT(
        _______, _______, KC_AT  , KC_DLR , KC_HASH, _______,                            _______, _______, KC_CIRC, _______, _______, _______,
        _______, _______, KC_LT  , KC_EQL , KC_GT  , KC_GRV ,                            _______, KC_LBRC, KC_UNDS, KC_RBRC, _______, _______,
        _______, KC_BSLS, KC_LPRN, KC_MINS, KC_RPRN, KC_PLUS,                            KC_PERC, KC_LCBR, KC_SCLN, KC_RCBR, KC_EXLM, _______,
        _______, _______, KC_ASTR, KC_COLN, KC_SLSH, _______,                            _______, KC_PIPE, KC_TILD, KC_AMPR, _______, _______,
                          _______, _______, _______, ADJUST , _______,          _______, _______, _______, QK_RBT , QK_BOOT
    ),

    [_ADJUST] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, GAMES  , _______, _______, _______,                            _______, _______, _______, _______, DM_PLY1, DM_REC1,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,                            HMR    , KC_VOLD, KC_MUTE, KC_VOLU, DM_PLY2, DM_REC2,
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, CG_TOGG,                            _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, DM_RSTP,
                          _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
    ),
};


#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;
    } else {
        return OLED_ROTATION_270;
    }

    return rotation;
}

char *get_layer_name(int layer) {
    switch (layer) {
        case _BASE:
            return "Base ";

        case _HMR:
            return "HMR  ";
        case _GAMES:
            return "Games";
        case _RAISE:
            return "Raise";
        case _LOWER:
            return "Lower";
        case _ADJUST:
            return "Adjst";

        case _THIRD:
            return "Third";
        case _FOUR:
            return "Four ";
        case _FIVE:
            return "Five ";
        case _SIX:
            return "Six  ";
        case _SEVEN:
            return "Seven";
        case _EIGHT:
            return "Eight";
        case _NINE:
            return "Nine ";
        case _TEN:
            return "Ten  ";
        case _ELEVEN:
            return "Elevn";
        case _TWELVE:
            return "Twlve";
        default:
            return "Undef";
    }
}

char *get_highest_layer_name(void) {
    return get_layer_name(get_highest_layer(layer_state));
}

void oled_print(char *str, bool invert) {
    oled_write_P(PSTR(str), invert);
}

void render_layer_state(void) {
    oled_print("-----", false);
    oled_print("     ", false);

    oled_print("K:02 ", false);
    oled_print("     ", false);
    oled_print("dkrsv", false);

    oled_print("     ", false);
    oled_print("     ", false);

    oled_print("LAYER", false);
    oled_print("     ", false);
    oled_print(get_highest_layer_name(), false);

    oled_print("     ", false);
    oled_print("     ", false);

    oled_print(host_keyboard_led_state().caps_lock ? "CPSLK" : "     ", false);
    oled_print("     ", false);
    oled_print(keymap_config.swap_lctl_lgui ? "MAC  " : "     ", false);

    oled_print("-----", false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_layer_state();
    } else {
        ergohaven_dark_draw();
    }

    return false;
}

#endif
