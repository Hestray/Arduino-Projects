int blueLED       = 3;
int photoresistor = A0;

const int MIN_PHOTO_VAR   = 200; // complete brightness (artificial light & direct sunlight)
const int DAY_PHOTO_VAR   = 600; // threshold to recognise day time
const int NIGHT_PHOTO_VAR = 900; // threshold to recognise night time
const int MAX_PHOTO_VAR   = 1000; // complete darkness (night)

void setup() {
  pinMode(blueLED, OUTPUT);
  pinMode(photoresistor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int photoValue = analogRead(photoresistor);
  int ledVal = map(photoValue, MIN_PHOTOCELL_VAL, MAX_PHOTOCELL_VAL, 0, 255);

  // The map function does not constrain output outside of the provided range
  // so, we need to make sure that things are within range for the led
  ledVal = constrain(ledVal, 0, 255);

  if(PHOTOCELL_IS_R2_IN_VOLTAGE_DIVIDER == false){
    // We need to invert the LED (it should be brighter when environment is darker)
    // This assumes the photocell is Rtop in the voltage divider
    ledVal = 255 - ledVal;
  }

  // Print the raw photocell value and the converted led value (e,g., for Serial 
  // Console and Serial Plotter)
  Serial.print(photocellVal);
  Serial.print(",");
  Serial.println(ledVal);

  // Write out the LED value. 
  analogWrite(LED_OUTPUT_PIN, ledVal);

  delay(100); //read from the photocell ~10 times/sec
}
