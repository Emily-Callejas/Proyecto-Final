# Conectado de componentes

## Materiales
- Placa Arduino Genuino UNO
- Módulo LCD
- Potenciometro (250 kiloohmios)
- Sensor PIR
- Pulsador
- Resistencia (220 Ohms)
- Cables de conexión

## Descripción de la conexión de componentes
Se realiza la conexión de la fuente de energía tanto a la placa arduino como al módulo LCD, con los pines respectivos.

Posteriormente se conecta los pines 12 y 11 de arduino a los pines E y RS del módulo, asi como los pines (5, 4, 3, 2) a los pines (DB4, DB5, DB6, DB7) en un orden respectivo; los dos últimos pines LED del 
LCD, dan lugar a la conexión para el contraste de la pantalla, donde una de ellas puede o no,estar conectada, una resistencia de 220 Ohms. Finalmente los pines VCC y RW del módulo a energía positiva y tierra respectivamente.

Luego hacemos la coneión de un Potenciometro de 250 kiloohmios, donde su primer pin irá directo a positivo, el segundo, al pin VO del módulo; y el tercero al pin GND del LCD

> Hasta aqui tenemos la conexión, para el correcto funcionamiento del Módulo LCD; el potenciometro sera utilizado para modular el brillo y nitidéz de las letras en la pantalla.

Proceguimos con el conectado del Sensor PIR el cual cuenta con tres pines: el primero va directamente al pin 7 de Arduino, el segundo a Positivo y el último a Tierra.

El Pulsador solo cuenta con dos Pines, donde la terminal 1a va al pin 6 de Arduino y la terminal 2a tiene que estar conectado a tierra.