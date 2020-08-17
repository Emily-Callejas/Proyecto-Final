#include <LiquidCrystal>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2, 1);
int PIR;

void setup (){
    lcd.being(16, 2);
    lcd.print("¡Todo esta bien!");
    PIR = 0;
    pinMode(7, INPUT);
}

void loop(){
    if(digitalRead(7)){
        lcd.setCursor(0,0);
        lcd.print("Detecto algo!!!!");
        lcd.setCursor(0,1);
        lcd.print(millis() / 1000);
        delay (500);
    }
}