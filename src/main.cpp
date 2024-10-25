#include <Arduino.h>

const int INPUT_PIN = A0;
const int OUTPUT_PIN = DD3;

double dt, last_time;
double integral, previous, output = 0;
double kp, ki, kd;
double setpoint = 75.00;

void setup() {
 
}

void loop() {
  
}

