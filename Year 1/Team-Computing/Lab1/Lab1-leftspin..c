/* This program will send the EV3 in a straight line before it spins in a circle to the left. 
*/ 

#pragma config(StandardModel, "EV3_REMBOT")
task main()
{

	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(1500);			//Wait for 1.5 seconds before continuing on in the program.

	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, -50); 	//Set the rightMotor (motor6) to half power reverse (-50)
	sleep(3000);			//Wait for 3 seconds before continuing on in the program







}
