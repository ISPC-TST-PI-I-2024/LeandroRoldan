#include <Serial.h>

const int pulsador1Pin = 2; // Definimos el pin del pulsador 1
const int pulsador2Pin = 3; // Definimos el pin del pulsador 2
const int rele1Pin = 4; // Definimos el pin del relé 1
const int rele2Pin = 5; // Definimos el pin del relé 2

int estadoPulsador1; // Variable para almacenar el estado del pulsador 1
int estadoPulsador2; // Variable para almacenar el estado del pulsador 2

void setup() {
  Serial.begin(9600); // Inicializamos la comunicación serial a 9600 baudios
  pinMode(pulsador1Pin, INPUT); // Configuramos el pin del pulsador 1 como entrada
  pinMode(pulsador2Pin, INPUT); // Configuramos el pin del pulsador 2 como entrada
  pinMode(rele1Pin, OUTPUT); // Configuramos el pin del relé 1 como salida
  pinMode(rele2Pin, OUTPUT); // Configuramos el pin del relé 2 como salida
}

void loop() {
  estadoPulsador1 = digitalRead(pulsador1Pin); // Leemos el estado del pulsador 1
  estadoPulsador2 = digitalRead(pulsador2Pin); // Leemos el estado del pulsador 2

  // Enviamos el estado de los pulsadores al monitor serie
  Serial.print("Pulsador 1: ");
  Serial.println(estadoPulsador1);
  Serial.print("Pulsador 2: ");
  Serial.println(estadoPulsador2);

  // Controlamos los relés en función del estado de los pulsadores
  if (estadoPulsador1 == HIGH) {
    digitalWrite(rele1Pin, HIGH); // Encendemos el relé 1
  } else {
    digitalWrite(rele1Pin, LOW); // Apagamos el relé 1
  }

  if (estadoPulsador2 == HIGH) {
    digitalWrite(rele2Pin, HIGH); // Encendemos el relé 2
  } else {
    digitalWrite(rele2Pin, LOW); // Apagamos el relé 2
  }

  // Leemos datos del monitor serie
  if (Serial.available()) {
    char comando = Serial.read(); // Leemos un byte del monitor serie

    switch (comando) {
      case 'A': // Encendemos ambos relés
        digitalWrite(rele1Pin, HIGH);
        digitalWrite(rele2Pin, HIGH);
        break;
      case 'B': // Apagamos ambos relés
        digitalWrite(rele1Pin, LOW);
        digitalWrite(rele2Pin, LOW);
        break;
      default: // Comando no reconocido
        Serial.println("Comando no válido");
    }
  }

  delay(100); // Esperamos 100 milisegundos
}