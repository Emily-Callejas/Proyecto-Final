# Conectado de componentes

## Materiales
- Placa Arduino Genuino UNO
- Módulo LCD
- Potenciometro (250 kiloohmios)
- Sensor PIR
- 2 Pulsadores
- LED
- 2 Resistencias (220 Ohms)
- Placa de pruebas de tamaño pequeño
- Cables de conexión

## Descripción de la conexión de componentes
Se utilizará una placa de puebas con la cual distribuiremos la conexión a todos los componentes que vayamos a conectar.

Primero conectamos el módulo LCD a la placa arduino
utilizando los pines 12 y 11 de la placa a los pines E y RS del módulo, asi como los pines (5, 4, 3, 2) a los pines (DB4, DB5, DB6, DB7) en un orden respectivo; los dos últimos pines LED del LCD, dan lugar a la conexión para el contraste de la pantalla, donde una de ellas,  puede o no, estar conectada a una resistencia de 220 Ohmios. Finalmente los pines VCC y RW del módulo van a energía positiva y a tierra respectivamente.

Luego hacemos la coneión de un Potenciometro de 250 kiloohmios, donde su primer pin irá directo a positivo, el segundo, al pin VO del módulo; y el tercero al pin GND del LCD

> Hasta aqui tenemos la conexión, para el correcto funcionamiento del Módulo LCD; el potenciometro sera utilizado para modular el brillo y nitidéz de las letras a imprimirse en la pantalla.

Proseguimos con el conectado del Sensor PIR el cual cuenta con tres pines: el primero va directamente al pin 7 de Arduino, el segundo a Positivo y el último a Tierra.

El Pulsador solo cuenta con dos Pines, donde la terminal 1a va al pin 6 de Arduino y la terminal 2a tiene que estar conectado a tierra.

Conectamos el zumbador, que en este caso es un Buzzer Pasivo, que cuenta con dos pines, el negativo se lo conecta a Tierra y el pin positivo, va directamente a un pin (PWM-) de arduino, siendo este el mas recomendable.

Se añade otro pulsador, donde la terminal 1a, se conecta al pin de RESET de la placla arduino; y la terminal 2a a tierra, estocon la finalidad de reiniciar el sistema. Al usar este pin no requeriremos de ninguna línea de código para cumplir este objetivo.

 Finalmente se añade un LED, donde el cátodo va conectado a tierra, intervenido por una resistencia de 220 Ohmios; a su vez, el ánodo va conectado a un pin de la placa, en este caso el numero 8, este con el fin de brindarnos el tiempo de detección.

> De esta forma es como se realizó el conectado de todos los componentes paso a paso. A continuación mostramos una imagen del diagrama de conexión de previamente descrito:

