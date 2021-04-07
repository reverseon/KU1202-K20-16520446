#define fl(dtype, var, start, end, step) for (dtype var = start; ((start < end) ? var < end : var > end); var+=step)

void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  fl (int, counter, 0, 3, 1) {
  		digitalWrite(7, HIGH);
    	delay(1000);
        digitalWrite(7, LOW);
    	delay(1000);
  }
  delay(5000);
}