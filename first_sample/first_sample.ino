#include "FastLED.h"

#define DATA_PIN 3
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS 130
#define BRIGHTNESS 60

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip); // initializes LED strip
  FastLED.setBrightness(BRIGHTNESS);// global brightness
}

// 1つずつ光らせる
void showProgramSamplePixel_1(CRGB crgb, long delayTime) {
  for (int i = 0; i < NUM_LEDS; ++i) {
    leds[i] = crgb;
    FastLED.show();
    delay(delayTime);
  }
}

// 2つずつ光らせる
void showProgramSamplePixel_2(CRGB crgb, long delayTime) {
  for (int i = 0; i < NUM_LEDS; ++i) {
    leds[i] = crgb;
    leds[++i] = crgb;
    FastLED.show();
    delay(delayTime);
  }
}

void loop() {
  showProgramSamplePixel_2(CRGB::Blue, 3);
}
