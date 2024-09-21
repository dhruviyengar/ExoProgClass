#include "robot-config.h"

pros::MotorGroup leftMotors({1, 2, 3}, pros::v5::MotorGears::blue); //defining left motors
pros::MotorGroup rightMotors({-4, -5, -6}, pros::v5::MotorGears::blue); //defining right motors. ports are negative because the motors are reversed

pros::Controller controller(pros::E_CONTROLLER_MASTER); //master means it is the primary controller, since you can have two controllers connected to the brain