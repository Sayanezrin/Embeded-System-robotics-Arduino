*/

#include <Servo.h>

Servo servo1;
long num;

void setup()
{
servo1.attach(9);
Serial.begin(9600);
Serial.print("Enter Position = ");
}

void loop()
{
while(Serial.available()>0)
{
num= Serial.parseInt();
Serial.print(num);
Serial.println(” degree”);
Serial.print(“Enter Position = “);
}
servo1.write(num);
delay(15);
}