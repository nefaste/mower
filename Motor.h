#ifndef _MOTOR_H_
#define _MOTOR_H_

class Motor
{
public:
    Motor();
    ~Motor();

    void initialize(int pwm, int dir);

    void setDirection(int dir);
    void setSpeed(int value);
private:
    int m_pwm;
    int m_dir;
};

#endif // _MOTOR_H_
