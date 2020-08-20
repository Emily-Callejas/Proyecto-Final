#include <LiquidCrystal>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2, 1);
int PIR = 7;
int BUZZER = 9;
int Pulsador = 6;
int alarma = 0;
int tiempoDeteccion = 0;
int tiempoFinal = 0;
int horas = 0;
int minutos = 0;
int segundos = 0;

void setup (){
    lcd.being(16, 2);
    lcd.print("¡Todo esta bien!"); // Por defecto el cursor esta en (0,0)
    pinMode(PIR, INPUT);
    pinMode(BUZZER, OUPUT);
    pinMode(6, INPUT_PULLUP);
}

void loop(){
    if(digitalRead(7)){
        alarma = 1;
        lcd.setCursor(0,0);
        lcd.print("Detecto algo!!!!");
        tiempoDeteccion = millis();
        delay(1000);
        for(int i = 0; i < 5; i++){
            tone(BUZZER, 5000); //Envía una señal al BUZZER que produce una frecuencia de 5000 Hz.
            delay(1500);
            noTone(BUZZER); // Detiene el BUZZER
            delay(500);
        }
    }

    if (alarma == 1){
        lcd.setCursor(0, 1);
        lcd.print((millis() - tiempoDeteccion) / 1000);
        delay (1000);
    }

    if(!digitalRead(6)){
        alarma = 0;
        lcd.clear();
        lcd.print("Hora Detección:");
    }
}