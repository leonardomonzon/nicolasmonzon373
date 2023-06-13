#define trigger 6
#define echo 7
#define pipin 5

float medirdistancia(void);

long tiempo=0;
float distancia;
void setup()
{
  Serial.begin(115200);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode (pipin, OUTPUT);
}

void loop()
{
float distancia;
  
  distancia = medirdistancia();
  delay(500); 

}

float medirdistancia()
{
 digitalWrite(trigger, LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  tiempo=pulseIn(echo, HIGH);
  Serial.println(tiempo);
  distancia=tiempo/58;
  Serial.print("Distancia : ");
  Serial.print(distancia);
  Serial.println("cm");
  
  return distancia;
}