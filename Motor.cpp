#include "Motor.h"
#include "Arduino.h"

Motor::Motor()
    : m_pwm(0)
    , m_dir(0)
{
}

Motor::~Motor()
{
}

void Motor::initialize(int pwm, int dir)
{
    m_pwm = pwm;
    m_dir = dir;

    pinMode(m_pwm, OUTPUT);
    pinMode(m_dir, OUTPUT);

    digitalWrite(m_dir, LOW);
    analogWrite(m_pwm, 0);
}

void Motor::setDirection(int dir)
{
    digitalWrite(m_dir, dir);
}

void Motor::setSpeed(int value)
{
    analogWrite(m_pwm, value);
}
