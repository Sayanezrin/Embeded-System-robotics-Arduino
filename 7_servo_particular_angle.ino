void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0) {
    int state = Serial.read();
    if (state == 53) {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    }
    if (state == 54 ) {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
    }
  }
  delay(50);
}