void setup() {
  for (int i = 2; i<7; i++) 
    pinMode(i, OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
}

void loop() {
   digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  delay(700);
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  delay(700);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,0);
  delay(700);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  delay(700);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,1);
  delay(700);
   digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  delay(700);{
  for (int i = 2; i<7; i++)
    digitalWrite(i, HIGH);
    delay(1000); 
  for (int i = 2; i<7; i++)
    digitalWrite(i, LOW);
   
  delay(1000);
  
  
  for (int i = 2; i<7; i++) {
    digitalWrite(i, HIGH);
    delay(700);
  }
  
 
  for (int i = 2; i<7; i++)
    digitalWrite(i, LOW);
  delay(800);
}
}
