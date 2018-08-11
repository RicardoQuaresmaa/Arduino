
int loopcount;

void setup() {
Serial.begin(9600); // Seri monitoru kullanmak icin baglanti hizi secilir.
Serial.println("Arduino Projects");
}

void loop() {

for(int i = 0;i < 10;i++)
{
   Serial.print("i = ");
   Serial.println(i);
}

while(loopcount < 10)
  {
   Serial.print("Loop Count : ");
   Serial.println(loopcount);
   loopcount++;
  }

while(1){}

}
