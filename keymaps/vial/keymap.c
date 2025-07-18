#include QMK_KEYBOARD_H
#include "quantum.h"
#include "gpio.h"
#include "via.h"
#include "rgb_matrix.h"


static inline uint8_t scale(uint8_t c) {
    return (uint16_t)c * rgb_matrix_config.hsv.v / 255;
}




RGB current_rgb = {255, 128, 192};

#define SW1_PIN GP28
#define SW2_PIN GP0
#define SW3_PIN GP29

void keyboard_pre_init_user(void) {
	/* setPinInputHigh(SW1_PIN); */
	/* setPinInputHigh(SW2_PIN); */
	/* setPinInputHigh(SW3_PIN); */
	setPinInputLow(SW1_PIN);
	setPinInputLow(SW2_PIN);
	setPinInputLow(SW3_PIN);


}


enum layer_number {
    _default = 0,
    _lower,
    _raise,
    _upper,
    _df_m,
    _lower_m,
    _raise_m,
    _upper_m  
    /* _lower_d, */
    /* _raise_d, */
    /* _upper_d, */
    /* _df_d, */
    /* _lower_r, */
    /* _raise_r, */
    /* _upper_r, */  
    /* _df_r */
};

enum custom_keycodes {
	LED_PINK = QK_KB_0,
	LED_GREEN,
	LED_BLUE,
	LED_WHITE,
	LED_PURPLE,
	LED_RED,
	LED_YELLOW,
	LED_ORANGE,
	LED_CYAN,
	LED_MAGENTA,
	LED_GRAY

};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [_default] = LAYOUT(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        KC_ESC,   OSL(1),   KC_MUTE,            
        KC_NO,    KC_NO,    KC_NO
    ),
    [_lower] = LAYOUT(
        KC_1,         KC_2,     KC_3,     KC_4,     KC_5,
        KC_6,         KC_7,     KC_8,     KC_9,     KC_0,
        S(KC_TAB),    KC_TAB,   KC_ESC,             
        KC_NO,        KC_NO,    KC_NO
   ),
    [_raise] = LAYOUT(
        KC_LCTL,  KC_SPC,   KC_LALT,   KC_ENT,      KC_BSPC,
        KC_LSFT,  KC_F11,   KC_F12,    S(KC_TAB),   KC_TAB,
        KC_BTN3,  KC_BTN3,  KC_ESC,                 
        KC_NO,    KC_NO,    KC_NO
   ),
    [_upper] = LAYOUT(
	KC_LCTL,    KC_SPC,   KC_LALT,   KC_ENT,      KC_BSPC,
        KC_LSFT,    KC_F11,   KC_F12,    S(KC_TAB),   KC_TAB,
        LSG(KC_4),  KC_DEL,   KC_ESC,                 
        KC_NO,      KC_NO,    KC_NO

     ),

    [_df_m] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,              
        KC_NO,    KC_NO,    KC_NO
    ),
    
    [_lower_m] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,              
        KC_NO,    KC_NO,    KC_NO
    ),

    [_raise_m] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,              
        KC_NO,    KC_NO,    KC_NO
    ),

    [_upper_m] = LAYOUT(
        KC_ESC,          KC_2,       KC_BTN1,  KC_BTN2,  KC_BTN3,
        G(KC_LEFT),   KC_BTN1,    KC_BTN2,  KC_BTN3,  G(KC_RIGHT),
        KC_PGUP,         KC_PGDN,    C(KC_0),            
        KC_NO,           KC_NO,      KC_NO
    )

    /* [_lower_d] = LAYOUT( */
    /*     KC_ESC,          KC_2,       KC_BTN1,  KC_BTN2,  KC_BTN3, */
    /*     G(KC_LEFT),   KC_BTN1,    KC_BTN2,  KC_BTN3,  G(KC_RIGHT), */
    /*     KC_PGUP,         KC_PGDN,    C(KC_0), */            
    /*     KC_NO,           KC_NO,      KC_NO */

    /* ), */

    /* [_raise_d] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ), */

    /* [_upper_d] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ), */

    /* [_df_d] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ), */

    /* [_lower_r] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ), */

    /* [_raise_r] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ), */

    /* [_upper_r] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ), */

    /* [_df_r] = LAYOUT( */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, */
    /*     KC_NO,    KC_NO,    KC_NO, */              
    /*     KC_NO,    KC_NO,    KC_NO */
    /* ) */


};


