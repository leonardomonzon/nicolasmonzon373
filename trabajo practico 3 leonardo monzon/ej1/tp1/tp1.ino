#define luzpin A1
int valor;
void setup() {
  pinMode(luzpin, INPUT);
  Serial.begin(9600);
}

void loop() {
valor = analogRead(luzpin);
Serial.print("valor de luz : ");
Serial.println(valor);
delay(500);
}
