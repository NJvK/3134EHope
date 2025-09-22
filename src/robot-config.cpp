#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:

motor LeftFront = motor(PORT1, ratio6_1, false); 
motor LeftMiddle = motor (PORT2, ratio6_1, false); 
motor LeftBack = motor (PORT3, ratio6_1, false); 
motor RightFront = motor(PORT4, ratio6_1, false); 
motor RightMiddle = motor (PORT9, ratio6_1, false);
motor RightBack = motor (PORT6, ratio6_1, false);
motor LowwerRoller = motor (PORT7, ratio6_1, true);
motor UpperRoller = motor (PORT10, ratio6_1, false);
motor MiddleRoller = motor (PORT5, ratio6_1, false);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 320, 40, mm, 1);
controller Controller1 = controller(primary);
inertial Inertial = inertial(PORT21);

void vexcodeInit( void ) {
  // nothing to initialize
  Inertial.calibrate();
  while (Inertial.isCalibrating()) {
    wait(25, msec);
  }
}