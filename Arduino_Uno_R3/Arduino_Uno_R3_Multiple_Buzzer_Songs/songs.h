void scaleCMajor(byte BUZZER) {
  tone(BUZZER, C);
  delay(500);
  tone(BUZZER, D);
  delay(500);
  tone(BUZZER, E);
  delay(500);
  tone(BUZZER, F);
  delay(500);
  tone(BUZZER, G);
  delay(500);
  tone(BUZZER, A);
  delay(500);
  tone(BUZZER, B);
  delay(500);
  tone(BUZZER, C2);
  delay(500);
  noTone(BUZZER);
}

void lullaby(byte BUZZER) {
  // this function will sing the lullaby
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(250);
  tone(BUZZER, Asharp);
  delay(740);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, Asharp);
  delay(500);
  noTone(BUZZER);
  delay(500);
  tone(BUZZER, G);
  delay(250);
  tone(BUZZER, Asharp);
  delay(250);
  tone(BUZZER, D2sharp);
  delay(500);
  tone(BUZZER, D2);
  delay(740);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, C2);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, C2);
  delay(500);
  tone(BUZZER, Asharp);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, F);
  delay(250);
  tone(BUZZER, G);
  delay(250);
  tone(BUZZER, Gsharp);
  delay(985);
  noTone(BUZZER);
  delay(15);
  tone(BUZZER, F);
  delay(250);
  tone(BUZZER, G);
  delay(250);
  tone(BUZZER, Gsharp);
  delay(985);
  noTone(BUZZER);
  delay(15);
  tone(BUZZER, F);
  delay(250);
  tone(BUZZER, Gsharp);
  delay(250);
  tone(BUZZER, D2);
  delay(250);
  tone(BUZZER, C2);
  delay(250);
  tone(BUZZER, Asharp);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, D2);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, D2sharp);
  delay(1000);

  // end song
  noTone(BUZZER);
}

void summerCalvinHarris(byte BUZZER) {
  // this function will play Summer by Calvin Harris
  // 1
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(250);
  tone(BUZZER, A);
  delay(250);
  tone(BUZZER, G);
  delay(250);
  // 2
  tone(BUZZER, B2);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, B2);
  delay(700);
  noTone(BUZZER);
  delay(50);
  tone(BUZZER, G);
  delay(500);
  tone(BUZZER, G2);
  delay(490);
  noTone(BUZZER);
  delay(10);
  // 3
  tone(BUZZER, G2);
  delay(400);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D);
  delay(250);
  tone(BUZZER, A);
  delay(500);
  tone(BUZZER, G);
  delay(500);
  // 4
  tone(BUZZER, E);
  delay(250);
  tone(BUZZER, D);
  delay(700);
  noTone(BUZZER);
  delay(50);
  tone(BUZZER, C);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, B2);
  delay(500);
  // 5
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(485);
  noTone(BUZZER);
  delay(15);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, B2);
  delay(126);
  noTone(BUZZER);
  delay(1);
  tone(BUZZER, A);
  delay(126);
  // 6
  tone(BUZZER, B2);
  delay(500);
  tone(BUZZER, E2);
  delay(490);
  noTone(10);
  tone(BUZZER, G2);
  delay(450);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G2);
  delay(400);
  noTone(BUZZER);
  delay(50);
  // 7
  tone(BUZZER, F2sharp);
  delay(400);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, A);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  // 8
  tone(BUZZER, G);
  delay(485);
  noTone(BUZZER);
  delay(15);
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, B2);
  delay(485);
  noTone(BUZZER);
  delay(15);
  tone(BUZZER, B2);
  // 9
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D);
  delay(250);
  tone(BUZZER, B2);
  delay(250);
  tone(BUZZER, D2);
  delay(250);
  tone(BUZZER, B2);
  delay(250);
  tone(BUZZER, A);
  delay(250);
  // 10
  tone(BUZZER, G);
  delay(250);
  tone(BUZZER, E);
  delay(240);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, E);
  delay(250);
  tone(BUZZER, D);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, D);
  delay(485);
  noTone(BUZZER);
  delay(15);
  // 11
  tone(BUZZER, D);
  delay(475);
  noTone(BUZZER);
  delay(25);
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D);
  delay(240);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, A);
  delay(500);
  // 12
  tone(BUZZER, Asharp);
  delay(250);
  tone(BUZZER, A);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, A);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, B2);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, B2);
  delay(500);
  // 13
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, B2);
  delay(500);
  tone(BUZZER, G);
  delay(475);
  noTone(BUZZER);
  delay(25);
  // 14
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(240);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, A);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, A);
  delay(490);
  noTone(BUZZER);
  delay(10);
  // 15
  tone(BUZZER, A);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, D);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D);
  delay(250);
  tone(BUZZER, A);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  // 16 last
  tone(BUZZER, G);
  delay(485);
  noTone(BUZZER);
  delay(15);
  tone(BUZZER, G);
  delay(400);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, B2);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, B2);
  delay(500);

  tone(BUZZER, G);
  delay(400);
  noTone(BUZZER);
  delay(100);

  // this will end the song
  noTone(BUZZER);
}

