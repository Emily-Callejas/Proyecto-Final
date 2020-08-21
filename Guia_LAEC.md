# PROYECTO DE ROBÓTICA SEGURIDAD LAEC

## ¿Cómo funciona LAEC?

> Laec cuenta con un sensor de movimiento Pasivo Infra-Rojo (PIR) que detecta radiación Infra-Roja que emiten los objetos frente a su campo de visión.

En el momento que el usuario activa el sistema de seguridad LAEC, inicia un contador de segundos del tiempo que va trascurriendo, con un mensaje que indica que todo esta bien; una vez que el sensor PIR detecte un movimiento, se enviará una señal que prenderá un LED y que ademáas dará inicio al BUZZER, el cual sonará cinco veces por el intervalo de tiempo de medio segundo. Así mismo dara un mensaje de alerta e iniciará una nuevo conteo de tiempo. 
Por lo tanto, la diferencia entre los dos intervalos, tiempo de inicio y tiempo de detección; da como resultado un parámetro de horas, minutos y segundos  que indican el tiempo transcurrido desde que el usuario ensendió el Sistemas, hasta el ultimo movimiento detectado.

Posteriormente, si el usuario desea saber ese parámetro de tiempo, puede pulzar un botón ubicado al lado izquierdo; de lo contrario, al pulzar el botón del lado derecho,  el sistema se reiniciará, para estar nuevamente activo.
