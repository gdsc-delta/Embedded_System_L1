# Simple Interfacing for 7-Segment Display

Welcome to the Simple Interfacing for 7-Segment Display project! This repository provides all the necessary instructions and code for connecting a 7-segment display to an Arduino and displaying numbers.

## Wiring Guide

To interface your 7-segment display with an Arduino, use the following wiring configuration:

- **Segment E** -> Pin `7` on Arduino
- **Segment D** -> Pin `8` on Arduino
- **Segment C** -> Pin `9` on Arduino
- **Segment B** -> Pin `13` on Arduino
- **Segment A** -> Pin `12` on Arduino
- **Segment F** -> Pin `11` on Arduino
- **Segment G** -> Pin `10` on Arduino

## TinkerCAD Simulation

Don't have the actual components to run the hardware? No problem! You can simulate the entire setup on TinkerCAD.

Access the TinkerCAD simulation [here](https://www.tinkercad.com/things/cSri3arjlf0-counter/editel?sharecode=hbM4iku8R2YDzVHqC-5gtDCcIGxWUWZcIjO0BYDx4hs).

Make sure you have a TinkerCAD account to view or interact with the simulation.

## Setup Instructions

1. Clone this repository or download the code to your local machine.
2. Connect your 7-segment display to your Arduino according to the wiring guide.
3. Open the Arduino sketch located in the `src` folder of this repository.
4. Upload the sketch to your Arduino using the Arduino IDE.

## How It Works

The sketch provided in this repository will display a count from 0 to 9 in an infinite loop. Each digit is displayed for a short interval before moving on to the next. The Arduino controls each segment of the display by sending signals to the corresponding pins to which the segments are connected.


