#define luzmedidor A1
#define luzmax 1
#define luzmed 2
#define luzmin 3

int valor;

void setup() {
  pinMode(luzmedidor, INPUT);
  pinMode(luzmax, OUTPUT);
  pinMode(luzmed, OUTPUT);
  pinMode(luzmin, OUTPUT);

    Serial.begin(9600);

}

void loop() {


valor = analogRead(luzmedidor);
Serial.print("valor de luz : ");
Serial.println(valor);
delay(500);


if (valor > 1000)
{
 digitalWrite (luzmax, HIGH);
}


if (valor < 10)
{
  digitalWrite(luzmin, HIGH);
}


if (valor == 250)
{
  digitalWrite(luzmed, HIGH);
}
}