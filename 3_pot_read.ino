// C++ code
//
int sensor = 0;

void setup()
{
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensor = analogRead(A3);
  Serial.println(sensor);
  delay(10); // Delay a little bit to improve simulation performance
}