int led=13;
char n=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600); 
}

void loop()
{
// put your main code here, to run repeatedly:
if (Serial.available())
  { n=Serial.read();
  // Serial.println(n);
  if (n=='1')
  { Serial.print("LED ON as i/p is:");
    digitalWrite(led,HIGH);
    Serial.println(n);
   
  }   
else if (n=='0') 
{
 digitalWrite(led,LOW);
Serial.print("LED OFF as i/p is:");
Serial.println(n);
   }
 else if ((n>'1')&&(n<='9'))
 {Serial.println("invalid input");
   
 }  }}
