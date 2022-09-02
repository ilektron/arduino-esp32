#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

// The TTGO T-Display does not have a builtin LED. The only
// LED on the back of the board is tied to the charger IC
// and indicates charging status
// static const uint8_t LED_BUILTIN = 22;
// #define BUILTIN_LED  LED_BUILTIN // backward compatibility
// #define LED_BUILTIN LED_BUILTIN

static const uint8_t SDA = 21;
// Unlike the T1, the T-Display I2C SCL line is correct at 22
static const uint8_t SCL = 22;

// These are the SPI for the TFT
static const uint8_t TFT_MOSI  = 19;
static const uint8_t TFT_SCLK  = 18;
static const uint8_t TFT_CS    = 5;
static const uint8_t TFT_DC    = 16;
static const uint8_t TFT_RST   = 23;
static const uint8_t TFT_BL    = 4;

static const uint8_t A0 = 36;
static const uint8_t A3 = 39;
static const uint8_t A4 = 32;
static const uint8_t A5 = 33;
static const uint8_t A12 = 2;
static const uint8_t A13 = 15;
static const uint8_t A14 = 13;
static const uint8_t A15 = 12;
static const uint8_t A17 = 27;
static const uint8_t A18 = 25;
static const uint8_t A19 = 26;

static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

static const uint8_t BUTTON1 = 0;
static const uint8_t BUTTON1 = 35;

#endif /* Pins_Arduino_h */
