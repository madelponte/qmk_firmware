#include QMK_KEYBOARD_H

#define COPY LCTL(KC_C)
#define PSTE LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(LT(1,KC_F3), LT(2,KC_F5), LT(3,KC_F12)), //useful F-keys
    [1] = LAYOUT(XXXXXXX, COPY, PSTE),                    //copy paste
    [2] = LAYOUT(KC_MPRV, XXXXXXX, KC_MNXT),              //prev and next track
    [3] = LAYOUT(KC_MPLY, KC_MUTE, XXXXXXX),              // play / pause mute
};

