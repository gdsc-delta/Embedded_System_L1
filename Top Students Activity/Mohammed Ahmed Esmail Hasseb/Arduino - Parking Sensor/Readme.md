# Arduino Parking Sensor Project

Welcome to the repository for the Arduino Parking Sensor. This project is an implementation of a distance-sensing system using an Arduino Uno. It's designed to detect objects in proximity and provide an alert through a buzzer. The sensitivity of the detection can be adjusted using a variable resistor.

## Project Details

This parking sensor can be utilized in various applications such as aiding in vehicle parking or obstacle detection in robotics.

### Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- Variable Resistor (Potentiometer)
- Wires

### Circuit Diagram and Simulation
You can access the circuit diagram and interact with the project simulation on Tinkercad using the following link:

[Tinkercad Arduino Parking Sensor Project](https://www.tinkercad.com/things/6q6qoGDqDPk-tremendous-jofo/editel?sharecode=ovsZ_1m_IsjzanijOk1ncil78Q0CHuqAdhEWILOnHGA)

### Code
The Arduino sketch for operating the parking sensor is included in this repository. It controls how the ultrasonic sensor reads distances and dictates the buzzer's behavior based on these readings.

### Usage
To operate the parking sensor:
1. Connect the Arduino to a power source.
2. The ultrasonic sensor will start measuring the distance to nearby objects.
3. The buzzer's beeping frequency will change according to the distance, which is modulated by the variable resistor.

