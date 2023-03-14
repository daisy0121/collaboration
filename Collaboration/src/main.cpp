/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       robots20                                                  */
/*    Created:      Tue Mar 14 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

controller ctrl;
motor f_Right(PORT10,true);
motor b_Right(PORT20,true);
motor f_Left(PORT12);
motor b_Left(PORT3);
motor_group c_left (f_Left,b_Left);
motor_group c_right (f_Right,b_Right);
competition cmp;





void auton() {
   c_left.spin(directionType::fwd, 100, velocityUnits::pct);
   c_right.spin(directionType::fwd, 100, velocityUnits::pct);
   task::sleep(5000);


   c_left.spin(directionType::fwd, 100, velocityUnits::pct);
   c_right.spin(directionType::fwd, -100, velocityUnits::pct);
   task::sleep(3000);


   c_left.stop();
   c_right.stop();
}





int main(){

  vexcodeInit();
  cmp.autonomous(auton);








}
