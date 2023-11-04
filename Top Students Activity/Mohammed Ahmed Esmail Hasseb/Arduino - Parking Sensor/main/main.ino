
// pins numbers
const int trigPin = 2;
const int echoPin = 3;
const int buzz = 4;

//  variables
long duration;
int distance;


void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzz,OUTPUT);
   Serial.begin(9600);
}


void loop() {
  // ultrasonic 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
      delay(10);

  // code 

 if(distance < 50)
 {
    tone(buzz,300,100);      // bug
    // delay(500);
 }
  
  
 if(distance > 50 && distance < 100)
 {
   tone(buzz,500,100);        //bug
   delay(500);
   digitalWrite(buzz,0);
   delay(500);
 }
  
  
  if(distance > 100)
 {
   digitalWrite(buzz,0);
//   delay(500);                // bug
 } 
  
  
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
}