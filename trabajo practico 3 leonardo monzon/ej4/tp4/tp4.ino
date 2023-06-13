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

  tone(sonidito ,20);
  delay(luces);
  noTone(sonidito);
  //tone(sonidito ,300);
  delay(luces);
  Serial.print("valor luz : ");
  Serial.println(luces);
  Serial.print("valor tiempo : ");
  Serial.println(luces);
  
}
