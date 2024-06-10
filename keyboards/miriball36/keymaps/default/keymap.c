// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // keymap for default
    [0] = LAYOUT(
        KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                   KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     ,
        KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                   KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  ,
        KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                   KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  ,
                    KC_LGUI,LT(1,KC_LNG2),KC_SPC,                                  KC_ENT,LT(2,KC_LNG1), KC_BSPC
    )
};

// void pointing_device_init_kb(void) {
//     uint8_t addr=0x14;
//     //uint8_t data[]={0x90, 0x00};    // AZ1UBALL normal speed mode
//     uint8_t data[]={0x91, 0x00};      // AZ1UBALL accellaration mode
//     uint16_t timeout=100;             // in milli-seconds
//     i2c_status_t status;
//     status  = i2c_transmit (addr, data, 2, timeout);
//     POINTING_DEVICE_ROTATION_270;
//     if (status != 0) {
//         return;
//     }
// }