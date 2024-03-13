#pragma once

#define VIAL_KEYBOARD_UID \
    { 0x03, 0xF0, 0x83, 0xA9, 0x6A, 0xD3, 0x40, 0x02 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 1 }

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
#define BOOTMAGIC_LITE_ROW_RIGHT 5
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

/* Serial settings */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define USB_VBUS_PIN GP28
#define SPLIT_HAND_PIN GP24

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X32
#    define I2C1_SCL_PIN GP3
#    define I2C1_SDA_PIN GP2
#    define OLED_BRIGHTNESS 128
#    define I2C_DRIVER I2CD1
#    define SPLIT_OLED_ENABLE
#    define SPLIT_LAYER_STATE_ENABLE
// #    define SPLIT_WPM_ENABLE
#    define SPLIT_MODS_ENABLE
#    define SPLIT_LED_STATE_ENABLE
#endif
