#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"

enum planck_keycodes {
  RGB_SLD = SAFE_RANGE,
};


enum tap_dance_codes {
  DANCE_0,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _GAMING,
  _LAYER8,
  _LAYER9,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(MT(MOD_LALT, KC_TAB),LT(2,KC_Q),KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,LT(5,KC_ENTER),MT(MOD_LCTL, KC_ESCAPE),KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,MT(MOD_RSFT, KC_SCLN),MT(MOD_LALT, KC_QUOTE),MT(MOD_LSFT, KC_DELETE),KC_LEFT_SHIFT,KC_X,KC_B,KC_C,KC_V,KC_N,KC_M,KC_COMMA,KC_DOT,ALL_T(KC_SLASH),TD(DANCE_0),ALL_T(KC_F2),MEH_T(KC_Z),KC_UNDS,LT(5,KC_MINUS),MT(MOD_LGUI, KC_BSPC),KC_SPACE,KC_SPACE,LT(1,KC_Z),LT(4,KC_MINUS),MEH_T(KC_GRAVE),MT(MOD_RGUI, KC_TAB),ALL_T(KC_F2)),

// Programming and symbols
  [_LOWER] = LAYOUT_planck_grid(KC_GRAVE,KC_AMPR,KC_PIPE,KC_LCBR,KC_RCBR,KC_PERC,KC_TRANSPARENT,KC_AT,KC_HASH,KC_TRANSPARENT,KC_PLUS,KC_MINUS,KC_DELETE,KC_LABK,KC_RABK,KC_LPRN,KC_RPRN,KC_EQUAL,KC_TRANSPARENT,KC_EXLM,KC_ASTR,KC_CIRC,KC_DLR,KC_BSLS,KC_TRANSPARENT,KC_HASH,KC_SLASH,KC_LBRC,KC_RBRC,KC_TRANSPARENT,KC_TRANSPARENT,KC_PERC,KC_AT,KC_DOT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_RIGHT_GUI,KC_TRANSPARENT),

// Numbers
  [_RAISE] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_PLUS,KC_MINUS,KC_COLN,KC_F5,KC_TRANSPARENT,KC_7,KC_8,KC_9,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_ASTR,KC_SLASH,KC_PERC,KC_F8,KC_TRANSPARENT,KC_4,KC_5,KC_6,KC_0,KC_SLASH,KC_TRANSPARENT,KC_TRANSPARENT,KC_COMMA,KC_DOT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_1,KC_2,KC_3,KC_DOT,KC_COLN,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_ADJUST] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,TO(0),TG(8),TO(7),KC_TRANSPARENT,RGB_MOD,RGB_TOG,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT,QK_BOOT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,RGB_VAD,KC_TRANSPARENT,EE_CLR,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

// Mouse
  [_LAYER4] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_LEFT,KC_MS_WH_UP,KC_MS_WH_DOWN,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_BTN1,KC_MS_BTN2,KC_MS_BTN3,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_LEFT,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

// Arrows
  [_LAYER5] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,LALT(KC_LEFT),LALT(KC_RIGHT),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LALT(KC_LEFT),LALT(KC_RIGHT),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LGUI(KC_Z),LALT(KC_BSPC),LGUI(KC_BSPC),KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LGUI(LSFT(KC_Z)),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_PGDN,KC_PAGE_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

// Function keys
  [_LAYER6] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_F1,KC_F2,KC_F3,KC_F9,KC_TRANSPARENT,KC_F23,KC_F12,KC_F13,KC_F16,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_F4,KC_F5,KC_F5,KC_F10,KC_TRANSPARENT,KC_F24,KC_F17,KC_F18,KC_F19,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_F6,KC_F7,KC_F8,KC_F11,KC_TRANSPARENT,KC_TRANSPARENT,KC_F20,KC_F21,KC_F22,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_GAMING] = LAYOUT_planck_grid(KC_LEFT_ALT,KC_Q,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_T,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT_CTRL,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(0),KC_LEFT_SHIFT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,TO(8),KC_TAB,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_BSPC,KC_TRANSPARENT,KC_SPACE,KC_ESCAPE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT_GUI),

// Windows?
  [_LAYER8] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LT(9,KC_ENTER),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,MT(MOD_LGUI, KC_F2),KC_TRANSPARENT,KC_TRANSPARENT,LT(9,KC_MINUS),MT(MOD_LCTL, KC_BSPC),KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER9] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,LCTL(KC_LEFT),LCTL(KC_RIGHT),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LCTL(KC_Z),LCTL(KC_BSPC),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LCTL(LSFT(KC_Z)),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_PGDN,KC_PAGE_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};

const uint16_t PROGMEM combo0[] = { KC_LEFT_CTRL, KC_Q, KC_T, COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LCTL, KC_ESCAPE), LT(2,KC_Q), KC_G, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_LEFT_SHIFT, KC_BSPC, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(0)),
    COMBO(combo1, TO(7)),
    COMBO(combo2, KC_ESCAPE),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

      }
  return true;
}

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

#define MY_BLUE HSV_CYAN

void keyboard_post_init_user(void) {
    // Set initial RGB layer color
    rgblight_sethsv(MY_BLUE);
    // rgblight_sethsv_at(HSV_WHITE, 1);
}

uint16_t layer_state_set_user(uint16_t state) {
       switch (get_highest_layer(state)) {
        // Has to be first, since its a combination of two other layers
        case _ADJUST:
            rgblight_sethsv(HSV_YELLOW);
            break;
        case _RAISE:
            rgblight_sethsv(HSV_TEAL);
            break;
        case _LOWER:
            rgblight_sethsv(HSV_BLUE);
            break;
        case _GAMING:
            rgblight_sethsv(HSV_GREEN);
            break;
        case _LAYER4:
            rgblight_sethsv(HSV_ORANGE);
            break;
        case _LAYER5:
            rgblight_sethsv(HSV_SPRINGGREEN);
            break;
        case _LAYER8:
            rgblight_sethsv(HSV_CORAL);
            break;
        default: // for any other layers, or the default layer
            rgblight_sethsv (MY_BLUE);
            // rgblight_sethsv_at(HSV_WHITE, 1);
            break;
    }

    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


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

static tap dance_state[1];

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
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: layer_move(7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};