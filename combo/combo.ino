#include <Stepper.h>

const int Button = 3; // pin 3: input, reads the button value
const int LED = 2;    // pin 2: output for controlling the LED

// steps in the motor
const int stepsPerRevolution = 1024;

// stepsPerRevolution and pins
Stepper stepper_motor(stepsPerRevolution, 8, 10, 9, 11);

int ButtonValue = 0; // default value of the button

void setup() {
  pinMode(Button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // read the value of the button
  ButtonValue = digitalRead(Button);

  if (ButtonValue != 0) {
    stepper_motor.setSpeed(10);
    stepper_motor.step(stepsPerRevolution * 1.5);
    stepper_motor.step(-stepsPerRevolution * 1.5);
    stepper_motor.step(stepsPerRevolution * 1.5);
    stepper_motor.step(-stepsPerRevolution * 1.5);
    digitalWrite(LED, HIGH);
    delay(3000);
    digitalWrite(LED, LOW);
  }

  else {
    stepper_motor.setSpeed(15);
    stepper_motor.step(stepsPerRevolution * 1.5);
    stepper_motor.step(-stepsPerRevolution * 1.5);
    stepper_motor.step(stepsPerRevolution * 1.5);
    stepper_motor.step(-stepsPerRevolution * 1.5);
    digitalWrite(LED, HIGH);
    delay(3000);
    digitalWrite(LED, LOW);
  }
}
