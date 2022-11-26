#include <Stepper.h>

// steps in the motor
const int stepsPerRevolution = 1024;

// stepsPerRevolution and pins
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() { myStepper.setSpeed(10); }

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(1000);

  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
