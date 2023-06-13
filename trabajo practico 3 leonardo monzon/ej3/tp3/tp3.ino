#define LUZPIN A1
#define sonidito 4
int luces;
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(LUZPIN, INPUT);
  Serial.begin(9600);
}
void loop()
{
  luces = analogRead(LUZPIN);
delay(1000);
//Serial.println(luces);
//minimo = 0
//maximo = 1023

  tone(sonidito, luces );
  }
