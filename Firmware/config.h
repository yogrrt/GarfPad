#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    yogrrt
#define PRODUCT         garfpad
#define DESCRIPTION     garf

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_COL_PINS { B4, B6, B2, B3, B1 }
#define MATRIX_ROW_PINS { B5, F4, F5, F6, F7 }

//#define BACKLIGHT_PIN { B7 }

/*enable midi slider*/
#define POT_ENABLE
#define SLIDER_PIN D4

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

#define ENCODERS_PAD_A { D7 }
#define ENCODERS_PAD_B { E6 }
#define ENCODER_RESOLUTION 4

#define MIDI_ADVANCED

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define OLED_DRIVER_ENABLE

#define LAYER_STATE_8BIT





