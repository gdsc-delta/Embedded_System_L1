# Fire System Project

The Fire System project is an Arduino-based solution designed to detect and respond to fire hazards. The system monitors environmental readings, activates an alarm, engages a servo to simulate opening a door, and illuminates an LED to indicate danger.

## Overview

Utilizing a combination of a temperature sensor and a gas sensor, the system constantly checks for signs of fire. If a potential fire is detected (temperature above 60°C), the system reacts by:

- Triggering an audible alarm.
- Actuating a servo (potentially to open a door or activate another safety mechanism).
- Alternating the lighting of an RGB LED (flashing red to indicate danger).

## Components

To assemble the Fire System, you'll need the following components:

- Arduino Uno or any compatible board
- Servo motor
- Buzzer
- RGB LED (or separate Red and Green LEDs)
- Temperature sensor (TMP36 or equivalent)
- Gas sensor (MQ-2 or similar)
- Liquid Crystal Display (LCD) for real-time status output

## Circuit Connections

The pin connections for the components are defined as follows:

- `buz` (Buzzer) -> Digital Pin 10
- `temp` (Temperature Sensor) -> Analog Pin A0
- `gas` (Gas Sensor) -> Analog Pin A2
- `red` (Red LED) -> Digital Pin 3
- `green` (Green LED) -> Digital Pin 2
- `blue` (Blue LED) -> Digital Pin 13
- Servo -> Digital Pin 9
- LCD -> Digital Pins 12, 11, 4, 5, 6, 7

## Code Setup

The provided Arduino code handles the initialization and continuous monitoring within the `setup()` and `loop()` functions. It reads sensor values, updates the LCD display, and controls the output devices based on the detected conditions.

## Usage

To use the Fire System code:

1. Ensure all components are correctly wired to your Arduino board.
2. Open the Arduino sketch provided in this repository.
3. Upload the sketch to your Arduino board using the Arduino IDE.
4. Observe the LCD for real-time temperature and gas level readings.
5. Test the system by exposing it to heat or gas to trigger the alarm and LED.
