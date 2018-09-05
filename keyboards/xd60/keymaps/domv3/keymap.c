#include "xd60.h"
#include "action_layer.h"

// tap dance declaration
enum {
  TD_SL_RS = 0
};



// #ifdef KEYMAP_SECTION_ENABLE
// const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
// #else
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
// #endif
    // 0: Base layer
    KEYMAP(
        KC_ESC,  KC_1,    KC_2,   KC_3,   KC_4,    KC_5,   KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC, KC_NO, \
        KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,    KC_T,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,          KC_BSLS, \
        KC_LCTL, KC_A,    KC_S,   KC_D,   KC_F,    KC_G,   KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_NO,            KC_ENT,  \
        KC_RSFT,    KC_LSFT, KC_Z,   KC_X,   KC_C,    KC_V,   KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_NO,    KC_SLSH, KC_UP,   KC_DEL,  \
        F(0), KC_LALT, KC_LGUI,                         KC_SPC,                               KC_RGUI, KC_RALT,  KC_LEFT, KC_DOWN, KC_RGHT),
    // 1: Function layer
    KEYMAP(
        KC_TILD,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,    KC_DEL,  KC_NO,  \
        KC_NO,    BL_TOGG,  BL_DEC,  BL_INC,  BL_STEP, KC_NO,   KC_CALC, KC_NO,   KC_NO,   KC_INS,  KC_HOME, KC_PGUP,  KC_PAUS,            KC_PSCR, \
        KC_CAPS,  KC_MUTE,  KC_VOLD, KC_VOLU, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,  KC_END,  KC_PGDN,  KC_NO,              KC_NO, \
        KC_NO,    KC_NO,    KC_APP,  RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, KC_NO,    KC_RSFT,   KC_PGUP, KC_GRV,\
        F(0),     KC_NO,    KC_NO,                           KC_NO,                           KC_NO,   KC_NO,    KC_HOME, KC_PGDN, KC_END),
};

// #ifdef KEYMAP_SECTION_ENABLE
// const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
// #else
// const uint16_t fn_actions[] PROGMEM = {
// #endif
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1) // fn layer 1
};
