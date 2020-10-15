#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LGUI,                                        KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_END,
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_V,           KC_DELETE,
    KC_LCTRL,       KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                                                           KC_K,           KC_N,           KC_E,           KC_I,           KC_O,           KC_BSPACE,
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_LALT,        KC_TRANSPARENT,                                 KC_RALT,        MO(1),          KC_M,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_CAPSLOCK,
    KC_F11,         KC_F12,         KC_F13,         KC_F14,         MO(3),                                                                                                          KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_PGUP,
                                                                                    KC_SPACE,       KC_TRANSPARENT, RESET,          KC_PGDOWN,      KC_TRANSPARENT, KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_QUES,        KC_LBRACKET,    KC_RBRACKET,    KC_BSLASH,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_COLN,        KC_PLUS,        KC_EQUAL,       KC_ASTR,        KC_AMPR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PIPE,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_SLASH,                                                                       KC_SCOLON,      KC_UNDS,        KC_QUOTE,       KC_DQUO,        KC_GRAVE,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_HASH,        KC_LPRN,        KC_RPRN,        MO(2),          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


// The state of the F14 key, used to toggle the red LED.
static uint8_t F14_PRESSED = 0;

// The state of the caps key, used to toggle the blue LED.
static uint8_t CAPS_PRESSED = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case KC_F14:
            if(record->event.pressed) {
                // We only run this when the key is pressed, otherwise releasing the
                // key would immediately turn the LED off again.
                if(F14_PRESSED == 0) {
                    ergodox_right_led_1_on();
                } else {
                    ergodox_right_led_1_off();
                }

                F14_PRESSED = !F14_PRESSED;
            }
            break;
        case KC_CAPSLOCK:
            if(record->event.pressed) {
                // We only run this when the key is pressed, otherwise releasing the
                // key would immediately turn the LED off again.
                if(CAPS_PRESSED == 0) {
                    ergodox_right_led_3_on();
                } else {
                    ergodox_right_led_3_off();
                }

                CAPS_PRESSED = !CAPS_PRESSED;
            }
            break;
        default:
            break;
    }

    return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_2_off();

    switch (layer) {
        case 3:
            ergodox_right_led_2_on();
            break;
        default:
            break;
    }

    return state;
}
