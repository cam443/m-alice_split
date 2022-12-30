// Copyright 2022 Cam (@cam443)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x0843
#define PRODUCT_ID 0x3590
#define DEVICE_VER 0x0001
#define MANUFACTURER seenrender
#define PRODUCT malice

#define MATRIX_ROWS 12
#define MATRIX_COLS 9
#define MATRIX_ROW_PINS { B3, A8, B15, B14, B13, B12 }
#define MATRIX_COL_PINS { C14, C13, A2, B4, B5, B8, B9, B10, B1}
#define MATRIX_ROW_PINS_RIGHT { B3, A8, B15, B14, B13, B12 }
#define MATRIX_COL_PINS_RIGHT { B0, A7, A6, A5, A4, A3, C15, C14, C13 }

#define SPLIT_HAND_PIN A15
#define SELECT_SOFT_SERIAL_SPEED 1


#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X32
#define OLED_BRIGHTNESS 128
#    define OLED_FONT_H "keyboards/malice_split/keymaps/default/glcdfont.c"
#define OLED_TIMEOUT 15000
#endif

#define DIODE_DIRECTION COL2ROW

#define MATRIX_IO_DELAY 5
#define TAP_CODE_DELAY 10

#define ENCODERS_PAD_A { A0 }
#define ENCODERS_PAD_B { A1 }
#define ENCODER_RESOLUTION 2