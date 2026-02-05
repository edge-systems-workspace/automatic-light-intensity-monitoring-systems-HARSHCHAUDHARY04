#include <Arduino.h>
#define ldr_pin A0
void setup() {
    Serial.begin(9600);
    pinMode(ldr_pin, INPUT);
    Serial.println("LDR Test");
}

void loop() {
    int idrRaw = analogRead(ldr_pin);
    int lightPercentag = map(idrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw: ");
    Serial.println(idrRaw);
    Serial.print(" | Light");
    Serial.println(lightPercentag);
    Serial.print("%");
    delay(500);
}