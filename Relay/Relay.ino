
int ldran=A0;
int temp;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(ldran,INPUT);
//pinMode(4,OUTPUT);
//pinMode(7,OUTPUT);
digitalWrite(7,HIGH);
}

void loop()
{
// put your main code here, to run repeatedly:
/*digitalWrite(2,HIGH);
delay(1000);
digitalWrite(2,LOW);*/
temp=analogRead(ldran);
Serial.print(temp);
//delay(200);
if (temp>=400)
{digitalWrite(2,HIGH);
//digitalWrite(4,HIGH);
  Serial.println(" Motor 1 OFF");
  Serial.println(" Motor 2 ON");}
else if (temp>=75 && temp<400)
{ digitalWrite(2,LOW);
//digitalWrite(4,LOW);
  Serial.println(" Motor 1 ON");
  Serial.println(" Motor 2 OFF");}
else if (temp<75)
{digitalWrite(2,HIGH);
//digitalWrite(4,HIGH);
Serial.println("Motor 1 OFF");
Serial.println(" Motor 2 ON");}
}
