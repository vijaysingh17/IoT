float temp;
float t=A0;
float x;
float F;
float F1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Temperature sensor LM35 is turning ON:");
delay(500);
}

void loop()
{
  // put your main code here, to run repeatedly:
temp=analogRead(t);
Serial.print("LM 35 O/p is:");
Serial.println(temp*5/1023);
//delay(1000);
x=(temp*500)/1023;
F=((9*x/5))+32;
F1=((9/5)*x)+32;
Serial.print("Temperature in Celsius:");
Serial.println(x);
Serial.print("Temperature in Fahrenhiet:");
Serial.println(F);
Serial.println(F1);
delay(2000);
}
