#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// LOLIN/WEMOS S2 Mini: connect the future WS2812 data input to GPIO16.
constexpr uint8_t kExternalLedPin = 16;

Adafruit_NeoPixel led(1, kExternalLedPin, NEO_GRB + NEO_KHZ800);

void setup() {
    Serial.begin(115200);

    led.begin();
    led.setBrightness(255);
    led.setPixelColor(0, led.Color(255, 0, 0));
    led.show();

    Serial.println("Mini LED lamp: one red WS2812 on GPIO16.");
}

void loop() {
    // Re-send the value so the pixel recovers after a brief power interruption.
    led.show();
    delay(1000);
}
