const int buttonPin = 12;     
const int GROUP_NUMBER = 3;  

bool lastButtonState = HIGH;
bool buttonPressed = false;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 200;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  
  Serial.begin(9600);         
}

void loop() {
  bool reading = digitalRead(buttonPin);

  // Detect button press (LOW when pressed)
  if (reading == LOW && lastButtonState == HIGH) {
    lastDebounceTime = millis();
    buttonPressed = true;
  }

  // Debounce validation
  if (buttonPressed && (millis() - lastDebounceTime) > debounceDelay) {
    Serial.println(GROUP_NUMBER);  
    buttonPressed = false;

    while (digitalRead(buttonPin) == LOW);
  }

  lastButtonState = reading;
}