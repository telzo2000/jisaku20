#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT_ortho_4x10(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_RSFT,
        TG(1), KC_TAB, KC_LCTL,KC_LGUI,LT(1,KC_SPC), KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT, KC_BSPC,
        KC_1
    ),
    [1] = LAYOUT_ortho_4x10(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_RSFT,
        KC_ESC, KC_TAB, KC_LCTL,KC_LGUI,KC_SPC, KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT, KC_BSPC,
        KC_2
    ),
        [2] = LAYOUT_ortho_4x10(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_RSFT,
        KC_ESC, KC_TAB, KC_LCTL,KC_LGUI,KC_SPC, KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT, KC_BSPC,
        KC_1
    ),
        [3] = LAYOUT_ortho_4x10(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_RSFT,
        KC_ESC, KC_TAB, KC_LCTL,KC_LGUI,KC_SPC, KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT, KC_BSPC,
        KC_1
    )

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN)},
    [1] = { ENCODER_CCW_CW(KC_MS_RIGHT, KC_MS_LEFT)},
    [2] = { ENCODER_CCW_CW(KC_A, KC_B)},
    [3] = { ENCODER_CCW_CW(KC_C, KC_D)},
};
#endif