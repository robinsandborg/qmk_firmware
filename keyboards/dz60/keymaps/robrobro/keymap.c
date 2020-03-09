#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FN 1
#define _QMKSETTINGS 2
#define _GAMING 3
#define _FNGAMING 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE LAYER
     *
     * ,-----------------------------------------------------------------------------------------.
     * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \| | ~ ` |
     * |-----------------------------------------------------------------------------------------+
     * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
     * |-----------------------------------------------------------------------------------------+
     * | CTRL    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
     * |-----------------------------------------------------------------------------------------+
     * | Shift | HYPR | Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  RShift  | FN |
     * |-----------------------------------------------------------------------------------------+
     * |              Win  |      Alt  |            Space       |   Alt     |    LIGHTS          |
     * `-----------------------------------------------------------------------------------------'
     */

    [_DEFAULT] = LAYOUT_60_hhkb_split_lshift(
			KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_BSLS,    KC_GRV,
			KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,       KC_LBRC,   KC_RBRC,    KC_BSPC,
			KC_LCTL,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,   KC_ENT,
			KC_LSFT, KC_HYPR,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,               KC_RSFT,   MO(_FN),
			            KC_LALT,             KC_LGUI,                      KC_SPC,                    KC_RGUI,                     KC_RALT),

    [_FN] = LAYOUT_60_hhkb_split_lshift(
		  KC_PWR,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,    KC_INS,     TG(_QMKSETTINGS),
			KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,      KC_TRNS,   KC_DEL,
			KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, TG(_GAMING), KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,               KC_ENT,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN,             KC_TRNS,   KC_TRNS,
							    KC_TRNS,             KC_TRNS,                      KC_MPLY,                   KC_MRWD,                     KC_MNXT),

    [_QMKSETTINGS] = LAYOUT_60_hhkb_split_lshift(
			TO(_DEFAULT),  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, MAGIC_SWAP_ALT_GUI, MAGIC_UNHOST_NKRO, MAGIC_HOST_NKRO,
			KC_NO,   KC_NO,   KC_NO,   EEP_RST, RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   BL_INC,  BL_ON,   RGB_TOG,    KC_NO,     KC_NO,
			KC_NO,   KC_NO, KC_NO,   KC_NO,   DEBUG,   KC_NO,   RGB_SPI, RGB_SPD, KC_NO,   BL_DEC,  BL_OFF, BL_TOGG, BL_STEP, KC_NO, KC_NO, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_NO, BL_BRTG, RGB_MOD, RGB_RMOD, KC_NO, KC_NO,
			            KC_NO,               KC_NO,                        KC_NO,                     KC_NO,                      KC_NO),

    [_GAMING] = LAYOUT_60_hhkb_split_lshift(
			KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,    KC_BSLS,    KC_GRV,
			KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,       KC_LBRC,   KC_RBRC,    KC_BSPC,
			KC_LCTL,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,   KC_ENT,
			KC_LSFT, KC_HYPR,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,               KC_RSFT,   MO(_FNGAMING),
			            KC_LCTL,             KC_LALT,                      KC_SPC,                    KC_RALT,                     KC_RGUI),

    [_FNGAMING] = LAYOUT_60_hhkb_split_lshift(
		  TO(_DEFAULT),  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,    KC_INS,     TG(_QMKSETTINGS),
			KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,      KC_TRNS,   KC_DEL,
			KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, TG(_GAMING), KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,               KC_ENT,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN,             KC_TRNS,   KC_TRNS,
							    KC_TRNS,             KC_TRNS,                      KC_MPLY,                   KC_MRWD,                     KC_MNXT)};