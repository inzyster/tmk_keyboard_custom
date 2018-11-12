// Generated by TKG at 2018-08-23 06:17:46

#include "keymap_common.h"
#include "rgb_led.h"

#define KEYMAP_TKG( \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, K0O, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L, K2M,      K2O, \
    K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M, K3N, K3O, \
    K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, K4I, K4J, K4K, K4L, K4M, K4N, K4O, \
    K5A, K5B, K5C,           K5F, K5G,      K5I,      K5K, K5L, K5M, K5N, K5O  \
) { \
    KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N, KC_##K0O, \
    KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O, \
    KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_TRNS,  KC_##K2O, \
    KC_##K3A, KC_##K3B, KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_##K3N, KC_##K3O, \
    KC_##K4A, KC_##K4B, KC_##K4C, KC_##K4D, KC_##K4E, KC_##K4F, KC_##K4G, KC_##K4H, KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_##K4O, \
    KC_##K5A, KC_##K5B, KC_##K5C, KC_TRNS,  KC_TRNS,  KC_##K5F, KC_##K5G, KC_TRNS,  KC_##K5I, KC_TRNS,  KC_##K5K, KC_##K5L, KC_##K5M, KC_##K5N, KC_##K5O  \
}

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[KEYMAPS_COUNT][MATRIX_SIZE] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_SIZE] PROGMEM = {
#endif
    [0] = KEYMAP_TKG(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, PSCR,DEL,  \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,HOME, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     PGUP, \
        FN6, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,BSLS,ENT, PGDN, \
        LSFT,FN5, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,  END,  \
        LCTL,LGUI,LALT,          SPC, INS,      RCTL,     RALT,FN0, LEFT,DOWN,RGHT),
    [1] = KEYMAP_TKG(
        FN28,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,DEL,  \
        TRNS,TRNS,FN8, TRNS,FN10,TRNS,FN12,FN13,FN14,FN15,FN16,FN17,FN18,BSPC,HOME, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN19,FN20,     PGUP, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN21,FN22,FN23,TRNS,PGDN, \
        TRNS,FN27,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN24,FN25,FN26,TRNS,UP,  END,  \
        TRNS,TRNS,TRNS,          TRNS,INS,      TRNS,     TRNS,TRNS,LEFT,DOWN,RGHT),
    [2] = KEYMAP_TKG(
        ESC, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPLY,MPRV, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DEL, MUTE, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     VOLU, \
        CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD, \
        TRNS,FN5, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,MNXT,     TRNS,     TRNS,TRNS,HOME,PGDN,END),
};

/*
    Fn
    0   layer 2
    1   Save
    2   
    3   
    4   
    5   toggle layer 1
    6   
    7   1 !
    8   2 @
    9   3 #
    10  4 $
    11  5 %
    12  6 ^
    13  7 &
    14  8 *
    15  9 (
    16  0 )
    17  - _
    18  = +
    19  [ {
    20  ] }
    21  ; :
    22  ' "
    23  \ |
    24  , <
    25  . >
    26  / ?
    27  ISO 2
    28  ` ~
    29  A (Å)
    30  E (Æ)
    31  O (Ø)
*/

enum macro_id {
    MA_SAVE = 0,
    MA_1 = 1,
    MA_2 = 2,
    MA_3 = 3,
    MA_4 = 4,
    MA_5 = 5,
    MA_6 = 6,
    MA_7 = 7,
    MA_8 = 8,
    MA_9 = 9,
    MA_0 = 10,
    MA_MINS = 11,
    MA_EQL = 12,
    MA_LBRC = 13,
    MA_RBRC = 14,
    MA_SCLN = 15,
    MA_QUOT = 16,
    MA_BSLS = 17,
    MA_COMM = 18,
    MA_DOT = 19,
    MA_SLSH = 20,
    MA_NUBS = 21,
    MA_GRV = 22,
    MA_A = 23,
    MA_E = 24,
    MA_O = 25,
};

