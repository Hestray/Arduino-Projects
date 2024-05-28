// defining pins
const int blueLED       = 9;
int LEDstate            = HIGH;
const int digitalSound  = 3;
const int analogSound   = A0;

// variables to adjust the brightness
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(digitalSound, OUTPUT);
  pinMode(analogSound, OUTPUT);
  pinMode(blueLED, OUTPUT);
  digitalWrite(blueLED, LEDstate);
}

void loop() {
  // Digitalpin 7 auslesen und bei LOW umschalten
  int     din = digitalRead(digitalSound);
  double  snd = analogRead(analogSound);
  Serial.println(snd);
  if (snd > 10) {
    LEDstate = !LEDstate;
    digitalWrite(blueLED, LEDstate);

    //double val = snd * 5 / 1024;
    //Serial.print("Value in V: ");
    //Serial.println(val);
  }
}