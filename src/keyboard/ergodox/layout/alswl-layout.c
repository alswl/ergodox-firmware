/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
#include "../../../main.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel     &kbfun_press_release
#define  kprpst     &kbfun_press_release_preserve_sticky
#define  mprrel     &kbfun_mediakey_press_release
#define  ktog       &kbfun_toggle
#define  ktrans     &kbfun_transparent
#define  lpush1     &kbfun_layer_push_1
#define  lpush2     &kbfun_layer_push_2
#define  lpush3     &kbfun_layer_push_3
#define  lpush4     &kbfun_layer_push_4
#define  lpush5     &kbfun_layer_push_5
#define  lpush6     &kbfun_layer_push_6
#define  lpush7     &kbfun_layer_push_7
#define  lpush8     &kbfun_layer_push_8
#define  lpush9     &kbfun_layer_push_9
#define  lpush10    &kbfun_layer_push_10
#define  lpop       &kbfun_layer_pop_all
#define  lpop1      &kbfun_layer_pop_1
#define  lpop2      &kbfun_layer_pop_2
#define  lpop3      &kbfun_layer_pop_3
#define  lpop4      &kbfun_layer_pop_4
#define  lpop5      &kbfun_layer_pop_5
#define  lpop6      &kbfun_layer_pop_6
#define  lpop7      &kbfun_layer_pop_7
#define  lpop8      &kbfun_layer_pop_8
#define  lpop9      &kbfun_layer_pop_9
#define  lpop10     &kbfun_layer_pop_10
#define  dbtldr     &kbfun_jump_to_bootloader
#define  sshprre    &kbfun_shift_press_release
#define  s2kcap     &kbfun_2_keys_capslock_press_release
#define  slpunum    &kbfun_layer_push_numpad
#define  slponum    &kbfun_layer_pop_numpad
#define  lsticky1   &kbfun_layer_sticky_1
#define  lsticky2   &kbfun_layer_sticky_2
#define  lsticky3   &kbfun_layer_sticky_3
#define  lsticky4   &kbfun_layer_sticky_4
#define  lsticky5   &kbfun_layer_sticky_5
#define  lsticky6   &kbfun_layer_sticky_6
#define  lsticky7   &kbfun_layer_sticky_7
#define  lsticky8   &kbfun_layer_sticky_8
#define  lsticky9   &kbfun_layer_sticky_9
#define  lsticky10  &kbfun_layer_sticky_10
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0 layout, Noral input
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	KEY_GraveAccent_Tilde,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	3,
	KEY_Tab,	KEY_q_Q,	KEY_w_W,	KEY_e_E,	KEY_r_R,	KEY_t_T,	KEY_LeftBracket_LeftBrace,	
	KEY_LeftControl,	KEY_a_A,	KEY_s_S,	KEY_d_D,	KEY_f_F,	KEY_g_G,	
	KEY_LeftShift,	KEY_z_Z,	KEY_x_X,	KEY_c_C,	KEY_v_V,	KEY_b_B,	KEY_RightBracket_RightBrace,	
	2,	1,	0,	KEY_LeftAlt,	KEY_LeftGUI,	
	KEY_LeftArrow,	KEY_RightArrow,	
	0,	0,	4,	
	KEY_Spacebar,	KEY_Escape,	KEY_DeleteForward,	
	// right hand
	2,	KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_Dash_Underscore,	
	KEY_CapsLock,	KEY_y_Y,	KEY_u_U,	KEY_i_I,	KEY_o_O,	KEY_p_P,	KEY_Backslash_Pipe,	
	KEY_h_H,	KEY_j_J,	KEY_k_K,	KEY_l_L,	KEY_Semicolon_Colon,	KEY_SingleQuote_DoubleQuote,	
	KEY_Equal_Plus,	KEY_n_N,	KEY_m_M,	KEY_Comma_LessThan,	KEY_Period_GreaterThan,	KEY_Slash_Question,	KEY_RightShift,	
	KEY_RightGUI,	KEY_RightAlt,	KEY_DownArrow,	KEY_UpArrow,	4,	
	KEY_LeftArrow,	KEY_RightArrow,	
	KEY_UpArrow,	0,	0,	
	KEY_DownArrow,	KEY_DeleteBackspace,		KEY_ReturnEnter
),
// LAYER 1 layout, Fn key
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	KEY_GraveAccent_Tilde,	KEY_F1,	KEY_F2,	KEY_F3,	KEY_F4,	KEY_F5,	3,
	KEY_Tab,	0,	0,	0,	0,	0,	KEY_LeftBracket_LeftBrace,	
	KEY_LeftControl,	0,	0,	0,	0,	KEY_g_G,	
	KEY_LeftShift,	0,	0,	0,	0,	0,	KEY_RightBracket_RightBrace,	
	2,	1,	0,	KEY_LeftAlt,	KEY_LeftGUI,	
	KEY_LeftArrow,	KEY_RightArrow,	
	0,	0,	0,	
	KEY_Spacebar,	KEY_Escape,	KEY_DeleteForward,	
	// right hand
	1,	KEY_F6,	KEY_F7,	KEY_F8,	KEY_F9,	KEY_F10,	KEY_F11,	
	KEY_CapsLock,	0,	KEY_F7,	KEY_F8,	KEY_F9,	KEY_F10,	KEY_F12,	
	0,	KEY_F4,	KEY_F5,	KEY_F6,	0,	0,	
	KEY_Equal_Plus,	0,	KEY_F1,	KEY_F2,	KEY_F3,	0,	0,	
	KEY_RightGUI,	KEY_RightAlt,	KEY_DownArrow,	KEY_UpArrow,	KEY_RightControl,	
	KEY_LeftArrow,	KEY_RightArrow,	
	KEY_UpArrow,	0,	0,	
	KEY_DownArrow,	KEY_DeleteBackspace,		KEY_ReturnEnter
),
// LAYER 2 layout, Number Pad
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	KEY_LeftControl,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	KEY_LeftControl,	0,	0,	0,	0,	0,	
	KEY_LeftShift,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	KEY_Spacebar,	KEY_Escape,	KEY_DeleteForward,	
	// right hand
	2,	0,	KEYPAD_NumLock_Clear,	KEYPAD_Slash,	KEYPAD_Asterisk,	KEYPAD_Minus,	0,	
	0,	0,	KEYPAD_7_Home,	KEYPAD_8_UpArrow,	KEYPAD_9_PageUp,	KEYPAD_Plus,	0,	
	0,	KEYPAD_4_LeftArrow,	KEYPAD_5,	KEYPAD_6_RightArrow,	KEYPAD_Plus,	KEY_Semicolon_Colon,	
	0,	0,	KEYPAD_1_End,	KEYPAD_2_DownArrow,	KEYPAD_3_PageDown,	KEY_ReturnEnter,	KEY_RightShift,	
	KEYPAD_0_Insert,	KEYPAD_0_Insert,	KEYPAD_Period_Delete,	KEY_ReturnEnter,	0,	
	KEY_LeftArrow,	KEY_RightArrow,	
	KEY_UpArrow,	0,	0,	
	KEY_DownArrow,	KEY_DeleteBackspace,		KEY_ReturnEnter
),
// LAYER 3 layout, Media
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	MEDIAKEY_PREV_TRACK,	MEDIAKEY_AUDIO_VOL_DOWN,	MEDIAKEY_AUDIO_VOL_UP,	MEDIAKEY_NEXT_TRACK,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	MEDIAKEY_AUDIO_MUTE,	MEDIAKEY_PLAY_PAUSE	
),
// LAYER 4 layout, Navigation Mode
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	KEY_UpArrow,	0,	0,	0,	
	0,	0,	KEY_LeftArrow,	KEY_DownArrow,	KEY_RightArrow,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 5 layout
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 6 layout
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 7 layout
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 8 layout
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
// LAYER 9 layout
KB_MATRIX_LAYER(
	// unused
	0,	
	// left hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0,	
	// right hand
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	0,	0,	
	0,	0,	0,	0,	0,	
	0,	0,	
	0,	0,	0,	
	0,	0,	0	
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush3,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpush2,	lsticky1,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	lpush4,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	lpush2,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	lpush4,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 1 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpush3,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	lpush2,	lpop1,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	lpop1,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans	
),
// LAYER 2 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	lpop2,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 3 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	mprrel,	mprrel,	mprrel,	mprrel,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	mprrel,	mprrel	
),
// LAYER 4 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	kprrel,	NULL,	NULL,	NULL,	
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 5 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 6 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 7 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 8 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 9 press
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop3,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	lpop2,	lsticky1,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	
	NULL,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	lpop4,	
	kprrel,	kprrel,	
	kprrel,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 1 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	lpop3,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	lpop2,	NULL,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans,	
	// right hand
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	ktrans,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	ktrans,	ktrans,	kprrel,	kprrel,	kprrel,	ktrans,	ktrans,	
	ktrans,	ktrans,	ktrans,	ktrans,	ktrans,	
	ktrans,	ktrans,	
	NULL,	NULL,	NULL,	
	ktrans,	ktrans,	ktrans	
),
// LAYER 2 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	
	kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel,	
	// right hand
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	
	kprrel,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	kprrel,	kprrel,	kprrel	
),
// LAYER 3 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	mprrel,	mprrel,	mprrel,	mprrel,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	mprrel,	mprrel	
),
// LAYER 4 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	kprrel,	NULL,	NULL,	NULL,	
	NULL,	NULL,	kprrel,	kprrel,	kprrel,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	lpop4,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 5 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 6 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 7 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 8 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
// LAYER 9 release
KB_MATRIX_LAYER(
	// unused
	NULL,	
	// left hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	// right hand
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL,	NULL,	NULL,	
	NULL,	NULL,	
	NULL,	NULL,	NULL,	
	NULL,	NULL,	NULL	
),
};
// ----------------------------------------------------------------------------
