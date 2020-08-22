# PROYECTO DE ROBÓTICA SEGURIDAD LAEC

## ¿Cómo funciona LAEC?

> Laec cuenta con un sensor de movimiento Pasivo Infra-Rojo (PIR) que detecta radiación Infra-Roja que emiten los objetos frente a su campo de visión.

En el momento que el usuario activa el sistema de seguridad LAEC, se inicia un contador de segundos del tiempo que va trascurriendo, con un mensaje que indica que todo esta bien: 

![Inicio del sistema](https://1.bp.blogspot.com/-0xJnjK6Euh0/X0CSE6Q9JkI/AAAAAAAAAPU/3UvWIHvtM8IdfRB2ZULrbG6oHnftzOSjgCNcBGAsYHQ/s640/IMG-20200820-WA0033.jpg "Seguridad LAEC reference")

Una vez que el sensor PIR detecte un movimiento, se enviará una señal que prenderá un LED y que ademáas dará inicio al BUZZER, el cual sonará cinco veces con intervalos de tiempo de medio segundo. Así mismo dara un mensaje de alerta e iniciará una nuevo conteo de tiempo.

![Detección de un movimiento](https://1.bp.blogspot.com/-cTME4-LUXoI/X0CSIlUlq3I/AAAAAAAAAPY/1_JNKKzArMoWxAIXx4T2j3lcdZdbyfjhwCNcBGAsYHQ/s640/IMG-20200820-WA0034.jpg "Seguridad LAEC reference")

Por lo tanto, la diferencia entre los dos intervalos, tiempo de inicio y tiempo de detección; da como resultado un parámetro de horas, minutos y segundos  que indican el tiempo transcurrido desde que el usuario ensendió el Sistemas, hasta el ultimo movimiento detectado.

![Muestra el parámetro de tiempo](https://1.bp.blogspot.com/-ZK2u_kmJtpA/X0CSMUKx5VI/AAAAAAAAAPc/3yF6KT_hNxE-pqrPXlb5IVIeqkVwMgNKgCNcBGAsYHQ/s640/IMG-20200820-WA0036.jpg "Seguridad LEAC reference")

Posteriormente, si el usuario desea saber ese parámetro de tiempo, puede pulzar un botón ubicado al lado izquierdo; de lo contrario, al pulzar el botón del lado derecho,  el sistema se reiniciará, para estar nuevamente activo y repetir el proceso ya mencionado.
