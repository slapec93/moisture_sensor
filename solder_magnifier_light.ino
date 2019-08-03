#include <FastLED.h>
#include <buttons.h>

#define NUM_LEDS 3

// LED
CRGB leds[NUM_LEDS];
Button push_buttons[3];
int brightness = 255;

void change_brightness() {
  brightness += 50;
  if (brightness > 255) {
    brightness = 5;
  }
  FastLED.setBrightness(brightness);
}

void setup() {
  // LEDs setup
  FastLED.addLeds<NEOPIXEL, 13>(leds, NUM_LEDS);
  FastLED.setBrightness(brightness);
}

void loop() {
  // put your main code here, to run repeatedly:
  // LEDs
  FastLED.clear();

  for (int i = 0; i <= NUM_LEDS; i++) {
    leds[i] = CRGB::White;
  }
  
  FastLED.show();
}
