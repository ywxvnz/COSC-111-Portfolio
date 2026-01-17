# Laboratory Activity #3: Working with Sensors
This laboratory activity introduces students to sensor components in Arduino and
demonstrates a simple fire detection system using a thermistor and a photoresistor.

## Objectives:
- Familiarize students with basic sensor components for IoT
- Integrate sensors into an Arduino circuit
- Create a simple fire sensor implementation

## Activity Summary:
A thermistor (temperature) and a photoresistor (light) were connected to analog pins A0 and A2 respectively.
A red LED on pin 12 (optionally with a buzzer) alerts when:
- Temperature ≥ 50°C
- Brightness ≥ 220
The temperature and brightness readings are separated into different functions,
and pin numbers and threshold values are handled using #define and const.
The LED (and buzzer) blinks rapidly when both thresholds are exceeded.

## Output:
The LED (and buzzer, if included) blinks quickly to indicate a fire condition whenever the temperature and brightness thresholds are reached.
