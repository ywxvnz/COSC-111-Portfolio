# Laboratory Activity #7: Controlling Arduino Using FastAPI
This laboratory activity demonstrates Arduino control via Python and FastAPI, enabling HTTP-based interaction with a circuit.

## Objectives:
- Understand and implement Arduino Serial Connection
- Use Python and FastAPI for HTTP-based communication with Arduino
- Implement a bidirectional circuit control system using Arduino and Python

## Activity Summary:
Three LEDs (Red, Green, Blue) are connected to digital pins 7, 6, 5, and three push buttons are connected to pins 12, 11, 10.
### Inbound signal (FastAPI → Arduino):
- Sending /led/red, /led/green, or /led/blue toggles the corresponding LED
- /led/on turns all LEDs ON
- /led/off turns all LEDs OFF
### Outbound signal (Arduino → FastAPI / Serial Monitor):
- Pressing a button toggles the corresponding LED and prints the action to Serial
Python FastAPI acts as a server that relays commands to Arduino over serial, allowing real-time control via HTTP requests.

## Output:
- LEDs toggle individually or all together based on FastAPI requests
- Pressing buttons also toggles LEDs and logs actions to Serial
- Provides a web/API interface for remote control of the Arduino circuit
