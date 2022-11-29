int ButtonValue = 0; // default value of the button
int Button = 3;      // pin 3: input, reads the button value
int LED = 2;         // pin 2: output for controlling the LED

void setup() {
  pinMode(Button, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // read the value of the button
  ButtonValue = digitalRead(Button);

  if (ButtonValue != 0) {
    // if not zero, turn the LED on
    digitalWrite(LED, HIGH);
  }

  else {
    // else turn it false
    digitalWrite(LED, LOW);
  }
}
