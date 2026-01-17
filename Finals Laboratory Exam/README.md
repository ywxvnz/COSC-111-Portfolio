# Finals Exam: Arduino-to-Python Client System
This project implements an Arduino-to-Python communication system where a push button on
an Arduino triggers actions on a remote LED system via a Python-based API client.

## Objectives:
- Detect push button presses on Arduino and send signals via Serial
- Use Python to listen to Arduino signals and call API endpoints
- Ensure one button press results in one API request (software debouncing)
- Provide feedback and error handling in the Python client

## Activity Summary:
- A push button is connected to pin 12 on Arduino.
- Arduino sends a group number via Serial when the button is pressed (debounced to avoid multiple signals).
- A Python client continuously listens to the serial port:
- Receives the group number
- Normalizes input for case-insensitivity
- Sends an HTTP request to /led/group/<number>/toggle
- Displays feedback in the terminal including group number, endpoint called, and API response

## Output:
- Each valid button press triggers one API request
- Long or held button presses do not generate repeated requests
- Python client logs all events and errors in real time
