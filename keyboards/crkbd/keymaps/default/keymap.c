/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>

// past from json converter

#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, MO(4), KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, MO(2), KC_LGUI, MO(3), KC_SPC, MO(1)),

[_LAYER1] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),

[_LAYER2] = LAYOUT(KC_TAB, KC_LSFT, KC_RCBR, KC_RBRC, KC_RPRN, KC_RPRN, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_BSPC, KC_LCTL, KC_MINS, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT, KC_EXLM, KC_SCLN, KC_SCLN, KC_QUES, KC_SLSH, KC_ENT, KC_LSFT, KC_EQL, KC_PLUS, KC_QUOT, KC_DQUO, KC_GRV, KC_PERC, KC_BSLS, KC_BSLS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LGUI, KC_TRNS, KC_SPC, KC_NO, KC_NO, KC_NO),

[_LAYER3] = LAYOUT(KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, LCTL(KC_R), SGUI(KC_LBRC), SGUI(KC_RBRC), LGUI(KC_LBRC), LGUI(KC_RBRC), LCTL(KC_PLUS), KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, LGUI(KC_T), KC_BTN1, KC_BTN3, KC_BTN2, LGUI(KC_W), KC_ENT, KC_NO, KC_0, KC_7, KC_8, KC_9, KC_NO, LGUI(KC_H), KC_PGUP, KC_PGDN, LGUI(KC_C), LGUI(KC_V), LCTL(KC_MINS), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER4] = LAYOUT(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_LEFT), KC_UP, LALT(KC_RGHT), KC_NO, KC_TRNS, KC_CAPS, KC_NO, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_NO, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS) 

};

// past from json converter



