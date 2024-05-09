// pins
int LEDblo = 4;
int LEDred = 7;
int button = 8;
int buzzer = 9;

// debounce mechanism
unsigned long debounceDelay = 50;
unsigned long currentTime   = 0;

// 
byte currentState;

void setup() {
  pinMode(LEDred, OUTPUT);
  pinMode(LEDblo, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

void checkTune(int buzzerName, unsigned int frequency, byte buttonState) {
  if (buttonState == HIGH) {
    tone(buzzerName, frequency, 150);
  }
  else {
    noTone(buzzerName);
    currentTime = millis();
  }
}

void lightLED(unsigned int frequency, byte buttonState) {
  if (buttonState == HIGH) {
    if (frequency % 2 == 0) {
      digitalWrite(LEDred, HIGH); 
      digitalWrite(LEDblo, LOW);
    }
    else {
      digitalWrite(LEDblo, HIGH); 
      digitalWrite(LEDred, LOW);
    }
  }
  else {
    digitalWrite(LEDred, LOW);
    digitalWrite(LEDblo, LOW);
  }
}

void lightOnTune(int buzzerName, unsigned int frequency, byte buttonState) {
  checkTune(buzzer, frequency, buttonState);
  lightLED(frequency, buttonState);
  delay(150);
  lightLED(frequency, LOW);
  delay(200);
}

void loop() {
  if ((currentTime - millis()) >= debounceDelay) {
    currentState = digitalRead(button);
    if (currentState == HIGH) {
      lightOnTune(buzzer, 261, currentState);
      lightOnTune(buzzer, 277, currentState);
      lightOnTune(buzzer, 293, currentState);
      lightOnTune(buzzer, 311, currentState);
      lightOnTune(buzzer, 329, currentState);
      lightOnTune(buzzer, 349, currentState);
      lightOnTune(buzzer, 370, currentState);
      lightOnTune(buzzer, 392, currentState);
      lightOnTune(buzzer, 415, currentState);
      lightOnTune(buzzer, 440, currentState);
      lightOnTune(buzzer, 466, currentState);
      lightOnTune(buzzer, 493, currentState);
      lightOnTune(buzzer, 523, currentState);
      delay(1000);

      digitalWrite(LEDred, LOW);
      digitalWrite(LEDblo, LOW);
      noTone(buzzer);
      delay(500);
    }
  }
}
