#include <Servo.h>
#define dw digitalWrite
#define dr digitalRead
#define aw analogWrite
#define ar analogRead
#define pm pinMode
#define sp Serial.print
#define spln Serial.println
#define dms delayMicroseconds
#define fl(dtype, var, start, end, step) for (dtype var = start; ((start < end) ? var < end : var > end); var+=step)
Servo servo_0;
const int servoPin = 7;
const int ledR_Pin = 2;
const int ledB_Pin = 3;
const int ledG_Pin = 4;
const int buzzPin = 8;
int pos = 0;

void setup() {
	pm(ledR_Pin, OUTPUT);
  	pm(ledB_Pin, OUTPUT);
  	pm(ledG_Pin, OUTPUT);
  	pm(buzzPin, OUTPUT);
  	servo_0.attach(servoPin);
  	servo_0.write(pos);
}

void loop() {
	tone(buzzPin, 523, 500);
  	dw(4, HIGH);
  	fl(int, pos, 0, 91, 1) {
  		servo_0.write(pos);
      	delay(15);
    }
  	delay(2000);
  	dw(4, LOW);
  	dw(2, HIGH);
  	fl(int, pos, 90, -1, -1) {
  		servo_0.write(pos);
      	delay(15);
    }
  	dw(4, HIGH);
  	delay(2000);
  	dw(2, LOW);
}