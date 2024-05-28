int LM35 = A1;

void setup() {
  Serial.begin(9600);
  pinMode(LM35, INPUT);
  analogReference(INTERNAL);
}

void loop() {
  int value = analogRead(LM35);
  int temperature = value * 500 / 1024;
  Serial.print("Analog value: ");
  Serial.println(value);
  Serial.print("Temperature: ");
  Serial.println(temperature);
  delay(1000);
}
