#include <dht.h>
#define dht_apin 3
dht DHT;
int temp;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

Serial.println("DHT-11 is turned ON:");
delay(400);
}

void loop() 
{
// put your main code here, to run repeatedly:
DHT.read11(dht_apin);
Serial.print("Current Humidity in %age= ");
Serial.println(DHT.humidity);
Serial.print("Current Temperature in degC= ");
Serial.println(DHT.temperature);
Serial.print("Current Temperature in Fahrenheit:");
Serial.println(((9*DHT.temperature)/5) +32);
temp=analogRead(3);
Serial.print("DHT-11 o/p is: ");
Serial.println(temp);
delay(5000);
}
