const int photoresistor = A0;
const int blueLED		    = 9;
const int yellowLED		  = 10;

void setup()
{
  Serial.begin(9600);
  analogReference(DEFAULT);
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(photoresistor, INPUT);
}

void loop()
{
  int resistance = analogRead(photoresistor);
  
  // lots of light => less resistance, and vice versa
  Serial.println(resistance);
  if (resistance > 10 && resistance < 70) {
  	analogWrite(yellowLED, 127);
    analogWrite(blueLED, 127); }
  else {
    if (resistance >= 60) {
    	analogWrite(blueLED, 255);
      analogWrite(yellowLED, 0);
    } else {
      analogWrite(blueLED, 0);
      analogWrite(yellowLED, 255); 
    }
  }
  delay(4);
}