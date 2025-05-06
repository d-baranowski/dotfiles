#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_10,
  DANCE_11,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_27,
  DANCE_28,
  DANCE_30,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_26,
  DANCE_29,
  DANCE_31,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),                                    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    KC_0,           TD(DANCE_9),    
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           TD(DANCE_10),   TD(DANCE_11),   KC_O,           KC_P,           TD(DANCE_12),   
    MO(4),          KC_A,           MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),KC_F,           KC_G,                                           KC_H,           KC_J,           MT(MOD_RCTL, KC_K),MT(MOD_LALT, KC_L),KC_SCLN,        MO(6),          
    TG(5),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           TD(DANCE_13),   KC_DOT,         TD(DANCE_14),   TG(3),          
                                                    MT(MOD_LSFT, KC_SPACE),MO(1),                                          MT(MOD_RSFT, KC_ENTER),KC_BSPC
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_TRANSPARENT, KC_ASTR,        TD(DANCE_18),   TD(DANCE_19),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AMPR,        KC_PIPE,        TD(DANCE_15),   KC_COLN,                                        KC_EQUAL,       TD(DANCE_20),   TD(DANCE_21),   KC_TRANSPARENT, KC_PLUS,        KC_TRANSPARENT, 
    KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      TD(DANCE_16),                                   TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),   TD(DANCE_25),   KC_TRANSPARENT, KC_PSCR,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_C),     LCTL(KC_V),     TD(DANCE_17),                                   LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   TD(DANCE_26),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_DELETE,      
    KC_TRANSPARENT, DM_REC1,        DM_REC2,        DM_RSTP,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DM_PLY1,        DM_PLY2,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     LGUI(KC_S),     RGB_MODE_FORWARD,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN2
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_EQUAL,       KC_KP_DOT,      KC_DELETE,      KC_TRANSPARENT, KC_KP_MINUS,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_PLUS,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_ASTR,                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_COMMA,    KC_1,           KC_2,           KC_3,           KC_0,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_BSPC,        KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    TO(0),          KC_BSPC,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      LCTL(KC_LEFT),  TD(DANCE_27),   TD(DANCE_28),   LCTL(KC_RIGHT),                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_S),     KC_TRANSPARENT, TD(DANCE_29),   TD(DANCE_30),                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_31),   LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     TD(DANCE_32),                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,                                         KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F21,         KC_F22,         LSFT(KC_F12),   KC_F24,         LSFT(KC_F1),                                    LSFT(KC_F13),   LSFT(KC_F16),   LSFT(KC_F17),   LSFT(KC_F18),   KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LSFT(KC_F2),    LSFT(KC_F3),    LSFT(KC_F4),    LSFT(KC_F5),    LSFT(KC_F6),                                    LSFT(KC_F7),    LSFT(KC_F8),    LSFT(KC_F9),    LSFT(KC_F10),   LSFT(KC_F11),   KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_E),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_O),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_A),     TD(DANCE_33),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_34),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_Z),     RALT(KC_X),     RALT(KC_C),     KC_TRANSPARENT, KC_TRANSPARENT,                                 RALT(KC_N),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_I,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_Q, KC_R, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_R, KC_W, COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LALT, KC_L), KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_QUOTE),
    COMBO(combo1, KC_DQUO),
    COMBO(combo2, KC_QUES),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_10):
            return g_tapping_term + 355;
        case TD(DANCE_11):
            return g_tapping_term + 355;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255} },

    [1] = { {0,0,0}, {0,255,255}, {0,0,0}, {16,204,170}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {0,255,255}, {140,255,241}, {213,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {138,208,131}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {140,255,241}, {186,218,204}, {186,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {0,0,0}, {213,218,204}, {41,255,255}, {41,255,255}, {106,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {172,255,255}, {86,255,255}, {0,0,0}, {186,218,204}, {186,218,204}, {186,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {172,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,157}, {0,0,157}, {0,0,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {39,218,204}, {39,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204} },

    [4] = { {0,0,0}, {199,218,204}, {43,218,204}, {172,255,255}, {0,255,255}, {199,218,204}, {0,0,0}, {0,0,0}, {57,218,204}, {57,218,204}, {57,218,204}, {199,218,204}, {0,0,0}, {199,218,204}, {57,218,204}, {57,218,204}, {57,218,204}, {199,218,204}, {0,0,0}, {199,218,204}, {57,218,204}, {57,218,204}, {57,218,204}, {56,218,204}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,255,255}, {186,218,204}, {186,218,204}, {186,218,204}, {0,255,255}, {0,0,0}, {172,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {186,218,204}, {0,255,255}, {172,255,255}, {0,255,255}, {138,208,131}, {32,255,136}, {186,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {86,255,255}, {215,255,255}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {215,255,255}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {215,255,255}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {0,0,0}, {0,0,0}, {0,255,255}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {0,0,0}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {0,0,0}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {172,255,255}, {0,0,0}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {105,218,204}, {215,218,204}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {216,232,134}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {216,232,134}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {216,232,134}, {216,232,134} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_4)SS_DELAY(100)  SS_TAP(X_5)SS_DELAY(100)  SS_TAP(X_4)SS_DELAY(100)  SS_TAP(X_3)SS_DELAY(100)  SS_TAP(X_9)SS_DELAY(100)  SS_TAP(X_8)SS_DELAY(100)  SS_TAP(X_3)SS_DELAY(100)  SS_TAP(X_1));
    }
    break;

    case TD(DANCE_10):
    case TD(DANCE_11):
    case TD(DANCE_20):
    case TD(DANCE_21):
    case TD(DANCE_22):
    case TD(DANCE_23):
    case TD(DANCE_24):
    case TD(DANCE_25):
    case TD(DANCE_27):
    case TD(DANCE_28):
    case TD(DANCE_30):
    case TD(DANCE_32):
    case TD(DANCE_33):
    case TD(DANCE_34):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[21];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: layer_move(1); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: layer_move(2); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: layer_move(3); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: layer_move(4); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: layer_move(5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: layer_move(6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: layer_move(7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: layer_move(8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case DOUBLE_TAP: register_code16(KC_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_TAP: unregister_code16(KC_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[8].step = 0;
}
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
    }
    dance_state[9].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case DOUBLE_TAP: register_code16(KC_BSLS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case DOUBLE_TAP: unregister_code16(KC_BSLS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[10].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[11].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_TILD);
        tap_code16(KC_TILD);
        tap_code16(KC_TILD);
    }
    if(state->count > 3) {
        tap_code16(KC_TILD);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_TILD); register_code16(KC_TILD);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_TILD); break;
    }
    dance_state[12].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[13].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[14].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRC);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_LBRC); break;
        case DOUBLE_TAP: register_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRC); register_code16(KC_LBRC);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRC); break;
    }
    dance_state[15].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[16].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case DOUBLE_TAP: register_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_TAP: unregister_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[17].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LABK);
        tap_code16(KC_LABK);
        tap_code16(KC_LABK);
    }
    if(state->count > 3) {
        tap_code16(KC_LABK);
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_LABK); break;
        case DOUBLE_TAP: register_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LABK); register_code16(KC_LABK);
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_LABK); break;
        case DOUBLE_TAP: unregister_code16(KC_RABK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LABK); break;
    }
    dance_state[18].step = 0;
}
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case DOUBLE_TAP: register_code16(LCTL(KC_F)); break;
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[19].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Z));
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z));
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
    }
    dance_state[20].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_10] = ACTION_TAP_DANCE_TAP_HOLD(KC_U, KC_CIRC),
        [DANCE_11] = ACTION_TAP_DANCE_TAP_HOLD(KC_I, KC_DLR),
        [DANCE_20] = ACTION_TAP_DANCE_TAP_HOLD(KC_HOME, KC_MS_WH_DOWN),
        [DANCE_21] = ACTION_TAP_DANCE_TAP_HOLD(KC_END, KC_MS_WH_UP),
        [DANCE_22] = ACTION_TAP_DANCE_TAP_HOLD(KC_LEFT, LSFT(KC_HOME)),
        [DANCE_23] = ACTION_TAP_DANCE_TAP_HOLD(KC_DOWN, LSFT(KC_DOWN)),
        [DANCE_24] = ACTION_TAP_DANCE_TAP_HOLD(KC_UP, LSFT(KC_UP)),
        [DANCE_25] = ACTION_TAP_DANCE_TAP_HOLD(KC_RIGHT, LSFT(KC_END)),
        [DANCE_27] = ACTION_TAP_DANCE_TAP_HOLD(LCTL(LSFT(KC_LEFT)), LSFT(KC_HOME)),
        [DANCE_28] = ACTION_TAP_DANCE_TAP_HOLD(LCTL(LSFT(KC_RIGHT)), LSFT(KC_END)),
        [DANCE_30] = ACTION_TAP_DANCE_TAP_HOLD(KC_HOME, KC_MS_WH_UP),
        [DANCE_32] = ACTION_TAP_DANCE_TAP_HOLD(KC_END, KC_MS_WH_DOWN),
        [DANCE_33] = ACTION_TAP_DANCE_TAP_HOLD(RALT(KC_S), KC_LEFT_ALT),
        [DANCE_34] = ACTION_TAP_DANCE_TAP_HOLD(RALT(KC_L), KC_LEFT_ALT),
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_9_finished, dance_9_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_29_finished, dance_29_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
};
