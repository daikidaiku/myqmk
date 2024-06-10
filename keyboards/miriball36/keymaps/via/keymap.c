// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // keymap for default
    [0] = LAYOUT(
        KC_Q       , KC_W            , KC_E           , KC_R              , KC_T            ,                                   KC_Y         , KC_U     , KC_I     , KC_O     , KC_P          ,
        CTL_T(KC_A), KC_S            , KC_D           , KC_F              , KC_G            ,                                   KC_H         , KC_J     , KC_K     , KC_L     , LT(3,KC_SCLN) ,
        SFT_T(KC_Z), KC_X            , KC_C           , KC_V              , KC_B            ,                                   KC_N         , KC_M     , KC_COMM  , KC_DOT   , SFT_T(KC_SLSH),
                                                        KC_LGUI           , LT(1,KC_LNG2)   , KC_SPC   ,             KC_ENT   , LT(2,KC_LNG1), KC_RALT
    ),

    [1] = LAYOUT(
        KC_1       , KC_2            , KC_3           , KC_4              , KC_5            ,                                   KC_6         , KC_7     , KC_8     , KC_9     , KC_0          ,
        _______    , XXXXXXX         , GUI_T(KC_UP)   , XXXXXXX           , XXXXXXX         ,                                   S(KC_EQL)    , KC_MINS  , KC_EQL   , _______  , _______       ,
        _______    , GUI_T(KC_LEFT)  , GUI_T(KC_DOWN) , GUI_T(KC_RGHT)    , XXXXXXX         ,                                   S(KC_8)      , KC_SLSH  , S(KC_5)  , _______  , _______       ,
                                                        _______           , _______         , _______  ,             _______  , _______      , _______
    ),

    [2] = LAYOUT(
        KC_ESC     , XXXXXXX         , XXXXXXX         , XXXXXXX          , XXXXXXX         ,                                   KC_LBRC      , KC_RBRC  , _______  , _______  , KC_BSPC       ,
        _______    , XXXXXXX         , S(LGUI(KC_UP))  , XXXXXXX          , S(LALT(KC_UP))  ,                                   S(KC_9)      , S(KC_0)  , _______  , _______  , _______       ,
        _______    , S(LGUI(KC_LEFT)), S(LGUI(KC_DOWN)), S(LGUI(KC_RGHT)) , S(LALT(KC_DOWN)),                                   KC_BSLS      , KC_SLSH  , _______  , _______  , _______       ,
                                                         _______          , _______         , KC_TAB   ,             _______  , _______      , _______
    ),

    [3] = LAYOUT(
        _______    , XXXXXXX         , XXXXXXX         , LGUI(KC_MINS)    , S(LGUI(KC_EQL)) ,                                   XXXXXXX      , XXXXXXX  , KC_UP    , XXXXXXX  , _______       ,
        _______    , XXXXXXX         , KC_KB_MUTE      , KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP ,                                   XXXXXXX      , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______       ,
        _______    , XXXXXXX         , XXXXXXX         , XXXXXXX          , XXXXXXX         ,                                   XXXXXXX      , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX       ,
                                                        _______           , _______         , _______  ,             _______  , _______      , _______
    ),
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