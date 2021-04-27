#define dw digitalWrite
#define dr digitalRead
#define aw analogWrite
#define ar analogRead
#define pm pinMode
#define sp Serial.print
#define spln Serial.println
#define dms delayMicroseconds

int npnPin = 7;
const int buzzPin = 8;

void setup()
{
  pm(npnPin, OUTPUT);
  pm(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	pm(npnPin, OUTPUT);
 	spln("Start");
	dw(npnPin, HIGH);
  	delay(5000);
  	spln("Stop");
  	dw(npnPin, LOW);
  	delay(5000);
}