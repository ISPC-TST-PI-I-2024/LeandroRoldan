

//Pulsadores e interruptores
const int btn1 = 34 ;
const int btn2 = 39 ;
const int btn3 = 36 ;


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


void setup() {
//pulsadores 
pinMode (btn1, INPUT);        pinMode (btn2, INPUT);             pinMode (btn3, INPUT);   
// Dip Switch

pinMode (sw101, INPUT);         pinMode (sw102, INPUT);           pinMode (sw102, INPUT);       pinMode (sw103, INPUT);     pinMode (sw104, INPUT); 
pinMode (sw105, INPUT);         pinMode (sw106, INPUT);         pinMode (sw107, INPUT);           pinMode (sw108, INPUT);
//Leds
pinMode (led1, OUTPUT);         pinMode (led2, OUTPUT);           pinMode (led3, OUTPUT);       pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);         pinMode (led6, OUTPUT);           pinMode (led7, OUTPUT);       pinMode (led8, OUTPUT);

}
void loop() {
  // estados y memorias

int estado1 = LOW ;            // Estado 1
int estado2 = LOW ;            // Estado 2

  // Leer estado de los pulsadores y almacenar lectura
 estado1 = digitalRead(btn2);
 estado2 = digitalRead(btn1);


if (estado1 == HIGH)
{
  digitalWrite(led2, HIGH);
}
else {
  digitalWrite(led2, LOW);
}
Z



if (estado2 == HIGH)
  {
    digitalWrite(led3, HIGH);
  }
else {digitalWrite(led3, LOW);}
  }