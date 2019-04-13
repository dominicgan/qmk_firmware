#include QMK_KEYBOARD_H
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // 0: Base Layer
  LAYOUT_all(
      KC_GESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_GRV,   KC_BSLS,   \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSPC,   \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,    \
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_NO,   KC_RSFT,  KC_DEL,    \
      KC_LALT, KC_NO,   KC_LGUI,                          KC_SPC,                          KC_NO,   MO(1),    KC_NO,   KC_NO,    MO(2)),

  // 1: Function Layer
  LAYOUT_all(
      KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_SLCK,  KC_PSCR,  \
      KC_CAPS, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_UP,   KC_NO,    KC_PAUS,           KC_DEL,   \
      KC_LCTL, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,             KC_ENT,   \
      KC_LSFT, KC_NO,   KC_NO,   KC_NO,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_RSFT,  KC_DEL,   \
      KC_LALT, KC_NO,   KC_LGUI,                          KC_SPC,                          KC_NO,   MO(1),    KC_NO,   KC_NO,    MO(2)),

  // 2. Function Layer
  LAYOUT_all(
      KC_RESET,KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_SLCK,  KC_DEBUG,  \
      KC_CAPS, KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_PGUP, KC_NO,    KC_PAUS,           KC_DEL,   \
      KC_LCTL, BL_TOGG, BL_DEC,  BL_INC,  BL_BRTG,KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_HOME, KC_PGDN, KC_END,   KC_NO,             KC_ENT,   \
      KC_LSFT, KC_NO,   RGB_TOG, RGB_RMOD,RGB_MOD,RGB_HUD,RGB_HUI,RGB_SAD,RGB_SAI,RGB_VAD,RGB_VAI,  KC_NO,    KC_NO,   KC_RSFT,  KC_DEL,   \
      KC_LALT, KC_NO,   KC_LGUI,                          KC_SPC,                          KC_NO,   MO(1),    KC_NO,   KC_NO,    MO(2)),

};


// Loop
void matrix_scan_user(void) {
  // Empty
};
