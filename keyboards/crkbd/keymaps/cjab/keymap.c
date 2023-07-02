#include QMK_KEYBOARD_H

#define DEFAULT_LAYER 0
#define GAME_LAYER 1
#define NUMBER_LAYER 2
#define SYMBOL_LAYER 3
#define GAME_NUMBER_LAYER 4
#define ARROW_LAYER 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEFAULT_LAYER] = LAYOUT(
                 KC_TAB,           KC_Q, KC_W, KC_E, KC_R, KC_T, /*|*/ KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSPC,
                 KC_LSFT,          KC_A, KC_S, KC_D, KC_F, KC_G, /*|*/ KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_ENT,
                 MO(ARROW_LAYER),  KC_Z, KC_X, KC_C, KC_V, KC_B, /*|*/ KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                      MO(NUMBER_LAYER), KC_LGUI, LCTL_T(KC_ESC), /*|*/ KC_SPC, MO(SYMBOL_LAYER), KC_RALT
  ),
  [GAME_LAYER] = LAYOUT(
           _______, _______, _______, _______, _______, _______, /*|*/ _______, _______, _______, _______, _______, _______,
           _______, _______, _______, _______, _______, _______, /*|*/ _______, _______, _______, _______, _______, _______,
           _______, _______, _______, _______, _______, _______, /*|*/ _______, _______, _______, _______, _______, _______,
                        _______, MO(GAME_NUMBER_LAYER), _______, /*|*/ _______, _______, _______
  ),
  [NUMBER_LAYER] = LAYOUT(
    _______,          KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, /*|*/ XXXXXXX, KC_1, KC_2, KC_3, XXXXXXX, _______,
    _______,          KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, /*|*/ KC_0,    KC_4, KC_5, KC_6, XXXXXXX, _______,
    TG(GAME_LAYER),  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15, /*|*/ XXXXXXX, KC_7, KC_8, KC_9, XXXXXXX, _______,
                                      _______, KC_LGUI, _______, /*|*/ _______, KC_0, _______
  ),
  [SYMBOL_LAYER] = LAYOUT(
           _______, XXXXXXX, KC_LT,   KC_DLR,  KC_GT,   XXXXXXX, /*|*/ XXXXXXX, KC_LBRC, KC_UNDS, KC_RBRC, XXXXXXX, _______,
           _______, KC_BSLS, KC_LPRN, KC_DQUO, KC_RPRN, KC_HASH, /*|*/ KC_MINS, KC_LCBR, KC_EQL,  KC_RCBR, KC_PIPE, _______,
           XXXXXXX, KC_AT,   KC_EXLM, KC_QUOT, KC_ASTR, KC_PERC, /*|*/ KC_PLUS, KC_AMPR, KC_CIRC, KC_GRV,  KC_TILD, _______,
                                      XXXXXXX, _______, _______, /*|*/ _______, _______, _______
  ),
  [GAME_NUMBER_LAYER] = LAYOUT(
             A(KC_TAB), KC_5, KC_6, KC_7,     KC_8,     XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
             _______,   KC_1, KC_2, KC_3,     KC_4,     XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
             XXXXXXX,   KC_9, KC_0, KC_MINUS, KC_EQUAL, XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                      XXXXXXX, _______, _______, /*|*/ _______, _______, _______
  ),
  [ARROW_LAYER] = LAYOUT(
           QK_BOOT, XXXXXXX, XXXXXXX, KC_MNXT, XXXXXXX, XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX, XXXXXXX, KC_DEL,
           _______, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, /*|*/ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, _______,
           XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, XXXXXXX, XXXXXXX, /*|*/ XXXXXXX, XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX, _______,
                                      XXXXXXX, XXXXXXX, KC_MPLY, /*|*/ KC_HOME, XXXXXXX, XXXXXXX
  ),
};
