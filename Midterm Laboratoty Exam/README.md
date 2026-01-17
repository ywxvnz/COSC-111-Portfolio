# Midterm Exam: Smart Lighting System
This project implements a smart outdoor lighting system using Arduino that adjusts LED indicators based on ambient light conditions.
The system supports manual and automatic modes, simulating environmental changes such as cloudy weather or bright sunlight.

## Objectives:
- Measure light intensity using a photoresistor and convert readings to percentage
- Control multiple LEDs to indicate light levels
- Implement manual and automatic modes for the lighting system
- Enable user interaction via Serial Monitor commands

## Activity Summary:
- A photoresistor is connected to analog pin A0, and three LEDs (Green, Yellow, Red) are connected to pins 11, 12, 13.
- Automatic mode: LEDs change according to simulated environmental conditions (Cloudy, Normal, Bright Sunlight) based on light intensity thresholds.
- Manual mode: Users can set low and high thresholds for LED activation using Serial commands (SET LOW xx / SET HIGH xx).
- Users can switch between modes with MODE AUTO and MODE MANUAL.
- Light intensity (%) and active LED are displayed on the Serial Monitor every second.

## Output:
LED corresponding to the light intensity is lit (Green, Yellow, or Red)
Serial Monitor shows:
- Light Intensity (%)
- Active LED
- Current Mode
- Environment (in AUTO mode)
Responds to Serial commands to change mode or thresholds, with error messages for invalid commands
