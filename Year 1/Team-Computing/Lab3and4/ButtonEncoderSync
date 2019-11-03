#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colourSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)


void drive(long nMotorRatio, long dist, long power)
{
	setMotorSyncEncoder(leftMotor, rightMotor, nMotorRatio, dist, power);

	//This won't allow the program to continue until the robot stops
	waitUntilMotorStop(motorB);
}

task main()
{
	// Use this if you want to use the back button as well
  // Not advisable.
	// setBlockBackButton(true);
	int a;

	displayCenteredTextLine(1, "Pressed button:");
	// Loop forever
	while (true)
	{
		
		if (getButtonPress(buttonUp))
		{
			
			a = random(100);
			drive(0, 220, a); //drive 10 cm
			displayCenteredBigTextLine(4, "10cm");
		}
		else if (getButtonPress(buttonDown))
		{
			a = random(100);
			drive(0, 1320, a); // drive 60cm
			displayCenteredBigTextLine(4, "40cm");
		}
		else if (getButtonPress(buttonRight))
		{
			a = random(100);
			drive(0, 880, a); // drive 40 cm
			displayCenteredBigTextLine(4, "60cm");
		}
		else if (getButtonPress(buttonLeft))
		{
			a = random(100);
			drive(0, 1760, a); // drive 80 cm
			displayCenteredBigTextLine(4, "80cm");
		}	
		else
		{
			displayCenteredBigTextLine(4, "Nah"); // terminates I guess
		}

		// Wait 20 ms, this gives us 50 readings per second
		sleep(20);
	}
	return;
}