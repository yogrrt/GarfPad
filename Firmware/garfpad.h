#pragma once

#include "quantum.h"

#define LAYOUT_ortho(		 \
	K400, 	 				 \
	 	  K301, K302, K303, K304, \
	 	  K201, K202, K203, K204, \
	 	  K101, K102, K103, K104, \
	 	  K001, K002, K003, K004  \
) { 						\
	{ K400,   KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO,  K301,  K302,  K303,  K304 }, \
	{ KC_NO,  K201,  K202,  K203,  K204 }, \
	{ KC_NO,  K101,  K102,  K103,  K104 }, \
	{ KC_NO,  K001,  K002,  K003,  K004 }  \
}
