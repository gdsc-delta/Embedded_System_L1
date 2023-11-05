# Parking Sensor Project

This project implements an Arduino-based parking sensor system that uses ultrasonic detection to determine the distance of an object from the sensor. It provides visual and auditory feedback based on the distance measured, indicating safety zones with different LED colors and buzzer tones. It also includes a button to toggle the system on and off.

## Features

- Ultrasonic distance measurement to detect the proximity of objects.
- LED indicators for different distance thresholds:
  - Green LED for safe distance.
  - Blue LED for warning.
  - Red LED for danger zone.
- Buzzer alarms for immediate auditory feedback.
- Toggle button to start/stop the parking sensor function.

## Components

To assemble the Parking Sensor system, you will need:

- Arduino Uno or compatible microcontroller board
- Ultrasonic Sensor (HC-SR04 or similar)
- LEDs (Green, Blue, Red)
- Buzzer
- Button
- Resistor 220 ohm for each LED
- Breadboard and connecting wires

## Circuit Connections

The pin connections for the Arduino components are as follows:

- `red` LED -> Digital Pin 4
- `green` LED -> Digital Pin 2
- `blue` LED -> Digital Pin 3
- `buz` Buzzer -> Digital Pin 7
- `button_1` -> Analog Pin A4
- `trig` for Ultrasonic -> Analog Pin A0
- `echo` for Ultrasonic -> Analog Pin A1

## TinkerCAD Simulation

To see the Parking Sensor in action without building the physical circuit, you can access the TinkerCAD simulation using the link below:

[TinkerCAD Parking Sensor Simulation](https://www.tinkercad.com/things/56IqTKnnmAI-barking-sensor/editel?sharecode=8i8EUG6OUCjUQ6lgMAcuoAQKoi0MaQihwjnOyK1yegg)

Note that you may need to create a TinkerCAD account if you do not already have one to view and interact with the simulation.

## Code Setup

The included Arduino sketch sets up the parking sensor system and runs a continuous loop that:
- Measures distance using the ultrasonic sensor.
- Provides LED-based visual feedback depending on the distance.
- Emits a buzzer sound for different safety zones.
- Uses a button to start or stop the parking sensor system.

## Usage

1. Connect all the components as specified in the Circuit Connections section.
2. Upload the provided Arduino code to your board.
3. Press the button to activate the sensor.
4. Observe the LED changes and listen to the buzzer tones as you move an object closer and further from the sensor.


