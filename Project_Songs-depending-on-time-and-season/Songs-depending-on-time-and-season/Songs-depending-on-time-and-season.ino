/* 
// Project realized by Barzan Emma @ 2024.
//
// For more details about the project, check out https://github.com/Hestray/Arduino-Projects 
// (in the folder entitled Project_Songs-depending-on-time-and-season)
*/

// include the files that contain the songs & note frequencies
#include "frequencies.h"
#include "songs.h"

// PINS DEFINITIONS
// const int GND1      = 2;  // left side 7 segment
// const int GND2      = 4;  // right side 7 segment
const int blueLED   = 3;
const int yellowLED = 5;
const int BUZZER    = 6;
const int BUTTON    = 8; // out of pins lol :( this will act as digital pin
const int LDR       = A1;
const int LM35      = A0;
// 7 segment digit pins     //               A          //
// const int A_pin = 7;        //            _ _ _ _       //
// const int B_pin = 8;        //           /      /       //
// const int C_pin = 9;        //      G   /  H   /   B    //  DIAGRAM OF 7 SEGMENT 
// const int D_pin = 10;       //         /_ _ _ /         //  CAN BE FOUND WITHIN
// const int E_pin = 11;       //        /      /          //      THE FOLDER
// const int F_pin = 12;       //    F  /      /   C       //
// const int G_pin = 13;       //      /_ _ _ /            //
                            //         D                //

// variables to use in the code
int    tempThreshold  = 15;       // Celsius
double avgTemp        = 0;
int    lessLight      = 15;       // digital values
int    moreLight      = 75;
int    songNumber     = 0;        // 1 = lullaby, 2 = Silent night, 3 = Summer, 4 = Let it snow
String weather        = "hot";
int    ok 		        = 0;
unsigned long currTime 	 	  = 0;  // ms
unsigned long debounceDelay = 50; // ms
unsigned long tempTime 	 	  = 0;  // ms
unsigned long tempDelay 	  = 1000;  // ms

// set up
void setup()
{
  Serial.begin(9600);
  // components
  pinMode(blueLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  // sensors & button
  pinMode(LDR, INPUT);
  pinMode(LM35, INPUT);
  analogReference(DEFAULT);
  pinMode(BUTTON, INPUT);
  // 7 segment grounds
  // pinMode(GND1, OUTPUT);
  // pinMode(GND2, OUTPUT);
  // 7 segment digit pins
  // pinMode(A_pin, OUTPUT);
  // pinMode(B_pin, OUTPUT);
  // pinMode(C_pin, OUTPUT);
  // pinMode(D_pin, OUTPUT);
  // pinMode(E_pin, OUTPUT);
  // pinMode(F_pin, OUTPUT);
  // pinMode(G_pin, OUTPUT);
  // take the time the board started running this program
  currTime = millis();
  // add a new row to Serial Monitor
  Serial.println("");
}

// void clearDisplay(byte STATE) { // clears the display & helps with reseting it
//   digitalWrite(A_pin, STATE);
//   digitalWrite(B_pin, STATE);
//   digitalWrite(C_pin, STATE);
//   digitalWrite(D_pin, STATE);
//   digitalWrite(E_pin, STATE);
//   digitalWrite(F_pin, STATE);
//   digitalWrite(G_pin, STATE);
// }

// void display(int position, unsigned int digit, byte STATE) {
//   clearDisplay(!STATE);
//   if (position == 1) {
//     digitalWrite(GND1, !STATE);	// left 7 seg active; LOW
//     digitalWrite(GND2, STATE);
//   } else {
//     if (position == 2) {
//         digitalWrite(GND1, STATE);
//         digitalWrite(GND2, !STATE);	// right 7 seg active; LOW
//       }
//   }
  
//     switch(digit) {
//       case 1: {
//         digitalWrite(B_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         break;
//       }

//       case 2: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         digitalWrite(E_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         break;
//       }

//       case 3: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         break;
//       }

//       case 4: {
//         digitalWrite(F_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         break;
//       }

//       case 5: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(F_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         break;
//       }

//       case 6: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(F_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         digitalWrite(E_pin, STATE);
//         break;
//       }

//       case 7: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         break;
//       }

//       case 8: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         digitalWrite(E_pin, STATE);
//         digitalWrite(F_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         break;
//       }

//       case 9: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         digitalWrite(G_pin, STATE);
//         digitalWrite(F_pin, STATE);
//         break;
//       }

//       default: {
//         digitalWrite(A_pin, STATE);
//         digitalWrite(B_pin, STATE);
//         digitalWrite(C_pin, STATE);
//         digitalWrite(D_pin, STATE);
//         digitalWrite(E_pin, STATE);
//         digitalWrite(F_pin, STATE);
//         // for 0 and any other number (that would not be a digit)
//         break;
//       }
//     }
// }
void loop()
{
  byte state = HIGH; // high for cathode, low for anode
  int value = analogRead(LM35);
  double currTemp = (value * 500.0)/ 1024.0;
   // getting the average of temperatures
  if (ok != 100) {
    avgTemp += currTemp;
    ok++;
  } else {
    // if ((millis() - tempTime) > tempDelay) {
    //   tempTime = millis();
      avgTemp /= 100;
      // check for weather change
      if (avgTemp <= tempThreshold && weather.compareTo("hot") == 0) {
        // if the temp passed the threshold and before weather is different
        Serial.print("SEASON: ");
        weather.replace(weather, "cold");
        Serial.println(weather);
      } else { 
        if (avgTemp > tempThreshold && weather.compareTo("cold") == 0) {
          Serial.print("SEASON: ");
          weather.replace(weather, "hot"); 
          Serial.println(weather);
        }
      }
      Serial.print("Temp: ");
      Serial.println(avgTemp);
      // display the temperature
      // display(1, (int)round(floor(avgTemp)) / 10, state);
      // delay(5); // 100 Hz
      // display(2, (int)round(floor(avgTemp)) % 10, state);
      // delay(5);
      avgTemp = 0;
      ok = 0;
    // }
  }
  
  
  //handling the light level
  int resistance = analogRead(LDR);
  if (resistance > lessLight && resistance < moreLight) {
    // dimlight
  	analogWrite(yellowLED, 127);
    analogWrite(blueLED, 127); 
  	songNumber = 0;
  }
  else {
    if (resistance >= moreLight) {
      // daytime
      analogWrite(yellowLED, 255);
      analogWrite(blueLED, 0);
      if (weather.compareTo("hot") == 0) {
        songNumber = 3; // hot & day
      } else {
        songNumber = 4; // cold & day
      }
    } else {
      // night
      analogWrite(yellowLED, 0);
      analogWrite(blueLED, 255);
      if (weather.compareTo("hot") == 0) {
        songNumber = 1; // hot & night
      } else {
        songNumber = 2; // cold & night
      }
    }
  }
  
  // press the button and play the song
  if ((millis() - currTime) >= debounceDelay) {
    if (digitalRead(BUTTON) == HIGH) {
      currTime = millis();
      switch(songNumber) {
        case 0: scaleCMajor(BUZZER); break;
        case 1: lullaby(BUZZER); break;
        case 2: silentNight(BUZZER); break;
        case 3: summerCalvinHarris(BUZZER); break;
        case 4: letItSnow(BUZZER); break;
        default: Serial.println("Invalid."); // should never reach
      }
    }
  }
}