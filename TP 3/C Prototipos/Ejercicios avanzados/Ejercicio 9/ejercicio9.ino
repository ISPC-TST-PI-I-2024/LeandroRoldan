#include <Arduino.h>


//Pulsadores e interruptores
const int btn1 = 34 ;
//const int btn2 = 39 ;
//const int btn3 = 36 ;


const int sw101 = 13 ;
const int sw102 = 12 ;
const int sw103 = 14 ;
const int sw104 = 27 ;
const int sw105 = 26 ;
const int sw106 = 25 ;
const int sw107 = 33 ;
const int sw108 = 32 ;

//leds:

const int led1 = 18 ;
const int led2 = 05 ;
const int led3 = 17 ;
const int led4 = 16 ;
const int led5 = 04 ;
const int led6 = 00 ;
const int led7 = 02 ;
const int led8 = 15 ;
const int ledPins[] = {led1, led2, led3, led4, led5, led6, led7, led8}; // Define los pines de los LEDs en una lista
int currentLed = 0; // Índice del LED actual
int estado = LOW ;   //estado de pulsador1
int memoria = LOW;   // estado guardado de pulsador1
int contador ;  // memoria para la secuencia
int ledstate ; // pulso de secuencia

void setup() {
//pulsadores 
pinMode (btn1, INPUT_PULLUP);   //     pinMode (btn2, INPUT);             pinMode (btn3, INPUT);   
// Dip Switch

pinMode (sw101, INPUT);         pinMode (sw102, INPUT);     pinMode (sw103, INPUT);     pinMode (sw104, INPUT); 
pinMode (sw105, INPUT);         pinMode (sw106, INPUT);     pinMode (sw107, INPUT);     pinMode (sw108, INPUT);
//Leds
pinMode (led1, OUTPUT);         pinMode (led2, OUTPUT);     pinMode (led3, OUTPUT);     pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);         pinMode (led6, OUTPUT);     pinMode (led7, OUTPUT);     pinMode (led8, OUTPUT);


}


void loop() {
estado = digitalRead(btn1);
delay(100);
if (estado == LOW )
  digitalWrite(ledPins[currentLed], HIGH); // Enciende el LED actual
   delay(500); // Espera 500 ms
   digitalWrite(ledPins[currentLed], LOW); // Apaga el LED actual
   currentLed = (currentLed + 1) % 8; // Avanza al siguiente LED
}
