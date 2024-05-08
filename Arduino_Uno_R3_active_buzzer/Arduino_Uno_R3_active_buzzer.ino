int BUZZER = 9;
int BUTTON = 8;

byte buttonState;
unsigned long debounceDelay = 50;  // delay so as to avoid the bounce
unsigned long time          = 0;    // will hold the current time

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void checkButtonState(int BUZZERname, unsigned int FREQUENCY, byte buttonStateToCheck) {
  if (buttonStateToCheck == HIGH) { // if this instance, the button is still pressed
    tone(BUZZERname, FREQUENCY, 250); 
    delay(250);
  }
  else { // but if in this instance, the button is not pressed anymore
    time = millis();      // get the time when this ended
  }
}

void exercise1() {
  // this will sing Do major scale if the button is pressed continuously
  if ((millis() - time) >= debounceDelay) {
    checkButtonState(BUZZER, 261, digitalRead(BUTTON));
    checkButtonState(BUZZER, 293, digitalRead(BUTTON));
    checkButtonState(BUZZER, 329, digitalRead(BUTTON));
    checkButtonState(BUZZER, 349, digitalRead(BUTTON));
    checkButtonState(BUZZER, 392, digitalRead(BUTTON));
    checkButtonState(BUZZER, 440, digitalRead(BUTTON));
    checkButtonState(BUZZER, 493, digitalRead(BUTTON));
    checkButtonState(BUZZER, 523, digitalRead(BUTTON));

    noTone(BUZZER); // ends this pin's tone
    delay(20);
  }
}

void exercise2() {
  // this will sing the Do Major scale
  // the button acts as a switch (ON/OFF)
  if ((millis() - time) >= debounceDelay) {
    buttonState = digitalRead(BUTTON);
    if (buttonState == HIGH) {
      tone(BUZZER, 261);
      delay(500);
      tone(BUZZER, 293);
      delay(500);
      tone(BUZZER, 329);
      delay(500);
      tone(BUZZER, 349);
      delay(500);
      tone(BUZZER, 392);
      delay(500);
      tone(BUZZER, 440);
      delay(500);
      tone(BUZZER, 493);
      delay(500);
      tone(BUZZER, 523);
      delay(500);

      noTone(BUZZER);   // end this pin's tone
      delay(1000);      // 1 seconde delay
    }
  }
}

void loop() {
  exercise1();
}
