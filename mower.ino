#define PWMA_pin       3  // PWM for motor A
#define DIRA_pin       4  // motor DIRA

#include "Motor.h"

Motor motorLeft;

void setup() {
    Serial.begin(9600);

    Serial.println("Setup Motor left");
    motorLeft.initialize(PWMA_pin, DIRA_pin);

    Serial.println("setup end");
}

void loop() {
    Serial.println("Speed 123");
    motorLeft.setSpeed(123);

    delay(3000);

    Serial.println("Speed 255");
    motorLeft.setSpeed(255);

    delay(3000);

    Serial.println("Change direction, speed 123");
    motorLeft.setSpeed(123);
    motorLeft.setDirection(HIGH);

    delay(3000);

    Serial.println("Speed 255");
    motorLeft.setSpeed(255);

    delay(3000);
    Serial.println("Change direction");
    motorLeft.setDirection(LOW);
}
