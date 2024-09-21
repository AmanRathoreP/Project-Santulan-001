#ifndef CONTROL_SYSTEM_H
#define CONTROL_SYSTEM_H

#include "constants.h"

#include <Arduino.h>

class PID
{
public:
    // input is angular velocity of stepper
    bool update(PID_requirements &); // return 0 if error occurs
};

#endif
