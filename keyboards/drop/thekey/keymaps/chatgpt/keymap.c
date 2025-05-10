#include QMK_KEYBOARD_H

#define COPY LCTL(KC_C)
#define PSTE LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_WWW_SEARCH, COPY, PSTE)
};

