# Laboratory Activity #5: Receiving Serial Connection Using Arduino from Python
This laboratory activity demonstrates Arduino-Python serial communication,
allowing a circuit to be controlled via user input from a Python script.

## Objectives:
- Understand and implement Arduino Serial Connection
- Use Python to control Arduino via serial communication
- Create a circuit controlled using both Arduino and Python

## Activity Summary:
Three LEDs (Red, Green, Yellow) were connected to digital pins 8, 9, and 10.
The Arduino sketch reads serial input and toggles LEDs based on user commands:
  R/r → Toggle Red LED
  G/g → Toggle Green LED
  Y/y → Toggle Yellow LED
  A/a → Turn all LEDs ON
  O/o → Turn all LEDs OFF
  Other inputs → Error message
A Python script using pyserial provides a menu for the user to send commands to Arduino.
Input is case-insensitive, and the program continues running until "X/x" is entered.

## Output:
- LEDs toggle or switch ON/OFF according to the Python menu commands
- Invalid commands return an error message
- The Python program terminates when the user chooses to exit
