/* Copyright 2020 Hybrid
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Layer shorthand
#define _QW 0
#define _FN 1

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

enum {
  TD_A = 0,
  TD_E,
  TD_I,
  TD_O,
  TD_U,
  TD_SLASH,
  TD_UNDER,
  TD_OP_ACCOL,
  TD_CL_ACCOL,
  TD_QUESTION,
};



void dance_a_accent (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P1);
    unregister_code (KC_P1);
    register_code (KC_P3);
    unregister_code (KC_P3);
    register_code (KC_P3);
    unregister_code (KC_P3);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_Q);
    unregister_code (KC_Q);
  }
}
void dance_e_accent (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P3);
    unregister_code (KC_P3);
    register_code (KC_P3);
    unregister_code (KC_P3);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else if (state->count == 3) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P3);
    unregister_code (KC_P3);
    register_code (KC_P2);
    unregister_code (KC_P2);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_E);
    unregister_code (KC_E);
  }
}
void dance_i_accent (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P3);
    unregister_code (KC_P3);
    register_code (KC_P8);
    unregister_code (KC_P8);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_I);
    unregister_code (KC_I);
  }
}
void dance_o_accent (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P4);
    unregister_code (KC_P4);
    register_code (KC_P4);
    unregister_code (KC_P4);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_O);
    unregister_code (KC_O);
  }
}
void dance_u_accent (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P4);
    unregister_code (KC_P4);
    register_code (KC_P9);
    unregister_code (KC_P9);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_U);
    unregister_code (KC_U);
  }

}
void dance_slash (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P9);
    unregister_code (KC_P9);
    register_code (KC_P2);
    unregister_code (KC_P2);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_PSLS);
    unregister_code (KC_PSLS);
  }
}
void dance_under (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P9);
    unregister_code (KC_P9);
    register_code (KC_P5);
    unregister_code (KC_P5);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_6);
    unregister_code (KC_6);
  }
}
void dance_open_accol (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P1);
    unregister_code (KC_P1);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P3);
    unregister_code (KC_P3);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else if (state->count == 3) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P9);
    unregister_code (KC_P9);
    register_code (KC_P1);
    unregister_code (KC_P1);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_5);
    unregister_code (KC_5);
  }
}
void dance_close_accol (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P1);
    unregister_code (KC_P1);
    register_code (KC_P2);
    unregister_code (KC_P2);
    register_code (KC_P5);
    unregister_code (KC_P5);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else if (state->count == 3) {
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
    register_code (KC_LALT);
    register_code (KC_P0);
    unregister_code (KC_P0);
    register_code (KC_P9);
    unregister_code (KC_P9);
    register_code (KC_P3);
    unregister_code (KC_P3);
    unregister_code (KC_LALT);
    register_code (KC_NLCK);
    unregister_code (KC_NLCK);
  }
  else {
    register_code (KC_MINS);
    unregister_code (KC_MINS);
  }
}
void dance_question (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    register_code (KC_A);
    unregister_code (KC_A);
  }
  else {
    register_code (KC_Z);
    unregister_code (KC_Z);
  }
}
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_A] = ACTION_TAP_DANCE_FN(dance_a_accent),
  [TD_E] = ACTION_TAP_DANCE_FN(dance_e_accent),
  [TD_I] = ACTION_TAP_DANCE_FN(dance_i_accent),
  [TD_O] = ACTION_TAP_DANCE_FN(dance_o_accent),
  [TD_U] = ACTION_TAP_DANCE_FN(dance_u_accent),
  [TD_SLASH] = ACTION_TAP_DANCE_FN(dance_slash),
  [TD_UNDER] = ACTION_TAP_DANCE_FN(dance_under),
  [TD_OP_ACCOL] = ACTION_TAP_DANCE_FN(dance_open_accol),
  [TD_CL_ACCOL] = ACTION_TAP_DANCE_FN(dance_close_accol),
  [TD_QUESTION] = ACTION_TAP_DANCE_FN(dance_question),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | CAP LK | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN     | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | FN     | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  [0] = LAYOUT_ortho_5x15(
    KC_ESC, KC_RBRC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_ENT, KC_6, KC_7, KC_8, KC_9, KC_0, TG(1), KC_NO,
    KC_TAB, TD(TD_A), KC_W, TD(TD_E), KC_R, KC_T, KC_Y, KC_ENT, TD(TD_U), TD(TD_I), TD(TD_O), KC_P, KC_NO, KC_NO, KC_NO,
    KC_PGUP, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_ENT, KC_J, KC_K, KC_L, KC_SCLN, KC_UP, KC_NO, KC_NO,
    KC_PGDN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, TD(TD_QUESTION), KC_QUES, TD(TD_UNDER), TD(TD_SLASH), KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
    TD(TD_OP_ACCOL), TD(TD_CL_ACCOL), KC_LALT, KC_LCTL, KC_LSFT, KC_SPC, KC_HOME, KC_LGUI, KC_END, KC_BSPC, KC_RALT, KC_DEL, KC_PMNS, KC_NO, MO(1)
    ),
  [1] = LAYOUT_ortho_5x15(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, TG(2), TG(0), 
    DEBUG, KC_PSCR, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
    RESET, KC_NO, KC_S, KC_D, KC_F, KC_G, KC_Z, KC_J, KC_K, KC_L, KC_M, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_LSFT, 
    KC_NO, KC_X, KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_SCLN, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_LCBR, 
    KC_RCBR, KC_LALT, KC_NO, KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_NO, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_TRNS
    ),
  [2] = LAYOUT_ortho_5x15(
    KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, BL_ON, BL_OFF, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO, TG(1), 
    KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, BL_TOGG, BL_STEP, KC_NO, KC_NO, KC_NO, KC_NO, RGB_HUD, RGB_HUI, RGB_M_P, RGB_M_B, 
    KC_MPLY, KC_MSTP, KC_MUTE, KC_NO, KC_NO, BL_DEC, BL_INC, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAD, RGB_SAI, RGB_M_R, RGB_M_SW, 
    KC_MRWD, KC_MFFD, KC_NO, KC_NO, KC_NO, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_VAI, RGB_M_SN, RGB_M_K, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPD, RGB_SPI, RGB_M_X, RGB_M_G
    )
	
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
