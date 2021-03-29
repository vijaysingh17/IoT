int m1a  = 6;  // Pin I1 of L293
int m2a  = 5;  // Pin I2 of L293
int m3b  = 11; // Pin I3 of L293
int m4b  = 10;  // Pin I4 of L293
int En1=3; //Pin En1 of L293
int En2=9; //Pin En2 of L293


void setup(){
 
    pinMode(m1a, OUTPUT);
    pinMode(m2a, OUTPUT);
    pinMode(m3b, OUTPUT);
    pinMode(m4b, OUTPUT);
    pinMode(En1, OUTPUT);
    pinMode(En2, OUTPUT);
   digitalWrite(En1, HIGH);
    digitalWrite(En2, HIGH);
    // Both channel enabled
    Serial.begin(9600);
  
}


void loop(){
  
  //Motor Control - Motor A: motor1,motor2 & Motor B: motor3,motor4
   
Serial.println("Now on logic1-");
    // Motor A clockwise for 2 sec.
    analogWrite(m1a, 1023);
    digitalWrite(m2a, LOW);
    digitalWrite(m3b, LOW);
    digitalWrite(m4b, LOW);
    Serial.println("Motor A clockwise ");
    delay(1000); 
    //Motor A counter-clockwise for 2 sec.
    digitalWrite(m1a, LOW);
    analogWrite(m2a, 1023);
    digitalWrite(m3b, LOW);
    digitalWrite(m4b, LOW);
    Serial.println("Motor A anti-clockwise ");
    delay(1000);
    
    //Motor B clockwise for 2 sec.
    digitalWrite(m1a, LOW);
    digitalWrite(m2a, LOW);
    analogWrite(m3b, 1023);
    digitalWrite(m4b, LOW);
    Serial.println("Motor B clockwise ");
    delay(1000); 
    //Motor B counter-clockwise for 2 sec.
    digitalWrite(m1a, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m3b, LOW);
    analogWrite(m4b, 1023);
    Serial.println("Motor B anti-clockwise ");
    delay(300);    
    
    //And this code will stop motors
    digitalWrite(m1a, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m3b, LOW);
    digitalWrite(m4b, LOW);
    Serial.println("All OFF");
    delay(2000);

/*Serial.println("Now on logic-2");
    digitalWrite(m1a,LOW);
    digitalWrite(m3b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m4b,LOW);
     Serial.println("Motor OFF");
    delay(1000);
    digitalWrite(m1a,LOW);
    digitalWrite(m3b,HIGH);
    digitalWrite(m2a,LOW);
    digitalWrite(m4b,LOW);
     Serial.println("Motor Clockwise");
    delay(1000);
    digitalWrite(m1a,HIGH);
    digitalWrite(m3b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m4b,LOW);
     Serial.println("Motor anti-clockwise ");
    delay(1000);
    digitalWrite(m1a,LOW);
    digitalWrite(m3b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m4b,LOW);
     Serial.println("Motor OFF ");
    delay(1000);*/
}
