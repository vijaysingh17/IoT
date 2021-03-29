int echo=9;
int trig=10;
float x;
float y;
float z;
int led=12;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
Serial.println("Ultrosonic is ON");
pinMode(led,OUTPUT);
delay(500);
}

void loop() 
{
  // put your main code here, to run repeatedly:
//Serial.println(echo);
digitalWrite(trig,LOW);
delayMicroseconds(5);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
x= pulseIn (echo,HIGH);
Serial.print("time in micro seconds:");
Serial.println(x);
y=x*0.017;
Serial.print("Changing the unit to CM:");
Serial.println(y);
if (y<=15)
digitalWrite(led,HIGH);
else if(y>15)
digitalWrite(led,LOW);
z=y*0.394;
Serial.print("Changing the unit to INCH:");
Serial.println(z);
delay(1000);

}

/*long SelfPulseIn(long a;bool b)
{ float t=0;
    int 
    int 
  if (a==LOW)*/
 
  
