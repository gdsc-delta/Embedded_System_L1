//Led:
# define red    4 
# define green  2 
# define blue   3 

//Buzzer:
# define buz    7 

//button
# define button_1 A4 

// ultrasonic 
# define trig     A0
# define echo     A1

//variable
int distance = 0;
int reading  = 0;  
int counter  = 0;
char flag=0;
char flag2=0;



/* ******************************************* */

void button();
void ultrasonic();
void safe();
void warm();
void Danger();
void stop();

/* ******************************************* */

void setup()
{
   //led
   pinMode(red,OUTPUT);
   pinMode(green,OUTPUT);
   pinMode(blue,OUTPUT);
  
   //Buzzer:
   pinMode(buz,OUTPUT);
  
   // button
   pinMode(button_1,INPUT);

   //Serial:
   Serial.begin(9600);

   //ultrasonic
   pinMode(trig,OUTPUT);
   pinMode(echo,INPUT);
  Serial.begin(9600);
}

  /* ******************************************* */

void loop()
{ 
  Serial.println(counter);
  ultrasonic();
  reading=digitalRead(A4);
  button();
        
   
  
   if (counter==1)
         {
           stop();           
         }
      
     else if (counter==0)
   {
       
       if (distance>40)
       {
           safe();
       }
       else if (distance < 40 && distance > 20)
       {
           warm();
       }
       else if (distance < 20) 
      {
         Danger();
      }
   }
  
}



   /* ******************************************* */

void ultrasonic()
{
   digitalWrite(trig,LOW);
   delayMicroseconds(2);
   digitalWrite(trig,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig,LOW);
   distance=(pulseIn(echo,HIGH))/57;
   Serial.println(distance);
}

  /* ******************************************* */

void safe()
{
   tone(buz,1000,200);
   digitalWrite(green,HIGH);
   digitalWrite(blue,LOW);
   digitalWrite(red,LOW);
   delay(500);
   digitalWrite(buz,LOW);
   digitalWrite(green,LOW);
   digitalWrite(blue,LOW);
   digitalWrite(red,LOW);
   delay(500);
}
    /* ******************************************* */

void warm()
{

   tone(buz,1000,100);
   digitalWrite(green,LOW);
   digitalWrite(blue,HIGH);
   digitalWrite(red,LOW);
   delay(200);
   digitalWrite(buz,LOW);
   digitalWrite(green,LOW);
   digitalWrite(blue,LOW);
   digitalWrite(red,LOW);
   delay(200);
}

  /* ******************************************* */

void Danger()
{

   tone(buz,1000);
   digitalWrite(green,LOW);
   digitalWrite(blue,LOW);
   digitalWrite(red,HIGH);
}

  /* ******************************************* */

void stop()
{
      noTone(buz);
      digitalWrite(green,LOW);
      digitalWrite(blue,LOW);
      digitalWrite(red,LOW);

}

  /* ******************************************* */

void button()
{
if (reading==HIGH &&  flag2==0)
    {
      
         flag=1;
      counter=1;
      
    }
      else if(reading==LOW &&  flag==1)
      {
     flag2=1;
    }
  else if(reading==HIGH &&  flag2==1)
      {
       flag=0;
      counter=0;
      } 
  else if(reading==LOW &&  flag==0)
      {
     flag2=0;
    }
}

  /* ******************************************* */