#if defined(ENCODER_MAP_ENABLE)

 const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
     [0] = {ENCODER_CCW_CW(RCS(KC_TAB), LCTL(KC_TAB)),  ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
     [1] = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT),           ENCODER_CCW_CW(KC_UP, KC_DOWN),                        ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
     [2] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
     [3] = {ENCODER_CCW_CW(RCS(KC_TAB), LCTL(KC_TAB)),  ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
     [4] = {ENCODER_CCW_CW(RCS(KC_TAB), LCTL(KC_TAB)),  ENCODER_CCW_CW(KC_UP, KC_DOWN),                        ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
     [5] = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT),           ENCODER_CCW_CW(SGUI(KC_3), SGUI(KC_4)),                ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
     [6] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)},
     [7] = {ENCODER_CCW_CW(KC_WH_L, KC_WH_R),           ENCODER_CCW_CW(KC_WH_U, KC_WH_D),                      ENCODER_CCW_CW(LCTL(KC_KP_MINUS), LCTL(KC_KP_EQUAL))}
     /* [8] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [9] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [10] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [11] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [12] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [13] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [14] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)}, */
     /* [15] = {ENCODER_CCW_CW(KC_MS_L, KC_MS_R),           ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN),                  ENCODER_CCW_CW(KC_WH_U, KC_WH_D)} */


 };

#endif


/* void keyboard_post_init_user(void) { */
/* 	rgb_matrix_enable(); */
/* } */


//togle


/* 4layers */
/* uint8_t get_layer_state(void) { */
/*     uint8_t sw1 = gpio_read_pin(SW1_PIN) ? 1 : 0; */
/*     uint8_t sw2 = gpio_read_pin(SW2_PIN) ? 1 : 0; */

/* if      (sw1 && sw2) return 0; // 000 → Layer 0 */
/*     else if ( !sw1 && sw2) return 1; // 10 → Layer 1 */
/*     else if ( !sw1 &&  !sw2) return 2; // 11 → Layer 2 */
/*     else if ( sw1 &&  !sw2) return 6; // 10 → Layer 3 */
/*     else return 0; // それ以外はデフォルト（Layer 0） */	
    /* return layer; */
/* } */




/* 8layers */
uint8_t get_layer_state(void) {
    uint8_t sw1 = gpio_read_pin(SW1_PIN) ? 0 : 1;
    uint8_t sw2 = gpio_read_pin(SW2_PIN) ? 0 : 1;
    uint8_t sw3 = gpio_read_pin(SW3_PIN) ? 0 : 1;

    
      // ONになっているスイッチの数をカウント
    uint8_t base_layer = sw1 + sw2 + sw3;  // 0〜3

    return base_layer;


		   
		    
/* if      (!sw1 && !sw2 && !sw3) return 0; // 000 → Layer 0 */
/*     else if ( sw1 && !sw2 && !sw3) return 1; // 100 → Layer 1 */
/*     else if ( sw1 &&  sw2 && !sw3) return 2; // 110 → Layer 2 */
/*     else if ( sw1 &&  sw2 &&  sw3) return 3; // 111 → Layer 3 */
/*     else if (!sw1 &&  sw2 &&  sw3) return 4; // 011 → Layer 4 */
/*     else if (!sw1 && !sw2 &&  sw3) return 5; // 001 → Layer 5 */
/*     else if (!sw1 &&  sw2 && !sw3) return 6; // 010 → Layer 6 */
/*     else if ( sw1 && !sw2 &&  sw3) return 7; // 101 → Layer 7 (未定義だった組み合わせ) */
/*     else return 0; // それ以外はデフォルト（Layer 0） */	
    /* return 0; */
}





