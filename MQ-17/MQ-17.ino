
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("MQ-7 is starting now");
pinMode(2,INPUT);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("digtal output is: ");
Serial.println(digitalRead(2));
Serial.print("analog output is: ");
Serial.println((analogRead(A0))-49);
delay(400);
}
