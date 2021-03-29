
/*LCD Pin  Arduino Pin
1 GND
2 5V
3 D6--->GND
4 D12
5 GND
6 D11
11  D5
12  D4
13  D3
14  D2
15  5V
16  GND*/
#include <LiquidCrystal.h>
int Contrast=145;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(20, 4);
  } 
     void loop()
 { 
   lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("HI KOUSHIK");
   delay(1000);
   lcd.setCursor(0, 1);
   lcd.print("HI ABIN");
   delay(1000);
   lcd.setCursor(0, 0);
   
   //lcd.scrollDisplayLeft();//shifting data on LCD
   lcd.print("Enjoy the Day");
   delay(1000);
   lcd.setCursor(0, 1);
   lcd.print("Thank you");
   delay(1000);
   
 }
