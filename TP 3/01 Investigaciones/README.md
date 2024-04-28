![banner](.rsc\img\banner.png)

# Trabajo Practico Nro 3.

## Investigaciones necesarias.  

### Sobre función debounce.  

---


¿Qué es una función debounce?  

Una función debounce es una técnica que nos permite retrasar la ejecución de una función **hasta que haya transcurrido un periodo de tiempo específico**  después de la última vez que se llamó a dicha función.   

Funcionamiento de la función debounce  

La función debounce tiene un temporizador para retrasar la ejecución de una función. Cada vez que se llama a la función debounce, se reinicia el temporizador. Si la función se vuelve a llamar antes de que termine el temporizador, éste se reinicia nuevamente. De esta forma tendremos la certeza que la función real (callback) solo se ejecutará después de que haya pasado un período de inactividad durante el cual no se haya llamado a la función.  


   

Ventajas de utilizar una función debounce
- Reducción de llamadas innecesarias. Se evita que una función (callback se ejecute repetidamente durante eventos de alta frecuencia, lo cual reduce la carga en el navegador y mejora el rendimiento general de la aplicación.
- Mejora de la experiencia del usuario. Al retrasar la ejecución de una función hasta que haya una pausa en los eventos, se evita que la interfaz se bloquee o se vuelva lenta debido a llamadas excesivas.
- Control del tiempo de espera. La función debounce permite ajustar el tiempo de espera necesario antes de que se ejecute la función real, y esto permite adaptarla a las necesidades específicas de cada caso de uso.  
  

Desventajas de utilizar una función debounce  
- Retraso en la ejecución. Debido a que la función debounce espera un período de inactividad antes de ejecutar la función real, puede haber un ligero retraso entre el evento y la ejecución de nuestro callback. En algunas situaciones, esto puede no ser deseable, especialmente en casos en los que se requiere una respuesta inmediata.
- Configuración adecuada. Determinar el tiempo de espera adecuado para una función debounce puede ser un desafío. Un tiempo de espera demasiado corto puede conducir a llamadas innecesarias, mientras que un tiempo de espera demasiado largo puede causar una respuesta lenta o retrasada.

