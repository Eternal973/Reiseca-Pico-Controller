#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

#define SW_GPIO_SIZE 8               // Number of switches
#define LED_GPIO_SIZE 1              // Number of switch LEDs
#define ENC_GPIO_SIZE 5               // Number of encoders
#define ENC_PPR 600                   // Encoder PPR
#define MOUSE_SENS 1                  // Mouse sensitivity multiplier
#define ENC_DEBOUNCE false            // Encoder Debouncing
#define SW_DEBOUNCE_TIME_US 4000      // Switch debounce delay in us
#define ENC_PULSE (ENC_PPR * 4)       // 4 pulses per PPR
#define REACTIVE_TIMEOUT_MAX 1000000  // HID to reactive timeout in us
#define WS2812B_LED_SIZE 30           // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 5           // Number of WS2812B LED Zones
#define WS2812B_LEDS_PER_ZONE \
  WS2812B_LED_SIZE / WS2812B_LED_ZONES  // Number of LEDs per zone

#ifdef PICO_GAME_CONTROLLER_C

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {HID_KEY_Q, HID_KEY_A, HID_KEY_Z, HID_KEY_S,
                              HID_KEY_X, HID_KEY_D, HID_KEY_W, HID_KEY_E};
const uint8_t SW_GPIO[] = {
    0, 1, 2, 3, 4, 5, 16, 17,
};
const uint8_t LED_GPIO[] = {
    18,
};
const uint8_t ENC_GPIO[] = {6, 8, 10, 12, 14};      // 1_ENC(6, 7); 2_ENC(8, 9); 3_ENC(10, 11); 4_ENC(12, 13); 5_ENC(14, 15);
const bool ENC_REV[] = {false, false, false, false, false};  // Reverse Encoders
const uint8_t WS2812B_GPIO = 28;

#endif

extern bool joy_mode_check;

#endif
