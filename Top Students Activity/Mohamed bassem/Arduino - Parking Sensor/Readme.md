# Arduino Parking Sensor Project

Welcome to the repository for the Arduino Parking Sensor. This project is an implementation of a distance-sensing system using an Arduino Uno. It's designed to detect objects in proximity and provide an alert through a buzzer. The detection sensitivity can be adjusted using a potentiometer.

## Project Details

This parking sensor can be used in a variety of contexts such as aiding in vehicle parking or in robotics for obstacle detection.

### Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- Potentiometer
- Wires

### Circuit Diagram and Simulation
You can access the circuit diagram and interact with the simulation of the project on Tinkercad using the following link:

[Tinkercad Arduino Parking Sensor Project](https://www.tinkercad.com/things/bCNE3fjABzm-copy-of-parking-sensor/editel?tenant=circuits)

### Code
The Arduino sketch that operates the parking sensor is included in this repository. It interprets the distance readings from the ultrasonic sensor and accordingly alters the buzzer's sound frequency, which can be fine-tuned using the potentiometer.

### Usage
To use the parking sensor:
1. Power the Arduino Uno.
2. The ultrasonic sensor begins to measure the distance to any object in front of it.
3. The buzzer frequency changes in response to the distance measurements, which can be adjusted for sensitivity using the potentiometer.

