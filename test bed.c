#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main();

    //untilBump(bumpSwitch);
    //startMotor(rightMotor, 63);
    //wait(5);
    //stopMotor(rightMotor);

		//turnLEDOn(green);
    //untilPotentiometerGreaterThan(2048, potentiometer);
    //turnLEDOff(green);
    //startMotor(leftMotor, 63);
    //wait(3.5);
    //stopMotor(leftMotor);


     //startMotor(leftMotor, 63);
     //startMotor(rightMotor, 63);
     //untilEncoderCounts(480, quad);
     //stopMotor(leftMotor);
     //stopMotor(rightMotor);

     //setServo(servoMotor, 127);
     //untilLight(1425, lineFollower);
     //setServo(servoMotor, -127);
     //wait(2);}

    	{startMotor(leftMotor, 63);
    		startMotor(rightMotor, 63);
    		untilSonarLessThan(20, sonar);
    		stopMotor(leftMotor);
    		stopMotor(rightMotor);
    		turnLEDOn(green);
    		wait(6.25);
    		turnLEDOff(green);}
