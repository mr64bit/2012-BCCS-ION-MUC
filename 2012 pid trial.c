task main()
{

nMotorPIDSpeedCtrl[motorC] = mtrSpeedReg;
nMotorPIDSpeedCtrl[motorB] = mtrSpeedReg;

	motor[motorC] = 50;
	motor[motorB] = 50;
 wait1Msec(30000);


 }
