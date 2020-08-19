#include <Wire.h>
#include "MAX30100_PulseOximeter.h"

#define REPORTING_PERIOD_MS     1000

PulseOximeter pox;

uint32_t tsLastReport = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    pox.update();
    char buffer[20];
    if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
        sprintf(buffer, "%f, %f", pox.getSpO2(), pox.getHeartRate());
        Serial.println(buffer);
        tsLastReport = millis();
    }
}
