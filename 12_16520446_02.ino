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
const int ledPin = 2;
int pos = 0;

void setup() {
  pm(ledPin, OUTPUT);
  servo_0.attach(servoPin);
  servo_0.write(pos);
}

void loop() {
  dw(2, HIGH);
  fl(int, pos, 0, 91, 1) {
    servo_0.write(pos);
    delay(15);
  }
  delay(2000);
  dw(2, LOW);
  fl(int, pos, 90, -1, -1) {
  	servo_0.write(pos);
    delay(15);
  }
  delay(2000);
}