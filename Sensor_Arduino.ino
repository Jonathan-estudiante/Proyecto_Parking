#include <Servo.h>
Servo ioe; // create servo object to control a servo

int trig = 2;
int echo = 3;
int tiempo;
int distancia;
int led = 12;
int led2 = 8;
int pulsador = 13;
int val = 0;
void setup() {

  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(pulsador, INPUT);
  ioe.attach(9);

}

void loop() {

  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delay(500);//tiempo de 5 milisegundos
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.2;
  delay(500);

  if (distancia <= 10)
  {
    digitalWrite(led, HIGH);//enciende el led 1
    digitalWrite(led2, HIGH);//enciende el led 2
    ioe.write(50);//coloca el motor en un ángulo de 50 grados
    delay(2000);// delay de 3 segundos
    Serial.println("Cerca\n");//imprime un mensaje
  }

  if (distancia > 10)
  {
    ioe.write(5);//coloca el motor en un ángulo de 5 grados
    Serial.println("Lejos\n");//imprime un mensaje
    digitalWrite(led, LOW);//apaga el led 1
    digitalWrite(led2, LOW);//apaga el led 2
    delay(200);//tiempo de 2 milisegundos
    
  }

}
