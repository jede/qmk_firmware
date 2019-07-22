#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16




enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  CONFETTI,
  SMALLDR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     KC_ESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
SFT_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, CTL_T(KC_ESC),      KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                    GUI_T(KC_SPC), LOWER,   ALT_T(KC_ENT),                    KC_SPC,  RAISE,   ALT_T(KC_ENT)
  ),

/*  [_LOWER] = LAYOUT(
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
     RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
     KC_DEL,  _______, KC_LEFT, KC_RGHT, KC_UP,   KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PLUS, KC_PIPE,
     BL_STEP, _______, _______, _______, KC_DOWN, KC_LCBR, KC_LPRN,          KC_RPRN, KC_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_MINS, _______,
                                    _______, _______, KC_DEL,                    KC_DEL,  _______, KC_P0
  ),

  [_RAISE] = LAYOUT(
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, KC_BSLS,
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, KC_LPRN,          _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
                                    _______, _______, _______,                   _______, _______, _______
  ),*/

  [_LOWER] = LAYOUT(
     _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
     OSM(MOD_HYPR), LGUI(KC_NUBS), LCTL(LGUI(KC_ENT)), _______, KC_LCBR, KC_RCBR,            KC_LBRC, KC_RBRC, _______, _______, _______, _______,
     _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,                            A(KC_LBRC), A(KC_QUOT), A(KC_SCLN), _______, _______, _______,
     _______, KC_TILD, _______, _______, KC_SPC,  KC_BSPC, _______,          _______, KC_BSLS, KC_PIPE, KC_SLSH, _______, LGUI(KC_BSLS), _______,
                                    _______, _______, _______,                   _______, _______, _______
  ),

  [_RAISE] = LAYOUT(
     KC_GRV, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
     _______, KC_ACL0, KC_ACL1, KC_ACL2, KC_BTN2, KC_BTN1,                            _______, _______, _______, _______, _______, _______,
     _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BRMD, KC_BRMU,
     _______, KC_GRV, _______, _______, KC_WH_D, KC_WH_U, _______,          _______, KC_MRWD, KC_MPLY, KC_MFFD, KC__MUTE, KC__VOLDOWN, KC__VOLUP,
                                    _______, _______, _______,                   _______, _______, _______
  ),

  [_ADJUST] = LAYOUT(
     RESET, RGB_TOG, RGB_MOD, _______, _______, _______,                              _______, _______, _______, _______, _______, _______,
     RGB_HUD, RGB_HUI, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
     RGB_SAD, RGB_SAI, SMALLDR, LGUI(KC_NUBS), LCTL(LGUI(KC_ENT)), _______,           G(S(KC_LEFT)), _______, _______, G(S(KC_RGHT)), _______, _______,
     RGB_VAD, RGB_VAI, _______, CONFETTI, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
                                    _______, _______, _______,                   _______, _______, _______
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
    case SMALLDR:
      if (record->event.pressed) {
        SEND_STRING("5590472774");
      }
      break;
    case CONFETTI:
      if (record->event.pressed) {
        SEND_STRING("5569646465");
      }
      break;
  }
  return true;
}
