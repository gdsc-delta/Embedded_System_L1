#include <Servo.h>
#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);
 // definition
# define buz    10 
# define temp  A0 
# define gas   A2 
# define red   3
# define green 2
# define blue  13

Servo myservo;
float temperature_c ;
int GasRead ;
  /* ******************************************* */


void setup()
{
      Serial.begin(9600);
  
      pinMode(buz,OUTPUT);
    
      pinMode(temp,INPUT);
 
      pinMode(gas,INPUT);
  
      pinMode(red,OUTPUT);
  
      pinMode(green,OUTPUT);
  
      pinMode(blue,OUTPUT);
  
      myservo.attach(9);
  
   /* ******************************************* */

      // startup
      lcd.begin(16,2);
      lcd.setCursor(7,0);
      lcd.print("HI");
      delay(2000);
      lcd.clear();
  
      lcd.setCursor(3,0);
      lcd.print("mintor");
      delay(2000);
      lcd.clear();
  
      lcd.setCursor(5,0);
      lcd.print("GDSC");
      delay(2000);
      lcd.clear();
  
      lcd.setCursor(3,0);
      lcd.print("Fire System");
      delay(1500);
      lcd.clear();
   /* ******************************************* */

}

void loop()
{
  
     Temp();
     GAS();
  
    if(temperature_c >= 60 )  
   {
      // El donia b tewla 
      tone(buz,1000);             // open Alarm
      
      myservo.write(90);        // open door
     
      digitalWrite(green,LOW);   // open Alarm lights
      digitalWrite(red,HIGH);
      delay(100);
      digitalWrite(red,LOW);
      delay(100);
  
   }
 
  
     else if(temperature_c < 60)
   {
          // tafenaha  kollo taht el saytrah
    
      noTone(buz);                   // close Alarm
    
      myservo.write(0);            //close door
    
      digitalWrite(red,LOW);     // close Alarm lights
      digitalWrite(green,HIGH);
      delay(1000);
      digitalWrite(green,LOW);
      delay(1000);
   }
  

}
   /* ******************************************* */


       // Gas Value
void GAS()
{
      GasRead = analogRead(gas);
      lcd.setCursor(1,1) ;
      lcd.print("Gas = ") ;
      lcd.print(GasRead);
}
   /* ******************************************* */

         // temperture value   
void Temp()
{
      int sensorRead = analogRead(temp);
      float voltage  = sensorRead * (5.0 / 1023) ;
      temperature_c  = (voltage - 0.5) * 100 ;
      // LCD
      lcd.setCursor(0,0) ;
      lcd.print("TEMP. = ") ;
      lcd.print(temperature_c) ;
      lcd.print(char(178));
      lcd.print(" C") ;
  
} 
  /* ******************************************* */
