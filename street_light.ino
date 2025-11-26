#include <Wire.h>
#include "RTClib.h"

RTC_DS3231 rtc;

int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  rtc.begin();
}

void loop() {
  DateTime now = rtc.now();

  int hour = now.hour();

  if(hour >= 18 || hour < 6) {
    analogWrite(led, 200);    // High brightness (night)
  } 
  else if(hour >= 6 && hour < 10) {
    analogWrite(led, 80);     // Morning brightness
  }
  else {
    analogWrite(led, 20);     // Daytime low brightness
  }

  delay(1000);
}