void matrix_scan_user(void) {
static uint8_t current_layer = 255;// 初回は不正な値
    uint8_t new_layer = get_layer_state();

    // レイヤーが変わった場合のみ処理を実行
    if (new_layer != current_layer) {
        current_layer = new_layer;
        layer_move(new_layer); // レイヤーを切り替える
    }


}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case LED_PINK:
                current_rgb = (RGB){255, 128, 192};
		
		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

		
                return false;

            case LED_GREEN:
                current_rgb = (RGB){0, 255, 0};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;

            case LED_BLUE:
                current_rgb = (RGB){0, 0, 255};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	    
	    case LED_WHITE:
                current_rgb = (RGB){255, 255, 255};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	    
	    case LED_PURPLE:
                current_rgb = (RGB){128, 0, 128};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	   
	    case LED_RED:
                current_rgb = (RGB){255, 0, 0};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	    
	    case LED_YELLOW:
                current_rgb = (RGB){255, 255, 0};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false; 
	   
	    case LED_ORANGE:
                current_rgb = (RGB){255, 128, 0};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	  
	    case LED_CYAN:
                current_rgb = (RGB){0, 255, 255};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	  
	    case LED_MAGENTA:
                current_rgb = (RGB){255, 0, 255};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;
	
	    case LED_GRAY:
                current_rgb = (RGB){128, 128, 128};

		eeconfig_update_kb((current_rgb.r << 16) | (current_rgb.g << 8) | current_rgb.b);

                return false;














        }
    }
    return true;
}



 bool rgb_matrix_indicators_user(void) {
     switch (get_highest_layer(layer_state)) {


        case _lower: {
             /* for (int i = 10; i <= 13; i++) { */
		     /* HSV hsv = via_get_custom_hsv_value(0); */
		     /* RGB rgb = hsv_to_rgb(hsv); */
		       


                     rgb_matrix_set_color(10,RGB_BLACK);
                     rgb_matrix_set_color(11,RGB_BLACK);
                     rgb_matrix_set_color(12,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
             /* } */

             /* rgb_matrix_set_color_all(RGB_GREEN); */
             break;
		     }

        case _raise: {
             /* for (int i = 10; i <= 13; i++) { */
                     /* rgb_matrix_set_color(i,RGB_YELLOW); */
                     /* HSV hsv = via_get_custom_hsv_value(0); */
		     /* RGB rgb = hsv_to_rgb(hsv); */


	             rgb_matrix_set_color(10,RGB_BLACK);
                     rgb_matrix_set_color(11,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
                     rgb_matrix_set_color(12,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
             /* } */

             /* rgb_matrix_set_color_all(RGB_YELLOW); */
             break;
		     }

        case _upper: {
             /* for (int i = 10; i <= 13; i++) { */
                     /* rgb_matrix_set_color(i,RGB_YELLOW); */
	             /* HSV hsv = via_get_custom_hsv_value(0); */
		     /* RGB rgb = hsv_to_rgb(hsv); */


                     rgb_matrix_set_color(10,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
                     rgb_matrix_set_color(11,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));
                     rgb_matrix_set_color(12,scale(current_rgb.r), scale(current_rgb.g), scale(current_rgb.b));


             /* } */

             /* rgb_matrix_set_color_all(RGB_YELLOW); */

            break;
		     }

        case _df_m:
             /* for (int i = 10; i <= 12; i++) { */
		     /* rgb_matrix_set_color(10,RGB_BLACK); */
                     /* rgb_matrix_set_color(11,RGB_BLACK); */
                     /* rgb_matrix_set_color(12,RGB_BLACK); */
 
                     /* rgb_matrix_set_color(i,RGB_PURPLE); */
             /* } */

             /* rgb_matrix_set_color_all(RGB_PURPLE); */
             break;


        case _lower_m:

             /* for (int i = 10; i <= 12; i++) { */
             /*         rgb_matrix_set_color(i,RGB_ORANGE); */
             /* } */

                     /* rgb_matrix_set_color(10,RGB_BLACK); */
                     /* rgb_matrix_set_color(11,RGB_BLACK); */
                     /* rgb_matrix_set_color(12,RGB_PURPLE); */


             /* rgb_matrix_set_color_all(RGB_ORANGE); */

	     /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
             break;


        case _raise_m:
             /* for (int i = 10; i <= 12; i++) { */
             /*         rgb_matrix_set_color(i,RGB_SPRINGGREEN); */
             /* } */

                     /* rgb_matrix_set_color(10,RGB_BLACK); */
                     /* rgb_matrix_set_color(11,RGB_PURPLE); */
                     /* rgb_matrix_set_color(12,RGB_PURPLE); */


             /* rgb_matrix_set_color_all(RGB_SPRINGPURPLE); */
             break;

        case _upper_m:
             /* for (int i = 10; i <= 12; i++) { */
             /*         rgb_matrix_set_color(i,RGB_CORAL); */
             /* } */

                     rgb_matrix_set_color(10,RGB_PURPLE);
                     rgb_matrix_set_color(11,RGB_PURPLE);
                     rgb_matrix_set_color(12,RGB_PURPLE);


             /* rgb_matrix_set_color_all(RGB_CORAL); */
             break;

        /* default: */

	     /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
        /*      rgb_matrix_set_color(1,RGB_ORANGE); */
        /*      break; */
        /* case _lower_d: */
        /*      /1* for (int i = 10; i <= 13; i++) { *1/ */
        /*              rgb_matrix_set_color(10,RGB_BLACK); */
        /*              rgb_matrix_set_color(11,RGB_BLACK); */
        /*              rgb_matrix_set_color(12,RGB_GREEN); */
        /*      /1* } *1/ */

        /*      /1* rgb_matrix_set_color_all(RGB_GREEN); *1/ */
        /*      break; */

        /* case _raise_d: */
        /*      /1* for (int i = 10; i <= 13; i++) { *1/ */
        /*              /1* rgb_matrix_set_color(i,RGB_BLUE); *1/ */
	             /* rgb_matrix_set_color(10,RGB_BLACK); */
        /*              rgb_matrix_set_color(11,RGB_GREEN); */
        /*              rgb_matrix_set_color(12,RGB_GREEN); */

        /*      /1* } *1/ */

        /*      /1* rgb_matrix_set_color_all(RGB_BLUE); *1/ */
        /*      break; */

        /* case _upper_d: */
        /*      /1* for (int i = 10; i <= 13; i++) { *1/ */
        /*              /1* rgb_matrix_set_color(i,RGB_GREEN); *1/ */
        /*              rgb_matrix_set_color(10,RGB_GREEN); */
        /*              rgb_matrix_set_color(11,RGB_GREEN); */
        /*              rgb_matrix_set_color(12,RGB_GREEN); */


        /*      /1* } *1/ */

        /*      /1* rgb_matrix_set_color_all(RGB_YELLOW); *1/ */

        /*     break; */

        /* case _df_d: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_RED); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_PURPLE); *1/ */
        /*      break; */


        /* case _lower_r: */

        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_PINK); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_ORANGE); *1/ */

	     /* /1* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); *1/ */
        /*      break; */


        /* case _raise_r: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_TURQUOISE); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_SPRINGGREEN); *1/ */
        /*      break; */

        /* case _upper_r: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_BLUE); */
        /*      } */

        /*      /1* rgb_matrix_set_color_all(RGB_CORAL); *1/ */
        /*      break; */

        /* case _df_r: */
        /*      for (int i = 10; i <= 12; i++) { */
        /*              rgb_matrix_set_color(i,RGB_GOLD); */


        /*      /1* rgb_matrix_set_color_all(RGB_PURPLE); *1/ */
        /*      break; */

     }
	     /* rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING); */
     return false;

	
     
     /* rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON); */
   

 }
void keyboard_post_init_user(void) {
    if (!eeconfig_is_enabled()) {
        eeconfig_init();  // EEPROM全体初期化（1回だけ）
    }
    uint32_t packed = eeconfig_read_kb();
    current_rgb.r = (packed >> 16) & 0xFF;
    current_rgb.g = (packed >> 8) & 0xFF;
    current_rgb.b = packed & 0xFF;
}







// AZ1UBALL
 void pointing_device_init_kb(void) {
         uint8_t addr=0x14;
         //uint8_t data[]={0x90,0x00};
         uint8_t data[]={0x91, 0x00};
         uint16_t timeout=100;
         i2c_status_t status;
         status = i2c_transmit (addr, data, 2, timeout);
         if (status != 0) {
             return;
         }
 }

 #ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
 layer_state_t layer_state_set_user(layer_state_t state) {

         switch(get_highest_layer(remove_auto_mouse_layer(state,true))) {
                 case _upper_m:
                         state = remove_auto_mouse_layer(state, false);
                         set_auto_mouse_enable(false);
                         break;
                 default:
                         set_auto_mouse_enable(true);
                         break;
         }
         return state;
 }
#endif









