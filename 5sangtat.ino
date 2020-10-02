byte ledPin[]={2,3,4,5,6};
byte pincount; 
  
void setup() {
  pincount = sizeof(ledPin);
  for (int i=0; i<pincount; i++){
    pinMode(ledPin[i],OUTPUT); 
    digitalWrite(ledPin[i],LOW); 
  }
}

void loop() {
  // Bật toàn bộ LED
for (int i=0;i<pincount;i++){
    digitalWrite(ledPin[i],HIGH); 
    delay(500);
  }
  delay(1000); 
for (int i=0;i<pincount;i++){
    digitalWrite(ledPin[i],LOW);
    delay(500);
  }
  delay(1000); 
for (int i=0;i<pincount;i++){
    digitalWrite(ledPin[i],HIGH); 
    delay(500);
  }

  delay(1000); 
for (int i=0;i<pincount;i++){
    digitalWrite(ledPin[i],LOW);
    delay(10);
  }
    delay(3000); 
}
