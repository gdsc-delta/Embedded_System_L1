const int trigPin = 6;    // Ultrasonic sensor trigger pin
const int echoPin = 5;    // Ultrasonic sensor echo pin
const int buzzerPin = 13;  // Buzzer pin
const int potentiometerPin = A0;  // Potentiometer analog input pin

int distance = 0;
int volume = 0;

void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  volume = map(analogRead(potentiometerPin), 0, 1023, 0,255);

  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);

unsigned long duration = pulseIn(echoPin,HIGH);
distance= duration*0.034/2;

Serial.print("Distance: ");
Serial.println(distance);


if (distance<50) {
tone(buzzerPin,volume);
} else if (distance>=50 && distance<=100){
tone(buzzerPin,volume); 
delay(500); 
noTone(buzzerPin); 
delay(500); 
} else {
noTone(buzzerPin); 
}

delay(100);
}