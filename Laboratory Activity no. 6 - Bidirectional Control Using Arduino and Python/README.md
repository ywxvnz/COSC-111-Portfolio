# Laboratory Activity #6: Bidirectional Control Using Arduino and Python
This laboratory activity demonstrates bidirectional communication between Arduino and Python,
allowing signals to be sent and received in real time to control a circuit.

## Objectives:
- Understand and implement Arduino Serial Connection
- Use Python to communicate with Arduino
- Create a circuit implementing bidirectional communication between Arduino and Python

## Activity Summary:
Three LEDs (Red, Green, Blue) are connected to digital pins 7, 6, 5, and three push buttons are connected to pins 12, 11, 10.
### Outbound signal (Arduino → Python):
- Pressing a button sends a signal (R, G, or B) to Python
- LED states are not affected by button presses
### Inbound signal (Python → Arduino):
- Python receives the button signals and sends back a corresponding command (1, 2, 3)
- Arduino toggles the corresponding LED based on the Python command
The system ensures response time < 1 second for each button press.

## Output:
- Pressing a button on Arduino sends a signal to Python
- Python sends back a command to Arduino
- The corresponding LED toggles ON/OFF in real time