#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(2),
    [1] = ACTION_FUNCTION(1),
    [2] = ACTION_FUNCTION(1),
    [3] = ACTION_FUNCTION(1),
    [4] = ACTION_FUNCTION(1),
    [5] = ACTION_LAYER_TOGGLE(1),
    [6] = ACTION_MACRO(MA_SAVE),
    [7] = ACTION_MACRO(MA_1),
    [8] = ACTION_MACRO(MA_2),
    [9] = ACTION_MACRO(MA_3),
    [10] = ACTION_MACRO(MA_4),
    [11] = ACTION_MACRO(MA_5),
    [12] = ACTION_MACRO(MA_6),
    [13] = ACTION_MACRO(MA_7),
    [14] = ACTION_MACRO(MA_8),
    [15] = ACTION_MACRO(MA_9),
    [16] = ACTION_MACRO(MA_0),
    [17] = ACTION_MACRO(MA_MINS),
    [18] = ACTION_MACRO(MA_EQL),
    [19] = ACTION_MACRO(MA_LBRC),
    [20] = ACTION_MACRO(MA_RBRC),
    [21] = ACTION_MACRO(MA_SCLN),
    [22] = ACTION_MACRO(MA_QUOT),
    [23] = ACTION_MACRO(MA_BSLS),
    [24] = ACTION_MACRO(MA_COMM),
    [25] = ACTION_MACRO(MA_DOT),
    [26] = ACTION_MACRO(MA_SLSH),
    [27] = ACTION_MACRO(MA_NUBS),
    [28] = ACTION_MACRO(MA_GRV),
    [29] = ACTION_MACRO(MA_A),
    [30] = ACTION_MACRO(MA_E),
    [31] = ACTION_MACRO(MA_O),
};

/*
enum function_id {
    AF_SAVE = 0,
    AF_TOGGLE_LAYER_2 = 1,
};
*/
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    if (event.pressed) 
    {
        switch (id)
        {
            case 1:
            {
                break;
            }
            default: break;
        }
    }
}

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;
    uint8_t mods = get_mods();
    bool shift = (mods & (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))) > 0;
    //bool ctrl = (mods & (MOD_BIT(KC_LCTRL) | MOD_BIT(KC_RCTRL))) > 0;
    //bool alt = (mods & (MOD_BIT(KC_RALT))) > 0;
    switch (id) {
        case MA_SAVE: {
            return (event.pressed ? 
                    MACRO( D(LCTL), T(S), U(LCTL), END ) :
                    MACRO_NONE );
        }
        case MA_2: {
            if (shift) {
                return (event.pressed ? 
                    MACRO( SM(), CM(), D(RALT), T(2), U(RALT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(2), END ) :
                    MACRO( U(2), END ));
            }
        }
        case MA_4: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(RALT), T(4), U(RALT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(4), END ) :
                    MACRO( U(4), END ));
            }
        }
        case MA_6: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(RBRACKET), U(LSHIFT), T(SPACE), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(6), END ) :
                    MACRO( U(6), END ));
            }
        }
        case MA_7: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(6), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(7), END ) :
                    MACRO( U(7), END ));
            }
        }
        case MA_8: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(BSLASH), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(8), END ) :
                    MACRO( U(8), END ));
            }
        }
        case MA_9: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(8), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(9), END ) :
                    MACRO( U(9), END ));
            }
        }
        case MA_0: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(9), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(0), END ) :
                    MACRO( U(0), END ));
            }
        }
        case MA_MINS: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(SLASH), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), T(SLASH), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_EQL: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), T(MINUS), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(0), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_LBRC: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(RALT), T(7), U(RALT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(RALT), T(8), U(RALT), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_RBRC: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(RALT), T(0), U(RALT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(RALT), T(9), U(RALT), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_SCLN: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(DOT), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(COMMA), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_QUOT: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(2), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), T(BSLASH), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_BSLS: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), T(GRAVE), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), T(EQUAL), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_COMM: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), T(NONUS_BSLASH), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(COMMA), END ) :
                    MACRO( U(COMMA), END ));
            }
        }
        case MA_DOT: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(NONUS_BSLASH), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( D(DOT), END ) :
                    MACRO( U(DOT), END ));
            }
        }
        case MA_SLSH: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(MINUS), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(7), U(LSHIFT), RM(), END ) :
                    MACRO_NONE );
            }
        }
        case MA_GRV: {
            if (shift) {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(RALT), T(RBRACKET), U(RALT), T(SPACE), RM(), END ) :
                    MACRO_NONE );
            } else {
                return (event.pressed ?
                    MACRO( SM(), CM(), D(LSHIFT), T(EQUAL), D(LSHIFT), T(SPACE), RM(), END ) :
                    MACRO_NONE );
            }
        }
        default: break;
    }
    return MACRO_NONE;
}