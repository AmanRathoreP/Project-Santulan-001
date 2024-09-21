#include "control_system.h"

// returns 0 if error occurs
bool PID::update(PID_requirements &pid_vars)
{
    pid_vars.error = pid_vars.desired_angle - pid_vars.current_angle;
    pid_vars.derivative_error = (pid_vars.error - pid_vars.error_last) / CALC_VALS_EVERY__SEC;
    pid_vars.error_last = pid_vars.error;
    pid_vars.output = (pid_vars.kp * pid_vars.error) + (pid_vars.ki * pid_vars.integral_error) + (pid_vars.kd * pid_vars.derivative_error);

    return true;
}
