int number = 13;

void setup() {
pinMode(number,OUTPUT);
}

void loop() {
  
digitalWrite(number, HIGH);
delay(5000);
digitalWrite(number, LOW);
delay(5000);

}
