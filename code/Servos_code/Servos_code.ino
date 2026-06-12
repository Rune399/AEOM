#include <Servo.h>

Servo servo1;
Servo servo2;

const int pot1Pin = A0;
const int pot2Pin = A1;

int pot1Value;
int pot2Value;

int servo1Angle;
int servo2Angle;

void setup() {
  Serial.begin(9600);

  servo1.attach(3);
  servo2.attach(5);
}

void loop() {
  // Lees potmeters
  pot1Value = analogRead(pot1Pin);
  pot2Value = analogRead(pot2Pin);

  // Zet om naar servohoeken
  servo1Angle = map(pot1Value, 0, 1023, 0, 180);
  servo2Angle = map(pot2Value, 0, 1023, 0, 180);

  // Beweeg servo’s
  servo1.write(servo1Angle);
  servo2.write(servo2Angle);

  // Debug output
  Serial.print("Servo 1: ");
  Serial.print(servo1Angle);
  Serial.print("° | Servo 2: ");
  Serial.print(servo2Angle);
  Serial.println("°");

  delay(10);
}
