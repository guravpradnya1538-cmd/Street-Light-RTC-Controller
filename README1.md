# Auto Intensity Street Light Controller Using RTC

This project automatically adjusts street light brightness based on real-time clock (RTC) data using the DS3231 module.

## Features
- Time-based brightness control
- Low power consumption
- Fully automated operation
- Easy implementation with Arduino Uno

## Components Used
- Arduino Uno
- DS3231 RTC module
- LED (or street light model)
- Resistors
- Jumper wires

## How It Works
1. RTC module sends real-time hour to Arduino.
2. Arduino checks whether it is day/noon/evening/night.
3. LED brightness is adjusted using PWM:
   - High brightness at night
   - Medium brightness during evening/morning
   - Low brightness during the day

## File Included
- street_light.ino

## Skills Demonstrated
- RTC interfacing
- PWM control
- Embedded C programming
