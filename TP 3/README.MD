![banner](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/.rsc/img/banner.png)

# TP #3: Transductores Binarios

## Objetivos
- Practicar con el framework de Arduino en Visual Studio Code (VsCode).
- Realizar una primera aproximación a un entrenador básico.
- Practicar con sensores y actuadores digitales.
- Experimentar con un controlador.

## Desarrollo
Consideremos el siguiente entrenador digital con los siguientes componentes:

### Pulsadores
- **btn1 (Pulsador 1)**: Conectado al pin GPIO34.
- **btn2 (Pulsador 2)**: Conectado al pin GPIO39.
- **btn3 (Pulsador 3)**: Conectado al pin GPIO36.

### Dip Switch
- **sw1.1 (Posición 1 del Dip Switch)**: Conectado al pin GPIO13.
- **sw1.2 (Posición 2 del Dip Switch)**: Conectado al pin GPIO12.
- **sw1.3 (Posición 3 del Dip Switch)**: Conectado al pin GPIO14.
- **sw1.4 (Posición 4 del Dip Switch)**: Conectado al pin GPIO27.
- **sw1.5 (Posición 5 del Dip Switch)**: Conectado al pin GPIO26.
- **sw1.6 (Posición 6 del Dip Switch)**: Conectado al pin GPIO25.
- **sw1.7 (Posición 7 del Dip Switch)**: Conectado al pin GPIO33.
- **sw1.8 (Posición 8 del Dip Switch)**: Conectado al pin GPIO32.

### LEDs
- **led1 (LED 1)**: Conectado al pin GPIO18.
- **led2 (LED 2)**: Conectado al pin GPIO5.
- **led3 (LED 3)**: Conectado al pin GPIO17.
- **led4 (LED 4)**: Conectado al pin GPIO16.
- **led5 (LED 5)**: Conectado al pin GPIO4.
- **led6 (LED 6)**: Conectado al pin GPIO0.
- **led7 (LED 7)**: Conectado al pin GPIO2.
- **led8 (LED 8)**: Conectado al pin GPIO15.  


Para este apartado se tuvo en cuenta el [Entrenador_basico](Entrenador_basico) y se configuraros los pines de la siguiente forma:  


```
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


```


---



# Contenido del repositorio

En cada carpeta se encuentra una imagen con el codigo o archivo del mismo y un pequeño video donde se muestra el funcionamiento en Wokwi

### Ejercicios Básicos
1. **Encender un LED**: Activa el led1 conectado al GPIO18 de forma continua.
2. **Parpadeo de un LED**: Programa el led1 para que parpadee con un intervalo de 1 segundo.
3. **Secuencia de LEDs**: Crea una secuencia que encienda los LEDs del led1 al led3 de forma sucesiva, cada uno durante 500 ms.
4. **Control de LED con botón**: Utiliza el btn1 para encender el led1 mientras se mantenga presionado.

### Ejercicios Intermedio
5. **Uso de botón con estado**: Cambia el estado del led1 cada vez que se presione y suelte el btn1.
6. **Debounce de botón**: Implementa una lógica de debounce en el btn1 para evitar lecturas erróneas.
7. **Control de múltiples LEDs con botones**: Usa btn1 y btn2 para controlar el estado de led1 y led2 respectivamente.
8. **Uso de dip switches para control de LEDs**: Lee el estado de los dip switches sw1.1 a sw1.8 y refleja el estado en los led1 a led8.

### Ejercicios Avanzado
9. **Secuencia de LEDs con botón**: Crea una secuencia de luces que avance cada vez que se presione btn1.
