#include "alps64.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP( \
        ESC,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,    MINS, EQL,  NUHS, BSPC, \
        TAB,   Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,    LBRC, RBRC,       BSLS, \
        LCTL,  A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT, ENT,  \
        LSFT,  NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,  SLSH, KC_UP,   NO, \
        F(0),  LALT,LGUI,         SPC,                      APP,  KC_LEFT, KC_DOWN, KC_RIGHT),
    // 1: Function layer
    KEYMAP( \
        TILD,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,  F11,  F12,  NO,   DEL, \
        NO,	   F(1),NO,  NO,  NO,  NO,  NO,  NO,  NO,  INS, HOME, PGUP, PAUS,       PSCR, \
        CAPS,  MUTE,VOLD,VOLU,NO,  NO,  NO,  NO,  NO,  DEL, END,  PGDN, NO,   \
        NO,    NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   NO,   PGUP,  NO, \
        F(0),  NO,  NO,           NO,                       NO,   HOME, PGDN,  END),
};
const uint16_t PROGMEM fn_actions[] = {
	[0] = ACTION_LAYER_MOMENTARY(1) // fn layer 1
//	[1] = FAUXCLICKY_TOGGLE
};
