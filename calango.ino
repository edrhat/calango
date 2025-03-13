#include <VarSpeedServo.h>
VarSpeedServo motor;
VarSpeedServo motor2;

void setup(){

motor.attach(8);
motor2.attach(7);

}


void loop(){

int vel = 60;


//MOVIMENTO 1
motor.write(70,vel);
motor2.write(0,vel);
delay(500);

//MOVIMENTO 2
motor.write(0,vel);
motor2.write(70,vel);
delay(500);

}