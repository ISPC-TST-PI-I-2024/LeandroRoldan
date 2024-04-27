#include <Arduino.h>

const int led = 2;  
const int boton = 13;  

int iniciar = LOW;  

void setup() {
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT_PULLUP);  
}

void loop() {
  iniciar = digitalRead(boton);

  if (iniciar == LOW) {  
    digitalWrite(led, HIGH);  
  } else {
    digitalWrite(led, LOW);   
  }
}