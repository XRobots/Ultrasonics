
 
void setup() 
{
  pinMode(7, OUTPUT); // US1
  pinMode(8, OUTPUT); // US2
  pinMode(6, OUTPUT); // IR

}
 
void loop()
{ 
  digitalWrite(6, HIGH);    // IR on          // rising edge (falling on reveiver)  
  digitalWrite(7, HIGH);    // US1 on
  delayMicroseconds(15);
  digitalWrite(7, LOW);     // US1 off
  
  delay(100);
  digitalWrite(6, LOW);     // IR off         // falling edge (rising on receiver)  
  digitalWrite(8, HIGH);    // US2 on
  delayMicroseconds(15);
  digitalWrite(8, LOW);     // US2 off 
  
  delay(100);
}
