#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,         KC_Q, KC_W, KC_F,    KC_P,   KC_G,              KC_J,   KC_L,  KC_U,    KC_Y,   KC_SCLN, KC_ENT,
        LCTL_T(KC_ESC), KC_A, KC_R, KC_S,    KC_T,   KC_D,              KC_H,   KC_N,  KC_E,    KC_I,   KC_O,    KC_QUOT,
        KC_LSFT,        KC_Z, KC_X, KC_C,    KC_V,   KC_B,              KC_K,   KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                    KC_LALT, MO(1),  KC_BSPC,           KC_SPC, MO(2), KC_LGUI
    ),

    [1] = LAYOUT_split_3x6_3(
        KC_TAB,         KC_1,  KC_2,  KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ENT,
        LCTL_T(KC_ESC), KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,
        KC_LSFT,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,          KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_NO,   KC_RSFT,
                                      KC_LALT, KC_TRNS, KC_BSPC,        KC_SPC,  MO(3),   KC_LGUI
    ),

    [2] = LAYOUT_split_3x6_3(
        KC_TAB,         KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,     KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_NO,   KC_ENT,
        LCTL_T(KC_ESC), KC_TILD, KC_PLUS, KC_MINS, KC_EQL, KC_ASTR,     KC_NO,   KC_UNDS, KC_LCBR, KC_RCBR, KC_PIPE, KC_NO,
        KC_LSFT,        KC_GRV,  KC_NO,   KC_NO,   KC_NO,  KC_NO,       KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_BSLS, KC_RSFT,
                                          KC_LALT, MO(3),  KC_BSPC,     KC_SPC,  KC_TRNS, KC_RGUI
    ),

    [3] = LAYOUT_split_3x6_3(
        KC_F1,          KC_F2, KC_F3, KC_F4,   KC_F5,   KC_F6,          KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        LCTL_T(KC_ESC), KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_SYSREQ,
        KC_LSFT,        KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_RSFT,
                                      KC_LALT, KC_TRNS, KC_BSPC,        KC_SPC,  KC_TRNS, KC_LGUI
    )
};
