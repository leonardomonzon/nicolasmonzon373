#define trigger 6
#define echo 7
#define sonidito 4
int lentitud;

float medirdistancia(void);

long tiempo=0;
float distancia;
void setup()
{
  Serial.begin(115200);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode (sonidito, OUTPUT);
}

void loop()
{
float distancia;
  
  distancia = medirdistancia();
  delay(250); 


lentitud = map(distancia,0,100,6,400);
//Serial.println(luces);
//minimo = 0
//maximo = 1023

  tone(sonidito ,lentitud);
  //tone(sonidito ,300);
  delay(lentitud);
 /* Serial.print("valor luz : ");
  Serial.println(distancia);
  Serial.print("valor tiempo : ");
  Serial.println(lentitud);*/
}

float medirdistancia()
{
 digitalWrite(trigger, LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
 tiempo=pulseIn(echo, HIGH);
 //Serial.println(tiempo);
  distancia=tiempo/58;
  /*Serial.print("Distancia : ");
  Serial.print(distancia);
  Serial.println("cm");*/
  
  return distancia;
}
