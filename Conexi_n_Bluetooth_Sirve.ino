#include<SoftwareSerial.h>
SoftwareSerial bluetooth(11, 10);

const int parl = 8;
int entrada = 0;



void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
    pinMode(13,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (bluetooth.available() == 0) {

  }

  entrada = bluetooth.read();
  
  if (entrada == '1')
  // Prender todas las luces 
  {
    Serial.println("Listo do");
      digitalWrite(13,HIGH);
  } else if (entrada == 'a')
  {
    // Apaga todas las luces
    digitalWrite(13,LOW);
  } else if (entrada == '2')
  // Enciende Parqueadero 1
  {
    digitalWrite(6,HIGH);
  } 
  else if (entrada == 'b')
  {
    // Apaaga Parqueadero 1
    digitalWrite(6,LOW);
  } 
  else if (entrada == '3')
  {
    // Enciende Parqueadero 2
    digitalWrite(7,HIGH);
  } 
  else if (entrada == 'c')
  {
    // Apaaga Parqueadero 2
    digitalWrite(7,LOW);
  } 
  else if (entrada == '4')
  {
    // Enciende Parqueadero 4
    digitalWrite(8,HIGH);
  } 
  else if (entrada == 'd')
  {
    // Apaaga Parqueadero 4
    digitalWrite(8,LOW);
  }
   else if (entrada == '5')
  {
    // Enciende Parqueadero 5
    digitalWrite(9,HIGH);
  }
  else if (entrada == 'e')
  {
   // Apaaga Parqueadero 5
    digitalWrite(9,LOW);
  }
  else if (entrada == '6')
  {
    // Enciende Parqueadero 6
    digitalWrite(5,HIGH);
  }
  else if (entrada == 'f')
  {
    // Apaaga Parqueadero 6
    digitalWrite(5,LOW);
  }
  else if (entrada == 'v')
  {
    ////
  }
  else if (entrada == 'w')
  {
    /////
  }
  else if (entrada == 'e')
  {
     ///////
  }
  else if (entrada == 'a')
  {
     ///////
  }

}
