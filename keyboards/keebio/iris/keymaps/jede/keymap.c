#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16


enum emoji_map {
  UNAM, // unamused 😒
  HEYE, // smiling face with heart shaped eyes 😍
  OK, // ok hand sign 👌
  SMIR, // smirk 😏
  PRAY, // pray 🙏
  CELE, // celebration 🙌
  COOL, // smile with sunglasses 😎
  EYES, // eyes
  THNK, // BIG THONK
  NAIL, // Nailcare
  SOS, // Vuile sos
  REDB, // Red B
  HNDR, // 100
  MONY,
  FIRE,
  CAR,
  BUTT,
  BNIS,
  CUM,
  CLAP,
  TRIU, // Fart from nose
  SCRM,
  VOMI,
  DTIV, // Detective
  EXPL, // Brainsplosion
  HAIR, // Haircut
  DANC, // Salsa dancer
  STRN, // Stronk
  LEFT, // Point Left
  RGHT, // Point Right
};

const uint32_t PROGMEM unicode_map[] = {
  [UNAM] = 0x1F612,
  [HEYE] = 0x1f60d,
  [OK]   = 0x1F44C,
  [SMIR] = 0x1F60F,
  [PRAY] = 0x1F64F,
  [CELE] = 0x1F64C,
  [COOL] = 0x1F60E,
  [EYES] = 0x1F440,
  [THNK] = 0x1F914,
  [NAIL] = 0x1F485,
  [SOS] = 0x1F198,
  [REDB] = 0x1F171,
  [HNDR] = 0x1F4AF,
  [MONY] = 0x1F480,
  [FIRE] = 0x1F525,
  [CAR] = 0x1F697,
  [BUTT] = 0x1F351,
  [BNIS] = 0x1F346,
  [CUM] = 0x1F4A6,
  [CLAP] = 0x1F44F,
  [TRIU] = 0x1F624,
  [SCRM] = 0x1F631,
  [VOMI] = 0x1F92E,
  [DTIV] = 0x1F575,
  [EXPL] = 0x1F92F,
  [HAIR] = 0x2640,
  [DANC] = 0x1F483,
  [STRN] = 0x1F4AA,
  [LEFT] = 0x1F448,
  [RGHT] = 0x1F449,
};



enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
     KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, CTL_T(KC_ESC),      KC_BSPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                    KC_LGUI, LOWER,   KC_ENT,                    KC_SPC,  RAISE,   KC_LALT
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
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
     _______, _______, _______, KC_LCBR, KC_LBRC, KC_LPRN,                            KC_RPRN, KC_RBRC, KC_RCBR, _______, _______, _______,
     _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,                            A(KC_LBRC), A(KC_QUOT), A(KC_SCLN), _______, _______, _______,
     _______, _______, _______, X(HEYE), X(PRAY), X(CELE), _______,          _______, KC_BSLS, KC_PIPE, KC_SLSH, _______, _______, _______,
                                    _______, _______, _______,                   _______, _______, _______
  ),

  [_RAISE] = LAYOUT(
     KC_GRV, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  RESET,
     _______, KC_ACL0, KC_ACL1, KC_ACL2, KC_BTN2, KC_BTN1,                            _______, _______, _______, _______, _______, _______,
     _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
     _______, KC_BRMD, KC_BRMU, _______, KC_WH_L, KC_WH_R, KC_WH_U,          _______, KC_MRWD, KC_MPLY, KC_MFFD, KC__MUTE, KC__VOLDOWN, KC__VOLUP,
                                    _______, _______, KC_WH_D,                   _______, _______, _______
  ),

  [_ADJUST] = LAYOUT(
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
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
  }
  return true;
}
