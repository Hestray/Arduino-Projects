// This project uses a common anode 7 segment display;
// The variable STATE accepts LOW or HIGH value; LOW for anode connection, HIGH for cathode connection.
// If the values are set opposite of this, then it will simply just display 
// The configuration for the circuit can be found in the repository for this code.

int DP = 4;
int A = 5;
int B = 6;
int C = 7;
int D = 8;
int E = 9;
int F = 10;
int G = 11;
int i = 0;

void setup()
{
  pinMode(DP, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void clearDisplay(byte STATE) {
  digitalWrite(A, STATE);
  digitalWrite(B, STATE);
  digitalWrite(C, STATE);
  digitalWrite(D, STATE);
  digitalWrite(E, STATE);
  digitalWrite(F, STATE);
  digitalWrite(G, STATE);
  digitalWrite(DP, STATE);
}

void display(unsigned int digit, byte period, byte STATE) {
  // period and STATE accept only LOW or HIGH inputs
  digitalWrite(DP, period);

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
  byte state = LOW; // high for cathode, low for anode
  clearDisplay(!state);
  delay(500);
  if (i > 9) i = 0;
  display(i, LOW, state);
  delay(500);
  i++;
}