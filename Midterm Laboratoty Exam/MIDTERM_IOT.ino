// pins
#define PHOTORESISTOR A0
#define GREENLED 11
#define YELLOWLED 12
#define REDLED 13

// variables
int lightValue = 0;
float lightPercent = 0;
String mode = "MANUAL";      
String environment = "";    

int lowThreshold = 40;  
int highThreshold = 70;

// led based on intensity
void updateLEDs(float intensity) {
  digitalWrite(GREENLED, LOW);
  digitalWrite(YELLOWLED, LOW);
  digitalWrite(REDLED, LOW);

  if (intensity < lowThreshold) {
    digitalWrite(GREENLED, HIGH);
  } else if (intensity < highThreshold) {
    digitalWrite(YELLOWLED, HIGH);
  } else {
    digitalWrite(REDLED, HIGH);
  }
}

// adjust environment
void adjustEnvironment(float intensity) {
  if (intensity < 40) {
    environment = "Cloudy";
  } 
  else if (intensity < 70) {
    environment = "Normal";
  } 
  else {
    environment = "Bright Sunlight";
  }
}

void setup() {
  pinMode(GREENLED, OUTPUT);
  pinMode(YELLOWLED, OUTPUT);
  pinMode(REDLED, OUTPUT);
  pinMode(PHOTORESISTOR, INPUT);

  Serial.begin(9600);
  Serial.println("Smart Lighting System Initialized.");
  Serial.println("Default Mode: MANUAL");
  Serial.println("Use commands: MODE AUTO / MODE MANUAL / SET LOW xx / SET HIGH xx");
}

void loop() {
  // Read sensor and convert to percent
  lightValue = analogRead(PHOTORESISTOR);
  lightPercent = (lightValue / 1023.0) * 100.0;

  // auto environment
if (mode == "AUTO") {
  adjustEnvironment(lightPercent);
  digitalWrite(GREENLED, environment == "Cloudy" ? HIGH : LOW);
  digitalWrite(YELLOWLED, environment == "Normal" ? HIGH : LOW);
  digitalWrite(REDLED, environment == "Bright Sunlight" ? HIGH : LOW);
} else {
  // LED based on threshold
  updateLEDs(lightPercent);
}

Serial.print("Light Intensity: ");
Serial.print(lightPercent, 1);
Serial.print("% | LED: ");

if (mode == "AUTO") {
  // LED display based on environment
  if (environment == "Cloudy") Serial.print("Green");
  else if (environment == "Normal") Serial.print("Yellow");
  else Serial.print("Red");
} else {
  // Manual mode
  if (lightPercent < lowThreshold) Serial.print("Green");
  else if (lightPercent < highThreshold) Serial.print("Yellow");
  else Serial.print("Red");
}

Serial.print(" | Mode: ");
Serial.print(mode);

if (mode == "AUTO") {
  Serial.print(" | Environment: ");
  Serial.println(environment);
} else {
  Serial.println();
}

  delay(1000);

  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    command.toUpperCase();

    if (command == "MODE AUTO") {
      mode = "AUTO";
      adjustEnvironment(lightPercent);
      Serial.println("Switched to AUTOMATIC mode.");
    }
    else if (command == "MODE MANUAL") {
      mode = "MANUAL";
      Serial.println("Switched to MANUAL mode.");
    }
    // manual threshold
    else if (mode == "MANUAL" && command.startsWith("SET LOW ")) {
      String valStr = command.substring(8);
      int val = valStr.toInt();
      lowThreshold = constrain(val, 0, 100);
      Serial.print("Low threshold set to ");
      Serial.println(lowThreshold);

      updateLEDs(lightPercent);
    }
    else if (mode == "MANUAL" && command.startsWith("SET HIGH ")) {
      String valStr = command.substring(9);
      int val = valStr.toInt();
      highThreshold = constrain(val, 0, 100);
      Serial.print("High threshold set to ");
      Serial.println(highThreshold);

      updateLEDs(lightPercent);
    }
    else {
      Serial.println("Error: Wrong command");
    }
  }
}