#include <LiquidCrystal>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2, 1);
int PIR = 7;
int Pulsador = 6;
int alarma = 0;
int tiempoDeteccion = 0;

void setup (){
    lcd.being(16, 2);
    lcd.print("¡Todo esta bien!"); // por defecto el cursor esta en (0,0)
    pinMode(PIR, INPUT);
    pinMode(6, INPUT_PULLUP);
}

void loop(){
    if(digitalRead(7)){
        alarma = 1;
        lcd.setCursor(0,0);
        lcd.print("Detecto algo!!!!");
        tiempoDeteccion = millis();
    }

    if (alarma == 1){
        lcd.setCursor(0, 1);
        lcd.print((millis() - tiempoDeteccion) / 1000);
        delay (100);
    }

    if(!digitalRead(6)){
        alarma = 0;
        lcd.clear();
        lcd.print("¡Todo esta bien!");
    }
}