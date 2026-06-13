#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(9600);
  servo1.attach(3);
  servo2.attach(5);

  gaNaarLocatie("HOME"); // startpositie
}

void loop() {
  if (Serial.available()) {
    String locatie = Serial.readStringUntil('\n');
    locatie.trim(); // verwijdert \r en spaties

    gaNaarLocatie(locatie);
  }
}

void gaNaarLocatie(String locatie) {
  int s1, s2;

  if (locatie == "HOME") {
    s1 = 90;
    s2 = 90;
  } 
  else if (locatie == "A") {
    s1 = 30;
    s2 = 120;
  } 
  else if (locatie == "B") {
    s1 = 150;
    s2 = 60;
  }
  else if (locatie == "C") {
    s1 = 60;
    s2 = 30;
  }
  else {
    Serial.println("❌ Onbekende locatie");
    return;
  }

  servo1.write(s1);
  servo2.write(s2);

  Serial.print("✅ Naar locatie ");
  Serial.print(locatie);
  Serial.print(" -> Servo1: ");
  Serial.print(s1);
  Serial.print(" | Servo2: ");
  Serial.println(s2);
}