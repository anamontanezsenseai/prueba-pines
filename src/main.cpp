#include <Arduino.h>
#include <pines.h>
void testPin(int pin){
  pinMode(pin,OUTPUT);
  digitalWrite(pin,HIGH);
  delay(2000);
  digitalWrite(pin,LOW);
}
void setup() {
  Serial.begin(115200);
  delay(5000);
  Serial.println("init");

  Serial.println("pulgar giro 1 - pin 5");
  testPin(pulgarGiro_1);
  delay(5000);

  Serial.println("pulgar giro 2 - pin 18");
  testPin(pulgarGiro_2);
  delay(5000);

  Serial.println("pulgar 2 - pin 19");
  testPin(pulgar_2);
  delay(5000);

  Serial.println("pulgar 1 - pin 21");
  testPin(pulgar_1);
  delay(5000);
  
 
  Serial.println("pot indice - pin 14");
  testPin(potIndice);
  delay(5000);

  Serial.println("indice 1 - pin 13");
  testPin(indice1);
  delay(5000);

  Serial.println("indice 2- pin 12");
  testPin(indice2);
  delay(5000);

  Serial.println("medio 1 - pin 16");
  testPin(medio1);
  delay(5000);

  Serial.println("medio 2- pin 17");
  testPin(medio2);
  delay(5000);

  Serial.println("potMedio -pin 4");
  testPin(potMedio);
  delay(5000);

  Serial.println("pot anular - pin 25");
  testPin(potAnular);
  delay(5000);

  Serial.println("anular 1 - pin 26");
  testPin(anular1);
  delay(5000);

  Serial.println("anular 2 - pin 27");
  testPin(anular2);
  delay(5000);

  Serial.println("pot meñique - pin 35");
  testPin(potMenique);
  delay(5000);

  Serial.println("meñique 2 - pin 32");
  testPin(menique2);
  delay(5000);

  Serial.println("meñique 1 - pin 33");
  testPin(menique1);
  
  
  Serial.println("fin prueba");
}

void loop() {
  // put your main code here, to run repeatedly:
}

