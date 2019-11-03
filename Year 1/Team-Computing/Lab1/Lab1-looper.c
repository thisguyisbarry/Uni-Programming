//This program will allow the EV3 to drive in a circle

#pragma config(StandardModel, "EV3_REMBOT")

task main()
{
	int i = 0;

	for(i=0;i<360;i=i+10)
	{
		// Move forward at half power for 1.5 seconds
		setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
		setMotorSpeed(rightMotor, -50); 	//Set the rightMotor (motor6) to half power reverse (-50)
		sleep((3000/360)*i);			//turn a certain amount of degrees (increments of 36)

		setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
		setMotorSpeed(rightMotor, 50);//Set the rightMotor (motor6) to half power forward (50)
		sleep(200);			//Wait for 0.2 seconds before continuing on in the program.
	}






}
