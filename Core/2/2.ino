int number1;
int number2;
int number3,number4;
int total;

void setup() {
Serial.begin(9600); // Seri monitoru kullanmak icin baglanti hizi secilir.
Serial.println("Arduino Projects");
}

void loop() {

  number1 = 50;
  number2 = 100;
  number3 = 20;
  number4 = 2007;

  if(number1 < number2)
  {
    Serial.println("BJK");
  }
  else
  {
    Serial.println("Porto");
  }

  total = number3 + number4;

  if(total ==2027)
  {
    Serial.println("Quaresma");
  }
  else
  {
    Serial.println("Pepe");
  }

  // For waiting
  while(1)
  {
    
  }

}
