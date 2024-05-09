int LED = 8;
int pushBUTTON = 7;
byte lastButtonState;
byte LEDstate = LOW;

// millis() is the current time in milliseconds
unsigned long lastTimeButtonStateChanged = millis();
unsigned long debounceDuration           = 50; // millis

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(pushBUTTON, INPUT);
  lastButtonState = digitalRead(pushBUTTON);
}

void exercise1() {
  // this will turn the LED on only when the button is pushed
  if (digitalRead(pushBUTTON) == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}

void exercise2() {
  // this will keep the LED on/off with just one button push
  byte currentButtonState = digitalRead(pushBUTTON);

  if (millis() - lastTimeButtonStateChanged >= debounceDuration) { // debounce mechanism
    if (lastButtonState != currentButtonState) {
        lastTimeButtonStateChanged  = millis();               // reset the current time it changed
        lastButtonState             = currentButtonState;     // reset the button state

        if (currentButtonState == LOW) {
          if (LEDstate == HIGH) {
            LEDstate  = LOW;
          }
          else {
            LEDstate  = HIGH;
          }
        }

        digitalWrite(LED, LEDstate);
    }
  }
}

void loop() {
  exercise2();
}
