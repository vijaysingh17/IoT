
int led1=13;
int led2=12;
int led3=11;
int ldran=A0;
int ldrdl=2;
int temp;
int temp1;
int stat;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("LDR is reading the intensity");
delay(1000);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
temp=analogRead(ldran);
temp1=digitalRead(ldrdl);
Serial.print(temp);
Serial.print("    Digital State is: ");
Serial.print(temp1);
delay(500);
if (temp>=200)
{digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
  Serial.println(" haath hatao Abin. LED ON");}
else if (temp>=75 && temp<200)
{ digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
  Serial.println(" hatt jao Abin.LED OFF");}
else if (temp<75)
{digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
Serial.println(" Enough is enough LED BLOWN");}

}
