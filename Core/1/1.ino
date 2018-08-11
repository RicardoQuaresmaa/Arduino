int number1 = 30;
int number2 = 70;
int total = 0;
float divide = 0;

void setup() {
Serial.begin(9600); // Seri monitoru kullanmak icin baglanti hizi secilir.
Serial.println("Arduino Projects");
}

void loop() {
total = number1 + number2;
Serial.print("Total : ");
Serial.println(total);

divide = number2 / number1;
Serial.print("Divide : ");
Serial.println(divide);  
}