void silentNight(byte BUZZER) {
  // this function will play Silent Night
  // 1
  tone(BUZZER, G);
  delay(750);
  tone(BUZZER, A);
  delay(250);
  tone(BUZZER, G);
  delay(500);
  // 2
  tone(BUZZER, E);
  delay(1450);
  noTone(BUZZER);
  delay(50);
  // 3
  tone(BUZZER, G);
  delay(750);
  tone(BUZZER, A);
  delay(250);
  tone(BUZZER, G);
  delay(450);
  noTone(BUZZER);
  delay(50);
  // 4
  tone(BUZZER, E);
  delay(1450);
  noTone(BUZZER);
  delay(50);
  // 5
  tone(BUZZER, D2);
  delay(950);
  noTone(BUZZER);
  delay(50);
  tone(BUZZER, D2);
  delay(500);
  // 6
  tone(BUZZER, B2);
  delay(1450);
  noTone(BUZZER);
  delay(50);
  // 7
  tone(BUZZER, C2);
  delay(900);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, C2);
  delay(500);
  // 8
  tone(BUZZER, G);
  delay(1500);
  // 9
  tone(BUZZER, A);
  delay(900);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, A);
  delay(500);
  // 10
  tone(BUZZER, C2);
  delay(750);
  tone(BUZZER, B2);
  delay(250);
  tone(BUZZER, A);
  delay(500);
  // 11
  tone(BUZZER, G);
  delay(750);
  tone(BUZZER, A);
  delay(250);
  tone(BUZZER, G);
  delay(500);
  // 12
  tone(BUZZER, E);
  delay(1450);
  noTone(BUZZER);
  delay(50);
  // 13
  tone(BUZZER, A);
  delay(900);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, A);
  delay(500);
  // 14
  tone(BUZZER, C2);
  delay(750);
  tone(BUZZER, B2);
  delay(250);
  tone(BUZZER, A);
  delay(500);
  // 15
  tone(BUZZER, G);
  delay(750);
  tone(BUZZER, A);
  delay(250);
  tone(BUZZER, G);
  delay(500);
  // 16
  tone(BUZZER, E);
  delay(1450);
  noTone(BUZZER);
  delay(50);
  // 17
  tone(BUZZER, D2);
  delay(900);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, D2);
  delay(500);
  // 18
  tone(BUZZER, F2);
  delay(750);
  tone(BUZZER, D2);
  delay(250);
  tone(BUZZER, B2);
  delay(500);
  // 19
  tone(BUZZER, C2);
  delay(1500);
  // 20
  tone(BUZZER, E2);
  delay(1450);
  noTone(BUZZER);
  delay(50);
  // 21
  tone(BUZZER, C2);
  delay(500);
  tone(BUZZER, G);
  delay(500);
  tone(BUZZER, E);
  delay(500);
  // 22
  tone(BUZZER, G);
  delay(750);
  tone(BUZZER, F);
  delay(250);
  tone(BUZZER, D);
  delay(500);
  // 23
  tone(BUZZER, C);
  delay(750);
  noTone(BUZZER);
  delay(750);

  // this will end the song
  noTone(BUZZER);
}

