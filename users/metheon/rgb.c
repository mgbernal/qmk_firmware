#include "metheon.h"
// #include  "rgblight_list.h"

layer_state_t layer_state_set_rgb(layer_state_t state) {
#ifdef RGBLIGHT_ENABLE

    switch (get_highest_layer(state)) {
        case _BASE:
            // rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            rgblight_sethsv_noeeprom(HSV_ORANGE);
        case _LOWER:
            rgblight_sethsv_noeeprom(HSV_BLUE);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _RAISE:
            rgblight_sethsv_noeeprom(HSV_RED);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _ADJUST:
            rgblight_sethsv_noeeprom(HSV_PURPLE);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _EXTEND:
            rgblight_sethsv_noeeprom(HSV_GREEN);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _FUNPAD:
            rgblight_sethsv_noeeprom(HSV_ORANGE);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _NUMPAD:
            rgblight_sethsv_noeeprom(HSV_TEAL);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _BL3_BSE:
            rgblight_sethsv_noeeprom(HSV_TURQUOISE);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        case _BL3_UPR:
            rgblight_sethsv_noeeprom(HSV_AZURE);
            rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
            break;
        default:
            // do nothing
            break;
    }

#endif // RGBLIGHT_ENABLE
    return state;
}
