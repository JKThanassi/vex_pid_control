#pragma config(Sensor, in1,    llineFollower,  sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  encoderLower,   sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ultraIn,        sensorSONAR_mm)
#pragma config(Sensor, dgtl11, greenLED,       sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           motorLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           motorRight,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           servo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void adjustMotorWithSonar(){

	motor[port4] = 0;
		motor[port4] = SensorValue(encoderLower);
		turnLEDOff(greenLED);
		motor[motorLeft] = SensorValue(ultraIn)-150;
	}

	void encoderTest(){
		while (SensorValue[encoderLower] < 3000){
			motor[motorRight] = -127;
		}
	}

	bool doubleButtonPressActivation(bool buttonState){
		if(buttonState){
			buttonState = false;
		}
		if(!buttonState){
			buttonState = true;
		}
		return buttonState;
	}

	task main(){
		turnLEDOn(greenLED);
		//while(true){
			//adjustMotorWithSonar();
		//}
		//motor[port4] = 0;
		//motor[motorLeft] = 0;
		while (true) {
			encoderTest)()
		}


}
