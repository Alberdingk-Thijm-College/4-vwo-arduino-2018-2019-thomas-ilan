/*
This code is written to make the 12 LEDs light up one after another in a loop.
*/
void setup()
{
/*
We first set the LED pins as output using the pinMode command. The general pinMode command is pinMode(pin_number, OUTPUT/INPUT); 
*/
  pinMode(1, OUTPUT);   
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);  
  pinMode(4, OUTPUT);   
  pinMode(5, OUTPUT);   
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT);   
  pinMode(8, OUTPUT);   
  pinMode(9, OUTPUT);   
  pinMode(10, OUTPUT);   
  pinMode(11,OUTPUT);   
  pinMode(12, OUTPUT);
}                              
void loop()
{
/* 
In the loop we set the LED on first for a sec and turn it off. This is done by the digitalWrite and delay commands. The general form of digitalWrite and delay are: digitalWrite(pin_number, HIGH/LOW);
HIGH turns on the led and LOW turns the LED off. Delay is used as delay(time in milliseconds); this delays the time between the execution of 3 commands. 
*/
  digitalWrite(3, HIGH); digitalWrite(6, HIGH);   digitalWrite(7, HIGH); digitalWrite(10, HIGH);
                                                  delay(1000);           delay(1000);
                                                    
  digitalWrite(3,LOW);   digitalWrite(6,LOW);    
  digitalWrite(2, HIGH); 
  delay(1000);                   
  digitalWrite(2,LOW);   digitalWrite(5,LOW);     
  digitalWrite(1,HIGH);  digitalWrite(4, HIGH);   
  delay(1000);           delay(1000);                       
  digitalWrite(1,LOW);   digitalWrite(4,LOW);   digitalWrite(7,LOW);   digitalWrite(10,LOW); 
                                                
  
  digitalWrite(9, HIGH); digitalWrite(12, HIGH);  digitalWrite(1, HIGH); digitalWrite(4, HIGH);
                                                  delay(1000);           delay(1000);
                                                  digitalWrite(0,LOW);    digitalWrite(0,LOW);
  digitalWrite(9,LOW);   digitalWrite(12,LOW);            
  digitalWrite(8,LOW);   digitalWrite(11,LOW);
  digitalWrite(7,HIGH);  digitalWrite(10, HIGH);
  delay(1000);               delay(1000);   
  digitalWrite(7,LOW);   digitalWrite(10,LOW);    digitalWrite(1,LOW);    digitalWrite(4,LOW);
}                        
