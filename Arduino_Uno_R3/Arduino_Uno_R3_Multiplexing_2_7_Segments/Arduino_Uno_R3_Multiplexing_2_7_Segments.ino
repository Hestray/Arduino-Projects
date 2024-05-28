// This project uses a common anode 7 segment display;
// If using a common cathode one, then 
int GND1 = 4;
int GND2 = 5;
int A = 6;
int B = 7;
int C = 8;
int D = 9;
int E = 10;
int F = 12;
int G = 13;

void setup()
{
  Serial.begin(9600);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(GND1, OUTPUT);
  pinMode(GND2, OUTPUT);
}

void clearDisplay(byte STATE) {
  digitalWrite(A, STATE);
  digitalWrite(B, STATE);
  digitalWrite(C, STATE);
  digitalWrite(D, STATE);
  digitalWrite(E, STATE);
  digitalWrite(F, STATE);
  digitalWrite(G, STATE);
}

void display(int position, unsigned int digit, byte STATE) {
  clearDisplay(!STATE);
  if (position == 1) {
    digitalWrite(GND1, !STATE);	// left 7 seg active; LOW
    digitalWrite(GND2, STATE);
  } else {
    if (position == 2) {
        digitalWrite(GND1, STATE);
        digitalWrite(GND2, !STATE);	// right 7 seg active; LOW
      }
  }
  
    switch(digit) {
      case 1: {
        digitalWrite(B, STATE);
        digitalWrite(C, STATE);
        break;
      }

      case 2: {
        digitalWrite(A, STATE);
        digitalWrite(B, STATE);
        digitalWrite(G, STATE);
        digitalWrite(E, STATE);
        digitalWrite(D, STATE);
        break;
      }

      case 3: {
        digitalWrite(A, STATE);
        digitalWrite(B, STATE);
        digitalWrite(G, STATE);
        digitalWrite(C, STATE);
        digitalWrite(D, STATE);
        break;
      }

      case 4: {
        digitalWrite(F, STATE);
        digitalWrite(G, STATE);
        digitalWrite(B, STATE);
        digitalWrite(C, STATE);
        break;
      }

      case 5: {
        digitalWrite(A, STATE);
        digitalWrite(F, STATE);
        digitalWrite(G, STATE);
        digitalWrite(C, STATE);
        digitalWrite(D, STATE);
        break;
      }

      case 6: {
        digitalWrite(A, STATE);
        digitalWrite(F, STATE);
        digitalWrite(G, STATE);
        digitalWrite(C, STATE);
        digitalWrite(D, STATE);
        digitalWrite(E, STATE);
        break;
      }

      case 7: {
        digitalWrite(A, STATE);
        digitalWrite(B, STATE);
        digitalWrite(C, STATE);
        break;
      }

      case 8: {
        digitalWrite(A, STATE);
        digitalWrite(B, STATE);
        digitalWrite(C, STATE);
        digitalWrite(D, STATE);
        digitalWrite(E, STATE);
        digitalWrite(F, STATE);
        digitalWrite(G, STATE);
        break;
      }

      case 9: {
        digitalWrite(A, STATE);
        digitalWrite(B, STATE);
        digitalWrite(C, STATE);
        digitalWrite(D, STATE);
        digitalWrite(G, STATE);
        digitalWrite(F, STATE);
        break;
      }

      default: {
        digitalWrite(A, STATE);
        digitalWrite(B, STATE);
        digitalWrite(C, STATE);
        digitalWrite(D, STATE);
        digitalWrite(E, STATE);
        digitalWrite(F, STATE);
        // for 0 and any other number (that would not be a digit)
        break;
      }
    }
}
void loop()
{
  byte state = HIGH; // high for cathode, low for anode
  int value = 97;
  display(1, value / 10, state);
  delay(8); // 80 Hz, almost 'continuous' to the human eye
  display(2, value % 10, state);
  delay(8);
}