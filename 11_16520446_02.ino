#define dw digitalWrite
#define dr digitalRead
#define aw analogWrite
#define ar analogRead
#define pm pinMode
#define sp Serial.print
#define spln Serial.println
#define dms delayMicroseconds


void setup()
{
  Serial.begin(9600);
}
void loop()
{
  float si = ar(A0);
  float temp = si*125/256 - 50;
  sp("Suhu: ");
  sp(temp);
  spln(" Celcius");
  
}