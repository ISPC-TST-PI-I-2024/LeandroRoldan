![banner](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/.rsc/img/banner.png)

# TP #3: Transductores Binarios  
---
### Docente: *Gustavo Vera*
### Alumno: *Patricio Leandro Roldan*   

Teniendo en cuenta el modelo ESP32 WROOM de 38 pines, en este trabajo practico se trabajó y afianzó sobre arduino en VsCode, asi como en wokwi para su prueba.

## Desarrollo:
Sea el siguiente modelo:
![esp32](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/.rsc/img/esp32.png)  

### Ejercicio 1: Encender un LED  

    • Enciende el led1 conectado al GPIO18 de forma continua.
<details open><summary> codigo </summary>

![code1](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20Basicos/Ejercicio%201/Screenshot_3.png) </details>
<details><summary> Wokwi </summary>

![wok1](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20Basicos/Ejercicio%201/Screenshot_2.png)
 </details>


### Ejercicio 2: Parpadeo de un LED
    - Programa el led1 para que parpadee con un intervalo de 1 segundo.  
<details open><summary> codigo </summary>

![code1](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20Basicos/Ejercicio%202/Screenshot_1.png) </details>
<details><summary> Wokwi </summary>

![wok1][![Ejercicio 2](https://res.cloudinary.com/marcomontalbano/image/upload/v1715392802/video_to_markdown/images/youtube--_j6Uu-67tyo-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=_j6Uu-67tyo&ab_channel=LeandroRoldan "Ejercicio 2")
 </details>

### Ejercicio 3: Secuencia de LEDs
    - Crea una secuencia que encienda los LEDs del led1 al led3 de forma sucesiva, cada uno durante 500ms.

 <details open><summary> codigo </summary>

 ![code3](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20Basicos/Ejercicio%203/Screenshot_1.png)
  </details>

  <details><summary>Wokwi </summary>

  [![Ejercicio 3](https://res.cloudinary.com/marcomontalbano/image/upload/v1715392773/video_to_markdown/images/youtube--CP-3v69KR88-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=CP-3v69KR88&ab_channel=LeandroRoldan "Ejercicio 3")

  </details>

### Ejercicio 4: Control de LED con botón
    - Usa el btn1 para encender el led1 mientras se mantenga presionado.
 <details open><summary> codigo </summary>

![code4](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20Basicos/Ejercicio%204/Screenshot_2.png)

  <details><summary>Wokwi </summary>

[![Ejercicio 4](https://res.cloudinary.com/marcomontalbano/image/upload/v1715393146/video_to_markdown/images/youtube--vJT2Cw4kIQE-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=vJT2Cw4kIQE&ab_channel=LeandroRoldan "Ejercicio 4")


  </details>

### Ejercicio 5: Uso de botón con estado
    - Cambia el estado del led1 cada vez que se presione y suelte el btn1.
 <details open><summary> codigo </summary>

![code5](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20intermedios/Ejercicio%205/Screenshot_1.png)

 <details><summary>Wokwi </summary>

[![Ejercicio 5](https://res.cloudinary.com/marcomontalbano/image/upload/v1715394072/video_to_markdown/images/youtube--yLHeC0OsL70-c05b58ac6eb4c4700831b2b3070cd403.jpg)](https://www.youtube.com/watch?v=yLHeC0OsL70&ab_channel=LeandroRoldan "Ejercicio 5")


 </details>

### Ejercicio 6: Debounce de botón
    - Implementa una lógica de debounce en el btn1 para evitar lecturas erróneas.

 <details open><summary> codigo </summary>

![code6](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20intermedios/Ejercicio%206/Screenshot_1.png)

  <details><summary>Wokwi </summary>

[![Ejercicio 6](https://i.ytimg.com/vi/k212qU5df-M/maxresdefault.jpg)](https://www.youtube.com/watch?v=k212qU5df-M&ab_channel=LeandroRoldan "Ejercicio 6")

  </details>

### Ejercicio 7: Control de múltiples LEDs con botones
    - Usa btn1 y btn2 para controlar el estado de led1 y led2 respectivamente.

   <details open><summary> codigo </summary>

![code7](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20intermedios/Ejercicio%207/Screenshot_1.png)

  <details><summary>Wokwi </summary>

[![Ejercicio 7](https://i.ytimg.com/vi/gtS9jEHcWdU/maxresdefault.jpg)](https://www.youtube.com/watch?v=gtS9jEHcWdU&ab_channel=LeandroRoldan "Ejercicio 7")

  </details>


### Ejercicio 8: Uso de dip switches para control de LEDs
    -Lee el estado de los dip switches sw1.1 a sw1.8 y refleja el estado en los led1 a led8.
 <details open><summary> codigo </summary>

![code8](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20intermedios/Ejercicio%208/Screenshot_2.png)

  <details><summary>Wokwi </summary>

[![Ejercicio 8](https://i.ytimg.com/vi/AixTqg8l-Mw/maxresdefault.jpg)](https://www.youtube.com/watch?v=AixTqg8l-Mw&ab_channel=LeandroRoldan "Ejercicio 8")

  </details>

### Ejercicio 9: Secuencia de LEDs con botón
    - Lee el estado de los dip switches sw1.1 a sw1.8 y reflejamelestado en los led1 a led8.

   <details open><summary> codigo </summary>

![code9](https://github.com/ISPC-TST-PI-I-2024/LeandroRoldan/blob/main/TP%203/C%20Prototipos/Ejercicios%20avanzados/Ejercicio%209/Screenshot_1.png)