void letItSnow(byte BUZZER) {
  // this function will play the carol Let it snow
  // 1
  tone(BUZZER, C);
  delay(500);
  // 2
  tone(BUZZER, C2);
  delay(245);
  noTone(BUZZER);
  tone(BUZZER, C2);
  delay(250);
  tone(BUZZER, Asharp);
  delay(500);
  tone(BUZZER, A);
  delay(500);
  tone(BUZZER, G);
  delay(500);
  // 3
  tone(BUZZER, F);
  delay(500);
  tone(BUZZER, C);
  delay(900);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, C);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, C);
  delay(250);
  // 4
  tone(BUZZER, G);
  delay(500);
  tone(BUZZER, C);
  delay(325);
  tone(BUZZER, F);
  delay(125);
  tone(BUZZER, G);
  delay(320);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(125);
  tone(BUZZER, B);
  delay(325);
  tone(BUZZER, F);
  delay(125);
  // 5
  tone(BUZZER, E);
  delay(500);
  tone(BUZZER, C);
  delay(400);
  noTone(BUZZER);
  delay(600);
  tone(BUZZER, D);
  delay(500);
  // 6
  tone(BUZZER, D2);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D2);
  delay(250);
  tone(BUZZER, C2);
  delay(500);
  tone(BUZZER, Asharp);
  delay(500);
  tone(BUZZER, A);
  delay(500);
  // 7
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, Csharp);
  delay(325);
  tone(BUZZER, D);
  delay(125);
  tone(BUZZER, LG);
  delay(500);
  tone(BUZZER, E2);
  delay(325);
  tone(BUZZER, D2);
  delay(125);
  // 8
  tone(BUZZER, C2);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, C2);
  delay(325);
  tone(BUZZER, Asharp);
  delay(125);
  tone(BUZZER, A);
  delay(500);
  tone(BUZZER, A);
  delay(325);
  tone(BUZZER, G);
  delay(125);
  // 9
  tone(BUZZER, F);
  delay(900);
  noTone(BUZZER);
  delay(600);
  tone(BUZZER, C);
  delay(500);
  // 10
  tone(BUZZER, C2);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, C2);
  delay(250);
  tone(BUZZER, Asharp);
  delay(500);
  tone(BUZZER, A);
  delay(500);
  tone(BUZZER, G);
  delay(500);
  // 11
  tone(BUZZER, F);
  delay(500);
  tone(BUZZER, C);
  delay(900);
  noTone(BUZZER);
  delay(100);
  tone(BUZZER, C);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, C);
  delay(250);
  // 12
  tone(BUZZER, G);
  delay(500);
  tone(BUZZER, C);
  delay(325);
  tone(BUZZER, F);
  delay(125);
  tone(BUZZER, G);
  delay(320);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, G);
  delay(125);
  tone(BUZZER, B);
  delay(325);
  tone(BUZZER, F);
  delay(125);
  // 13
  tone(BUZZER, E);
  delay(500);
  tone(BUZZER, C);
  delay(450);
  noTone(BUZZER);
  delay(550);
  tone(BUZZER, D);
  delay(500);
  // 14
  tone(BUZZER, D2);
  delay(245);
  noTone(BUZZER);
  delay(5);
  tone(BUZZER, D2);
  delay(250);
  tone(BUZZER, C2);
  delay(500);
  tone(BUZZER, Asharp);
  delay(500);
  tone(BUZZER, A);
  delay(500);
  // 15
  tone(BUZZER, G);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, Csharp);
  delay(325);
  tone(BUZZER, D);
  delay(125);
  tone(BUZZER, LG);
  delay(500);
  tone(BUZZER, E2);
  delay(325);
  tone(BUZZER, D2);
  delay(125);
  // 16
  tone(BUZZER, C2);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, C2);
  delay(325);
  tone(BUZZER, Asharp);
  delay(125);
  tone(BUZZER, A);
  delay(490);
  noTone(BUZZER);
  delay(10);
  tone(BUZZER, A);
  delay(325);
  tone(BUZZER, G);
  delay(125);
  // 17 last
  tone(BUZZER, F);
  delay(900);
  noTone(BUZZER);
  delay(600);

  // this will end the song
  noTone(BUZZER);
}