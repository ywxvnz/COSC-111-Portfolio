# Laboratory Activity #2: Working with Analog Signals
This laboratory activity focuses on the use of analog signals in Arduino by controlling the brightness of LEDs.
It builds on the first activity and demonstrates how analog input values are converted into usable output signals using the map() function.

## Objectives:
- Discuss analog signals and their implementation in an Arduino circuit
- Understand analog-to-digital signal conversion using the map() function

## Activity Summary:
Five LEDs were connected to digital pins 8 to 12 and controlled using analogWrite().
A potentiometer connected to an analog pin was used to vary LED brightness.
The LEDs turn ON and OFF one by one from pin 12 to pin 8 with a 1-second delay.
The system uses while() loops and arrays to manage pin configuration and LED control.

## Output:
A running light effect with adjustable LED brightness based on analog input, where LEDs gradually fade in and fade out sequentially.
