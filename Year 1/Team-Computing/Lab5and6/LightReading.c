#pragma config(Sensor, S1,     Touch,          sensorEV3_Touch)
#pragma config(Sensor, S2,     ColourSensor,   sensorEV3_Color)
#pragma config(Motor,  motorA,           ,             tmotorEV3_Large, openLoop)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int lowBright = 0;
	int highBright = 0;
	int threshold = 0;

	while(!getButtonPress(buttonEnter))
	{

	displayCenteredBigTextLine(4, "Press enter - low");
	lowBright = SensorValue[S2];
	displayCenteredBigTextLine(4, "Low Reading: %d", lowBright);

	}

	while(getbuttonpress(buttonEnter));

	while(!getButtonPress(buttonEnter))
	{

		displayCenteredBigTextLine(4, "Press enter - high");
		highBright = SensorValue[S2];
		displayCenteredBigTextLine(4, "High Reading: %d", highBright);
	}

	while(getButtonPress(buttonEnter));

	while(!getButtonPress(buttonEnter))
	{
		threshold = (highBright + lowBright) / 2;
		//Display both readings
		displayCenteredBigTextLine(4, "Threshold = %d",threshold);
	}

}