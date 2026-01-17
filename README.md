# COSC 111 Student Portfolio
This repository contains all laboratory activities, midterm, and finals projects completed for **COSC 111**. Each activity demonstrates practical applications of Arduino, Python, and IoT concepts.

## Table of Contents
- [Laboratory Activities](#laboratory-activities)
- [Midterm Exam](#midterm-exam)
- [Finals Exam](#finals-exam)
- [Group Members](#group-members)

## Laboratory Activities

### Lab 1: Working with Digital Signals
- Create a running light circuit using Arduino to demonstrate **digital outputs**.  
- LEDs turn on/off sequentially to illustrate digital signal control.

### Lab 2: Working with Analog Signals
- Extend Lab 1 by controlling LED **brightness** with `analogWrite()` and reading values from a potentiometer.  
- Introduces **analog signal handling**.

### Lab 3: Working with Sensors
- Implement a **fire sensor** using a thermistor and photoresistor.  
- Alerts via LED and optional buzzer when thresholds are exceeded.

### Lab 4: Arduino Serial Connection
- Control an LED via **Arduino Serial Monitor**.  
- Users can start/stop LED blinking based on sensor thresholds and serial commands.

### Lab 5: Receiving Serial Connection Using Arduino from Python
- Use **Python** to control Arduino LEDs over serial.  
- Implements toggling of Red, Green, and Blue LEDs, with menu-driven user interaction.

### Lab 6: Bidirectional Control Using Arduino and Python
- Demonstrates **bidirectional communication** between Arduino and Python.  
- Button presses on Arduino trigger responses back from Python to toggle LEDs.

### Lab 7: Controlling Arduino Using FastAPI
- Control Arduino LEDs through **Python FastAPI**.  
- Users can toggle individual LEDs or all LEDs via HTTP requests.  
- Buttons on Arduino provide real-time feedback.

## Midterm Exam
### Smart Lighting System
- Design an Arduino system that adjusts LEDs based on **ambient light intensity**.  
- Supports **manual and automatic modes**.  
- Allows **user input via Serial Monitor** to switch modes and set thresholds.  
- Displays **light intensity, active LED, mode, and environment** every second.

## Finals Exam
### Arduino-to-Python Client System
- Implement a system where an **Arduino button press** triggers HTTP requests via a Python client.  
- Arduino detects button presses with **debouncing**.  
- Python listens to serial signals and calls **API endpoints**.  
- Each press generates **one API request**, with real-time feedback in terminal.

## Group Members
- Vanessa Mae Andino
- Christina Gomba
- Roselyn Llantos
- Josephine Lorraine Ochoa
-  Vhina May Palomar

**Subject Code:** COSC 111B 
**Subject Title:** CS-Elective 3 - Internet of Things
**Instructor:** Johnroe Paulo Cañamaque


