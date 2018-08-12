int RedLed = 2;
int YellowLed = 7;

void setup() {
pinMode(RedLed,OUTPUT);
pinMode(YellowLed,OUTPUT);
}

void loop() {

  digitalWrite(RedLed,HIGH);   // led on , pin of number 13 volt 5
  digitalWrite(YellowLed,LOW);   // led on , pin of number 13 volt 5
  delay(1000);   // wait 1000 ms

  digitalWrite(RedLed,LOW);   
  digitalWrite(YellowLed,HIGH);   
  delay(1000);  
  
}
