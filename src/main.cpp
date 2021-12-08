#include <Adafruit_NeoPixel.h>
#include <Arduino.h>
#define pinPixels PD3
#define pinTouch PD4
#define pinTouch2 PD5
const uint8_t numOfLeds = 16;
bool flameOn = false;
uint8_t areYouSure = 0;
uint8_t areYouSures = 5;
Adafruit_NeoPixel pixels =
    Adafruit_NeoPixel(numOfLeds, pinPixels, NEO_GRB + NEO_KHZ800);
void setup() {
  pinMode(pinTouch, INPUT_PULLUP);
  pinMode(pinTouch2, INPUT);
  pixels.begin();
  pixels.clear();
  pixels.setBrightness(255); // 1 -> 255
  pixels.fill(0, 0, 0);
  pixels.show();
  // for (uint8_t i = 0; i < numOfLeds; i++) {
  //   pixels.setPixelColor(i, pixels.Color(255, 170, 20));
  // }
  for (uint8_t i = 0; i < 10; i++) {
    pixels.fill(pixels.Color(0, 0, 255));
    pixels.show();
    delay(1000);
    pixels.fill(pixels.Color(0, 0, 0));
    pixels.show();
    delay(1000);
  }
}
void loop() {
  // if (!digitalRead(pinTouch)) {
  //   pixels.fill( pixels.Color(0, 0, 255));
  // } else if (digitalRead(pinTouch2)) {
  //   pixels.fill( pixels.Color(0, 255, 0));
  // } else {
  //   pixels.fill( pixels.Color(0, 10, 10));
  // }
  // pixels.show();
  // delay(10);
  //
  // if (digitalRead(pinTouch)) {
  //   areYouSure = 0;
  //   if (!flameOn) {
  //     flameOn = true;
  //     for (double i = 0; i <= 1; i += .02) {
  //       pixels.fill(pixels.Color(round(255 * i), round(20 * i), 0));
  //       delay(10);
  //       pixels.show();
  //     }
  //     for (double i = 0; i <= 1; i += .02) {
  //       pixels.fill(
  //           pixels.Color(255, round(20 + (170 - 20) * i), round(20 * i)));
  //       delay(10);
  //       pixels.show();
  //     }
  //   }
  //   // JIC
  //   pixels.fill(pixels.Color(255, 170, 20));
  //   pixels.show();
  // } else {
  //   areYouSure = areYouSure < areYouSures ? areYouSure + 1 : areYouSure;
  //   if (flameOn && areYouSure >= areYouSures) {
  //     areYouSure = 0;
  //     flameOn = false;
  //     for (double i = 1; i >= 0; i -= .015) {
  //       pixels.fill(
  //           pixels.Color(round(255 * i), round(170 * i), round(20 * i)));
  //       delay(10);
  //       pixels.show();
  //     }
  //   }
  //   // JIC
  //   pixels.fill(0, 0, 0);
  //   pixels.show();
  // }
  // delay(1000);
}