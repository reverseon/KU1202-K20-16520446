#define dw digitalWrite
#define pm pinMode
#define sp Serial.print
#define spln Serial.println
#define dms delayMicroseconds

void setup(){
  Serial.begin(9600);
}

void loop() {
  long dur, cm;
  pm(7, OUTPUT);
  dw(7, HIGH);
  dms(5);
  pm(7, INPUT);
  dur = pulseIn(7, HIGH);
  cm = mscm(dur);
  sp(cm);
  spln("cm");
  delay(100);
}

long mscm(long ms) {return ms / 29 / 2;}