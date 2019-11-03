//This program will send the robot in a straight line before it turns back
//and returned to the point of origin.

#pragma config(StandardModel, "EV3_REMBOT")

task main()
{
	setMotorSpeed(leftMotor, 100);	//Set the leftMotor (motor1) to half power forward (100)
	setMotorSpeed(rightMotor, 100); //Set the rightMotor (motor6) to half power forward (100)
	sleep(5000);					//Wait for 5 seconds before continuing on in the program.
	
	
	//turn 180 degrees
	setMotorSpeed(leftMotor, 100);	 //Set the leftMotor (motor1) to full power forward (100)
	setMotorSpeed(rightMotor, -100); //Set the rightMotor (motor6) to full power reverse (-100)
	sleep(1500);					 //Wait for 1.5 seconds before continuing on in the program.

	setMotorSpeed(leftMotor, 100);	//Set the leftMotor (motor1) to half power forward (100)
	setMotorSpeed(rightMotor, 100); //Set the rightMotor (motor6) to half power forward (100)
	sleep(5000);					//Wait for 5 seconds before continuing on in the program.


}
