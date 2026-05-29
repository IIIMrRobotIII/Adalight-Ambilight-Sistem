
//Adalight Kodu
//Güncelleyen: Burak Zahter

#include <FastLED.h>

#define NUM_LEDS 58         // Şeridinizdeki toplam LED sayısı
#define DATA_PIN 4          // LED veri (Data) pini
#define serialRate 115200   // Haberleşme hızı

const uint8_t prefix[] = {'A', 'd', 'a'};
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  
  FastLED.showColor(CRGB(255, 0, 0));
  delay(500);
  FastLED.showColor(CRGB(0, 255, 0));
  delay(500);
  FastLED.showColor(CRGB(0, 0, 255));
  delay(500);
  FastLED.showColor(CRGB(0, 0, 0));
  
  Serial.begin(serialRate);
  Serial.print("Ada\n");
}

void loop() { 
  uint8_t magic_state = 0;
  while (magic_state < 3) {
    while (!Serial.available());
    uint8_t b = Serial.read();
    if (b == prefix[magic_state]) {
      magic_state++;
    } else if (b == 'A') {
      magic_state = 1;
    } else {
      magic_state = 0;
    }
  }
  
  while (Serial.available() < 3); 
  uint8_t hi  = Serial.read();
  uint8_t lo  = Serial.read();
  uint8_t chk = Serial.read();
  
  if (chk != (hi ^ lo ^ 0x55)) {
    return; 
  }
  
  for (uint16_t i = 0; i < NUM_LEDS; i++) {
    while (Serial.available() < 3); 
    leds[i].r = Serial.read();
    leds[i].g = Serial.read();
    leds[i].b = Serial.read();
  }
  
  FastLED.show();
}