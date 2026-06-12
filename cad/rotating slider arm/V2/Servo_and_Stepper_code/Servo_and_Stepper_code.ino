#include <Servo.h>
#include <Stepper.h>

// ===== SERVO =====
Servo servo1;
const int pot1Pin = A0;

// ===== STEPPER =====
const int stepsPerRevolution = 2048;

// BELANGRIJK: juiste volgorde!
Stepper myStepper(stepsPerRevolution, 9, 11, 8, 10);

const int pot2Pin = A1;

void setup() {
  Serial.begin(9600);

  servo1.attach(3);

  myStepper.setSpeed(10); // basis snelheid
}

void loop() {

  // ===== SERVO BESTURING =====
  int pot1Value = analogRead(pot1Pin);
  int servoAngle = map(pot1Value, 0, 1023, 0, 180);

  servo1.write(servoAngle);

  // ===== STEPPER BESTURING =====
  int pot2Value = analogRead(pot2Pin);

  int deviation = pot2Value - 512;

  if (abs(deviation) > 50) {  // deadzone

    int snelheid = map(abs(deviation), 50, 512, 5, 15);

    myStepper.setSpeed(snelheid);

    if (deviation > 0) {
      myStepper.step(10);   // rechts draaien
    } else {
      myStepper.step(-10);  // links draaien
    }
  }

  // ===== DEBUG =====
  Serial.print("Servo: ");
  Serial.print(servoAngle);
  Serial.print(" | Stepper potentio: ");
  Serial.println(pot2Value);
}