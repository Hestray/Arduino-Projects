// general 
byte LEDstate = LOW;
byte switchState = LOW;
int LED           = 9;
int pushButton    = 8;

// for the fading LED
int brightness    = 0;
int fadeAmount    = 5;

// for the debounce mechanism
unsigned long debouncerTime = 150;
unsigned long time          = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(pushButton, INPUT);
}

void debounceExercise() {
  // this function tests the debounce mechanism
  // when the button is pressed and the state is HIGH, the message output will be 'Button is pressed'
  // otherwise, the output will be 'Button has been released.'
  if ((millis() - time) >= debouncerTime) {
    byte currentButtonState = digitalRead(pushButton); // read the state only when the bounce is gone
    time = millis();
    if (switchState != currentButtonState) {
      switchState = currentButtonState;
      if (currentButtonState == LOW) {
        Serial.println("Button has been released.");
      }
      else { Serial.println("Button is pressed."); }
    }
  }
}

void exercise1() {
  if (digitalRead(pushButton) == HIGH) {
    analogWrite(LED, brightness);
    brightness += fadeAmount;
    if (brightness >= 255 || brightness <= 0) {
      fadeAmount = -fadeAmount;
      brightness += fadeAmount;
    }
  }
  else
    analogWrite(LED, 0); // 0 means it will keep it turned off
  delay(10);
}

void exercise2() {
  if ((millis() - time) >= debouncerTime) {
    byte currentButtonState = digitalRead(pushButton);
    if (currentButtonState == HIGH) {
      time = millis();
      if (switchState == HIGH) switchState = LOW;
      else switchState = HIGH;
    }
  }

  if (switchState == HIGH) {
    analogWrite(LED, brightness);
    brightness += fadeAmount;
    if (brightness >= 255 || brightness <= 0) {
      fadeAmount = -fadeAmount;
      brightness += fadeAmount; // return to the last brightness that was ok
    }
    //Serial.println("Now I'm there");
  }
  else {
    analogWrite(LED, 0);
    //Serial.println("Hi im here");
  }
  
  delay(20);
}

void loop() {
  exercise2();
}
