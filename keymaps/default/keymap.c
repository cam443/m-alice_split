 /* Copyright 2020 Imam Rafii 
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

enum layers {
    _BASE,
    _SECONDARY
};

#define FN_LOCK C(G(KC_Q))
#define MO_SEC MO(_SECONDARY)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,          FN_LOCK,  KC_PGUP, 
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_END, 
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,  MO_SEC,           KC_SPC,           KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
        ),
    [_SECONDARY] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,          KC_MUTE,  KC_VOLU, 
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_MFFD,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_P7,   KC_P8,   KC_P9,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_MRWD,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_P4,   KC_P5,   KC_P6,   KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_VOLD, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_DOT,  KC_SLSH, CAPSWRD, KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,  _______,          KC_SPC,           KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
        ),
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {

    return OLED_ROTATION_0;

}

/*static void render_my_logo(void) {
    static const char PROGMEM my_logo[] = {
        0x20, 0x20, 0x20, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x80, 0x81, 0x82, 0x83, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xA0, 0xA1, 0xA2, 0xA3, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xC0, 0xC1, 0xC2, 0xC3, 0x20, 0x20, 0x20, 0x00
    };

    oled_write_P(my_logo, false);
}*/

void render_sr_logo(void) {
    static const char PROGMEM font_sr_logo[5] = {0x80, 0x81, 0x82, 0};
    oled_write_P(font_sr_logo, false);
};
void render_sr_logo2(void) {
    static const char PROGMEM font_sr_logo2[5] = {0xA0, 0xA1, 0xA2, 0};
    oled_write_P(font_sr_logo2, false);
};

void render_knife_logo(void) {
    static const char PROGMEM font_knife_logo[5] = {0xA9, 0xAA, 0xAB, 0};
    oled_write_P(font_knife_logo, false);
};
void render_knife_logo2(void) {
    static const char PROGMEM font_knife_logo2[5] = {0xC9, 0xCA, 0xCB, 0};
    oled_write_P(font_knife_logo2, false);
};

void render_malice(void) {
    static const char PROGMEM font_malice[7] = {0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0};
    oled_write_P(font_malice, false);
};
void render_malice2(void) {
    static const char PROGMEM font_malice2[7] = {0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0};
    oled_write_P(font_malice2, false);
};

void render_mod_ctrl(void) {
    static const char PROGMEM font_ctrl[5] = {0x8F, 0x90, 0};
    oled_write_P(font_ctrl, false);
};
void render_mod_alt(void) {
    static const char PROGMEM font_alt[5] = {0x8D, 0x8E, 0};
    oled_write_P(font_alt, false);
};
void render_mod_shift(void) {
    static const char PROGMEM font_shift[5] = {0x91, 0x92, 0};
    oled_write_P(font_shift, false);
};
void render_mod_gui(void) {
    static const char PROGMEM font_gui[5] = {0x93, 0x94, 0};
    oled_write_P(font_gui, false);
};
void render_caps_on(void) {
    static const char PROGMEM caps_on[5] = {0x89, 0x8A, 0x8B,0x8C, 0};
    oled_write_P(caps_on, false);
};
void render_caps_off(void) {
    oled_write_P(PSTR("caps"), false);
};

void render_mod_statusL(void) {
#ifdef NO_ACTION_ONESHOT
    uint8_t modifiers = get_mods();
#else
    uint8_t modifiers = get_mods() | get_oneshot_mods();
#endif
    oled_write_P(PSTR("   "), false);
    (modifiers & MOD_MASK_CTRL) ? render_mod_ctrl() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_SHIFT) ? render_mod_shift() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
}
void render_mod_statusR(void) {
#ifdef NO_ACTION_ONESHOT
    uint8_t modifiers = get_mods();
#else
    uint8_t modifiers = get_mods() | get_oneshot_mods();
#endif
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_ALT) ? render_mod_alt() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_GUI) ? render_mod_gui() : oled_write_P(PSTR("  "), false);
}

void render_caps(void) {

    if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
        render_caps_on();
    } else {
        render_caps_off();
    }
};


void render_status_main(void) {
    render_mod_statusL();
    render_caps();    
    render_mod_statusR();
}

bool oled_task_user(void) {
render_sr_logo();
        oled_write_P(PSTR("     "), false);
render_malice();
        oled_write_P(PSTR("    "), false);
render_knife_logo();
render_sr_logo2();
        oled_write_P(PSTR("     "), false);
render_malice2();
        oled_write_P(PSTR("    "), false);
render_knife_logo2();
        oled_write_ln("", false);
render_status_main();
  return false;
}

#endif

#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) { return false; }
    if (index == 0) {
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_PGUP);
        } else {
            tap_code(KC_PGDOWN);
        }
    }
    return true;
}
#endif
