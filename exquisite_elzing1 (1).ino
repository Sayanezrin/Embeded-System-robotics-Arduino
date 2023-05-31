// C++ code
//
int button = 0;

void setup()
{
  pinMode(8, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  button = digitalRead(8);
  if (button == 1) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}