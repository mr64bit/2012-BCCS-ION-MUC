task main()
{
	motor[motorC] = 50;
	motor[motorB] = 25;
 wait1Msec(750);

 	motor[motorC] = 45; //straight
 	motor[motorB] = 45;
 wait1Msec(800);

 	motor[motorC] = 10;
 	motor[motorB] = 42;
 wait1Msec(1100);

 motor[motorC] = 50;
 	motor[motorB] =50;
 wait1Msec(1400);

 motor[motorC] = 50;
	motor[motorB] = 20;
 wait1Msec(1200);

 motor[motorC] = 40;
	motor[motorB] = 50;
 wait1Msec(1300);
 }
