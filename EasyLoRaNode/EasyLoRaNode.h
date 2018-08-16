// ===================================================
// Put all pin mappings and library here
// ===================================================
// ====================================
// Serial
// ====================================
#define BAUD_RATE 9600

// ====================================
// LED
// ====================================
#define LED_GREEN      2
#define LED_BLUE      15

// ====================================
// Speaker
// ====================================
#define SPK       32
#define SPK_FREQ 2400
#define SPK_CHANNEL 0
#define SPK_RESOLUTION 8

// ====================================
// USB RESET
// ====================================
#define CP2012_RST    33

// ====================================
// SHT1x
// ====================================
#define SHT_SCK       23
#define SHT_DATA      22

// ====================================
// Button
// ====================================
#define BTN       39    // SENSOR_VN / GPIO39 / Input only

// =====================
// LoRa
// =====================
#include <SPI.h>
#include <LoRa.h>

// Definitions
// CC2530 ZNP SPI interface
#define LORA_SS   14
#define LORA_SCK   25
#define LORA_MOSI  27
#define LORA_MISO  26
#define LORA_DIO012      12
#define LORA_RESET  13

#define LORA_SF 7
#define LORA_CR 4 //4/5
#define LORA_BW 125E3
#define LORA_PREAMBLE_LENGTH  8

// =====================
// WiFi
// =====================
#include <WiFi.h>

// =====================
// OTA
// =====================
#include <ArduinoOTA.h>
