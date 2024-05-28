#include "frequencies.h"
#include "songs.h"

int BUZZER = 9;

void setup() {
  Serial.begin(9600);
  Serial.println("");
  Serial.println("1. Lullaby");
  Serial.println("2. Silent Night");
  Serial.println("3. Summer (Calvin Harris)");
  Serial.println("4. Let it snow");
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  Serial.println("Choose song to play: ");
  while (Serial.available() == 0) {}

  int menuChoice = Serial.parseInt();
  switch(menuChoice) {
    case 1: lullaby(BUZZER); break;
    case 2: silentNight(BUZZER); break;
    case 3: summerCalvinHarris(BUZZER); break;
    case 4: letItSnow(BUZZER); break;
    default: Serial.println("Not a valid choice.");
  }
  delay(1000);
}
