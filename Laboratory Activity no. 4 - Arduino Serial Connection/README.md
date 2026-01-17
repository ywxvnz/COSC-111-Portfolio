# Laboratory Activity #4: Arduino Serial Connection
This laboratory activity demonstrates how to use the Arduino Serial Connection to control a circuit and respond to user input in real time.

## Objectives:
- Understand and implement Arduino Serial Connection
- Familiarize students with basic Serial functions
- Create a circuit controlled via Serial input

## Activity Summary:
Using the photoresistor from the previous lab, the LED on pin 8 blinks when the brightness threshold (220) is reached.
The LED continues blinking even if the sensor reading drops below the threshold.
Users can stop the blinking by typing "stop" (case insensitive) in the Serial Monitor.
The system continuously reads sensor values, handles Serial input, and controls the LED accordingly.

## Output:
The LED blinks when the threshold is reached and stops when the user types "stop" in the Serial Monitor.
Brightness readings are displayed in real time on the Serial Monitor.
