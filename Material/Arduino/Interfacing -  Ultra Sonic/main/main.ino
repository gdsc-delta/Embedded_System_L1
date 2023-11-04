
#define trigPin     9
#define echoPin     7
#define Baud_Rate   9600
#define SOUND_SPEED 0.0343 // Speed of sound in cm/us

void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(Baud_Rate);
}

void loop(){

  Serial.print(grapDistance());
  Serial.println(" cm");

}

// int - for rounding 
int grapDistance(){
  digitalWrite(trigPin, LOW);

  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  return (pulseIn(echoPin, HIGH)*SOUND_SPEED)/2.0;
}