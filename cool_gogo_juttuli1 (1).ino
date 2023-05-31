// C++ code
//
int sensor = 0;

void setup()
{
  pinMode(A3, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  sensor = analogRead(A3);
  Serial.println(sensor);
  if (sensor >= 0) {
    if (sensor <= 200) {
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
      Serial.println("RED led ON");
    } else {
      digitalWrite(4, LOW);
      Serial.println("RED led OFF");
    }
  }
  if (sensor >= 400) {
    if (sensor <= 600) {
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
      Serial.println("ORANGE  led ON");
    } else {
      digitalWrite(3, LOW);
      Serial.println("ORANGE   led OFF");
    }
  }
  if (sensor >= 800) {
    if (sensor <= 1200) {
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      Serial.println("GREEN  led ON");
    } else {
      digitalWrite(2, LOW);
      Serial.println("GREEN   led OFF");
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}