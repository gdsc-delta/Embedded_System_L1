int E = 7;
int D = 8;
int C = 9;
int B = 13;
int A = 12;
int F = 11;
int G = 10;
 
void setup()
{
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}
 
void loop()
{
  _0();
  delay(1000);
  _1();
  delay(1000);
  _2();
  delay(1000);
  _3();
  delay(1000);
  _4();
  delay(1000);
  _5();
  delay(1000);
  _6();
  delay(1000);
  _7();
  delay(1000);
  _8();
  delay(1000);
  _9();
  delay(1000);
}
 
void _0()
{
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH); 
}
void _1()
{
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH); 
}
void _2()
{
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW); 
}
void _3()
{
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
}
void _4()
{
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void _5()
{
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void _6()
{
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void _7()
{
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void _8()
{
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
void _9()
{
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(B, LOW);
  digitalWrite(A, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}
