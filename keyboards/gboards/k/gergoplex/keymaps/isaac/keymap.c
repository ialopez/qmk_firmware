/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 */

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define NUMB 2 // numbers/motion

/* Combomap
 *
 * ,-----------------------------.       ,--------------------------------.
 * |      |    ESC    |     |     |      |     |    ESC    |    BSLH      |
 * |-----+-----+-----+-----+------|      |--------------------------------|
 * |      |   BSPC   TAB    |     |      |    LES   COLN  ENTER  |        | 
 * |-----+-----+-----+--RMB+-LMB--+		 |--------------------------------|
 * |      |   MINS    |     |     |      |    QUO   UNDR   |     |        |
 * `------+-----+-----+------+----'		   `--------------------------------'
 *  .-------------------------.           .-----------------.   
 *  |        |       |        |           |        |    |   |
 *  '-------------------------'           '-----------------' 
 */

// Blank template at the bottom
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-----------------------------.       ,--------------------------------.
 * |   Q  |  W  |  E  |  R  |  T  |      |  Y  |  U  |  I  |  O  |    P   |
 * |-----+-----+-----+-----+------|      |--------------------------------|
 * |   A  |  S  |  D  |  F  |  G  |      |  H  |  J  |  K  |  L  |    ;   | 
 * |-----+-----+-----+-----+------+		 |--------------------------------|
 * |   Z  |  X  |  C  |  V  |  B  |      |  N  |  M  |  <  |  >  |   /    |
 * `------+-----+-----+------+----'		 `--------------------------------'
 *  .-------------------------.           .-----------------.   
 *  |CTRL|SHFT|SPC(NUM)|                    |SPC(SYM)|SHFT|ALT|
 *  '-------------------------'           '-----------------' 
 */

BASE] = LAYOUT_gergoplex(
    KC_Q, KC_W, KC_E, KC_R, KC_T,  	    KC_Y, KC_U, KC_I, KC_O, KC_P, 
    KC_A ,KC_S, KC_D, KC_F, KC_G,  	    KC_H, KC_J, KC_K, KC_L, KC_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B,  	KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,

 		KC_LCTL, KC_LSFT, LT(NUMB, KC_SPC),									// Left
		LT(SYMB, KC_SPC), KC_RSFT, KC_LALT																// Right
    ),

/* Keymap 1: Symbols layer
 * ,-----------------------------.       ,--------------------------------.
 * |  !   |  @  |  #  |  $  |  %  |  `   |  ^  |  &  |  *  |   (   |   )  |
 * |------+-----+-----+-----+-----|      |--------------------------------|
 * |      |     |     |     |  "  |      |  -  |  =  |  \  |  {   |   }   | 
 * |------+-----+-----+-----+-----+		 |--------------------------------|
 * |      |     |     |     |  '  |      |  _  |  +  |  |  |  [  |   ]    |
 * `------+-----+-----+------+----'		 `--------------------------------'
 *  				.-----------------.           .------------------.   
 *  				|MMB |  ;  	|	 = 	|						|  =  |  ;  |  DEL |
 *  				'-----------------'           '------------------' 
 */

[SYMB] = LAYOUT_gergoplex(
    KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_SPC, KC_SPC,  KC_SPC, KC_SPC, KC_DQUO,   KC_MINS, KC_EQL, KC_SLSH, KC_LCBR, KC_RCBR,
    KC_SPC, KC_SPC, KC_SPC, KC_SPC, KC_QUOTE,   KC_UNDS, KC_PLUS,  KC_PIPE, KC_LBRC,  KC_RBRC,
                      CMB_TOG, KC_SCLN, KC_EQL,   KC_EQL,  KC_SCLN, KC_DEL
    ),

/* Keymap 2: Pad/Function layer
 * ,-----------------------------.       ,-------------------------------.
 * |  F1  |  F2 |  UP | F3  | F4  |      | F12 |  7  |  8  |  9  |   0     |
 * |------+-----+-----+-----+-----|      |-------------------------------|
 * |  F5  | LFT | DWN | RGT |  F6 |      |     |  4  |  5  |  6  | VOLUP | 
 * |------+-----+-----+-----+-----+		 |-------------------------------|
 * |  F7  | F8  | F9  | F10  | F11 |     |     |  1  |  2  |  3  | VOLDN |
 * `------+-----+-----+------+----'		   `-------------------------------'
 *  				.-----------------.           .-----------------.   
 *  				| F11 | F12|	  	|         |     | 0 | SKP |
 *  				'-----------------'           '-----------------' 
 */

[NUMB] = LAYOUT_gergoplex(
    KC_F1, KC_F2, KC_UP, KC_F3, KC_F4,              KC_F12, KC_7, KC_8, KC_9, KC_0,
    KC_F5, KC_LEFT, KC_DOWN, KC_RGHT, KC_F6,        KC_SPC, KC_4, KC_5, KC_6, KC_VOLU,
    KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,             KC_SPC, KC_1, KC_2, KC_3, KC_VOLD,
     						  KC_F11,KC_F12,KC_TRNS,  	KC_TRNS,KC_0,KC_MNXT
    )
};
