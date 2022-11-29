#include <Stepper.h>

// steps in the motor
const int stepsPerRevolution = 1024;

// stepsPerRevolution and pins
Stepper stepper_motor(stepsPerRevolution, 8, 10, 9, 11);

void setup() { stepper_motor.setSpeed(10); }

void loop() {
  stepper_motor.step(stepsPerRevolution);
  delay(1000);

  stepper_motor.step(-stepsPerRevolution);
  delay(1000);
}
