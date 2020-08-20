#include <LiquidCrystal>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2, 1);
int PIR = 7;
int BUZZER = 9;
int LED = 8;
int PULSADOR = 6;
int alarma = 0;
long tiempoDeteccion = 0;
long tiempoTrancurrido = 0;
long tiempoFinal = 0;
long horas = 0;
long minutos = 0;
long segundos = 0;

void setup (){
    lcd.being(16, 2);
    lcd.print("¡Todo esta bien!"); // Por defecto el cursor esta en (0,0)
    pinMode(PIR, INPUT);
    pinMode(BUZZER, OUPUT);
    pinMode(LED, OUPUT)
    pinMode(PULSADOR, INPUT_PULLUP);
}

void loop(){
    millis();
    delay(100);

    if(digitalRead(7))
    {
        int contador = 0;
        alarma = 1;
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Detecto algo!!!!");
        tiempoDeteccion = millis();
        delay(100);

        while(contador < 5)
        {
            digitalWrite(LED, HIGH);
            tone(BUZZER, 5000); //Envía una señal al BUZZER que produce una frecuencia de 5000 Hz.
            delay(1000);
            noTone(BUZZER); // Detiene el BUZZER
            delay(500);
            contador += 1;
        }

        digitalWrite(LED, LOW);
    }

    if (alarma == 1){
        lcd.setCursor(0, 1);
        tiempoTrancurrido = ((millis() - tiempoDeteccion)/1000);
        lcd.print(tiempoTrancurrido);
        lcd.print(" seg.");
        delay(100);
    }
    if (pulsada == 1)
    {
  	    if(!digitalRead(6) == 1)
  	    {
    	    alarma = 0;
    	    lcd.clear();
      	    lcd.setCursor(0, 0);
    	    lcd.print("Hora Deteccion:");
    	    tiempoFinal = ((millis() / 1000) - tiempoTranscurrido);
      
    	    if(tiempoFinal > 3600)
    	    {
      		    horas = tiempoFinal / 3600;
      		    tiempoFinal = tiempoFinal % 3600;
      		    minutos = tiempoFinal / 60;
      		    segundos = tiempoFinal % 60;
          
          	    if(horas < 10 && minutos < 10 && segundos < 10)
                {
              	    lcd.setCursor(0, 1);
      			    lcd.print(lcd.print("0") + lcd.print(horas) + lcd.print(":0") + lcd.print(minutos) + lcd.print(":0") + lcd.print(segundos));   
      			    delay(100);	
                }         
          	
          	    else if(horas > 10 && minutos < 10 && segundos < 10)
                {
              	    lcd.setCursor(0, 1);
      			    lcd.print(lcd.print(horas) + lcd.print(":0") + lcd.print(minutos) + lcd.print(":0") + lcd.print(segundos));   
      			    delay(100);	
                }
          
          	    else if(horas < 10 && minutos > 10 && segundos < 10)
                {
              	    lcd.setCursor(0, 1);
      			    lcd.print(lcd.print("0") + lcd.print(horas) + lcd.print(":") + lcd.print(minutos) + lcd.print(":0") + lcd.print(segundos));   
      			    delay(100);	
                }
          
          
          	    else if(horas > 10 && minutos > 10 && segundos < 10)
                {
              	    lcd.setCursor(0, 1);
      			    lcd.print(lcd.print(horas) + lcd.print(":") + lcd.print(minutos) + lcd.print(":0") + lcd.print(segundos));   
      			    delay(100);	
                }
          
          
          	    else if(horas < 10 && minutos < 10 && segundos > 10)
                {
              	    lcd.setCursor(0, 1);
      			    lcd.print(lcd.print("0") + lcd.print(horas) + lcd.print(":0") + lcd.print(minutos) + lcd.print(":") + lcd.print(segundos));   
      			    delay(100);	
                }        
          
          	    else if(horas > 10 && minutos < 10 && segundos > 10)
                {
              	    lcd.setCursor(0, 1);
                    lcd.print(lcd.print(horas) + lcd.print(":0") + lcd.print(minutos) + lcd.print(":") + lcd.print(segundos));   
                    delay(100);	
                }
          
                else if(horas < 10 && minutos > 10 && segundos > 10)
                {
                    lcd.setCursor(0, 1);
                    lcd.print(lcd.print("0") + lcd.print(horas) + lcd.print(":") + lcd.print(minutos) + lcd.print(":") + lcd.print(segundos));   
                    delay(100);	
                }
          
                else
                {
                    lcd.setCursor(0, 1);
                    lcd.print(lcd.print(horas) + lcd.print(":") + lcd.print(minutos) + lcd.print(":") + lcd.print(segundos));   
                    delay(100);
                }
            }
    	}
    
    	else if(tiempoFinal < 3600 && tiempoFinal > 60)
    	{
      		minutos = tiempoFinal / 60;
      		segundos = tiempoFinal % 60;
          
          	if(minutos < 10 && segundos < 10)
            {
            	lcd.setCursor(0, 1);
      			lcd.print(lcd.print("00:0") + lcd.print(minutos) + lcd.print(":0") + lcd.print(segundos));
      			delay(100);	  
            }
            
            else if(minutos > 10 && segundos < 10)
            {
             	lcd.setCursor(0, 1);
      			lcd.print(lcd.print("00:") + lcd.print(minutos) + lcd.print(":0") + lcd.print(segundos));
      			delay(100);	
            }
              
            else if(minutos < 10 && segundos > 10)
            {
             	lcd.setCursor(0, 1);
      			lcd.print(lcd.print("00:0") + lcd.print(minutos) + lcd.print(":") + lcd.print(segundos));
      			delay(100);	
            }
              
            else
            {
              	lcd.setCursor(0, 1);
      			lcd.print(lcd.print("00:") + lcd.print(minutos) + lcd.print(":") + lcd.print(segundos));
      			delay(100);
            }             
    	}
    
    	else if(tiempoFinal < 60)
    	{
      		segundos = tiempoFinal;

          	if(segundos < 10)
            {
              	lcd.setCursor(0, 1);
      			lcd.print(lcd.print("00:") + lcd.print("00:0") + lcd.print(segundos));
      			delay(100);
            }
          
          	else
            {
  				lcd.setCursor(0, 1);
          		lcd.print(lcd.print("00:") + lcd.print("00:") + lcd.print(segundos));
      			delay(100);
            }
    	}
      	
      	pulsada = 0;
  	}
  
   if(alarma == 1)
   {
  	    pulsada = 1;
   }
}