/**
 * Test serial output.
 *
 * Note: The 3rd party WAVGAT library I'm using has it's own Arduino.h header
 * file which apparently is confusing the Eclipse indexer. That's why the calls
 * to Serial below are getting flagged as unresolved. But the code compiles
 * with no errors nor warnings.
 */
#include <Arduino.h>

const uint8_t LED_PIN = LED_BUILTIN;
const uint16_t DELAY = 2000;

void setup() {
    // serial monitor @ 9600 baud
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
  Serial.println("ON");
  digitalWrite(LED_PIN, HIGH);
  delay(DELAY);
  Serial.println("OFF");
  digitalWrite(LED_PIN, LOW);
  delay(DELAY);
} // loop()
