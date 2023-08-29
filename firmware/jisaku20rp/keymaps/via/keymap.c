#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT_numpad_4x4(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5
    )
};
