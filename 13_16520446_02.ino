#include <LiquidCrystal.h>
#define dw digitalWrite
#define dr digitalRead
#define aw analogWrite
#define ar analogRead
#define pm pinMode
#define sp Serial.print
#define spln Serial.println
#define dms delayMicroseconds
#define fl(dtype, var, start, end, step) for (dtype var = start; ((start < end) ? var < end : var > end); var+=step)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("PING Sensor");
}

void loop() {
  long dur, cm;
  pm(A1, OUTPUT);
  dw(A1, HIGH);
  dms(5);
  pm(A1, INPUT);
  dur = pulseIn(A1, HIGH);
  cm = mscm(dur);
  lcd.setCursor(0, 1);
  lcd.print("Jarak");
  lcd.setCursor(6,1);
  lcd.print(cm);
  lcd.print(" cm");
}

long mscm(long ms) {return ms/29/2;}