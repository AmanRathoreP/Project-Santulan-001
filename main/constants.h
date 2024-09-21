#pragma once

#define CALC_VALS_EVERY__SEC 10 // FPS or delay(milliseconds) after every pid calc

#define motor_1_speed_pin 3
#define motor_1_terminal_1_pin 5
#define motor_1_terminal_2_pin 4

// here output is input of stepper motor
struct PID_requirements
{
    const float kp = 7987;
    const float kd = 7471;
    const float ki = 44772.45f;
    const float desired_angle = 9.77f;
    float current_angle = 454.77f;
    float error = 0;
    float integral_error = 0;
    float error_last = 0;
    float derivative_error = 0;
    float output = 0;
};