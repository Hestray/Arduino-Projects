const int hot   = 28;   // set hot parameter
const int cold  = 15;   // set cold parameter
int       ok = 0;
double    avg = 0;

void setup() {
  pinMode(A1, INPUT);   // sensor
  pinMode(2, OUTPUT);   // blue
  pinMode(3, OUTPUT);   // green
  pinMode(4, OUTPUT);   // yellow
  analogReference(DEFAULT);
  Serial.begin(9600);
}

void loop() {
  // calculating temperature 
  int   sensor  = analogRead(A1);
  float voltage = (sensor / 1024.0) * 5.0;
  float tempC   = voltage * 100;

  // getting the average of temperatures
  if (ok != 100) {
    avg += tempC;
    ok++;
  } else {
    avg /= 100;
    Serial.print("temp: ");
    Serial.print(avg);

    // indicators
    if (avg < cold) { // cold
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      Serial.println(" It's Cold.");
    }
    else if (avg >= hot) { // hot
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      Serial.println(" It's Hot.");
    }
    else { // fine
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      Serial.println(" It's Fine.");
    }
    avg   = 0;
    ok    = 0;
  }

  delay(2);
}
