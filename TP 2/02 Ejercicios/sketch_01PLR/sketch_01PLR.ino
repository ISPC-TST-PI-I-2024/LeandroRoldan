  const int LED=2;
const int BOTON=8;
int iniciar;
void setup() {

// put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(8, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
iniciar = digitalRead(8);
if (iniciar = HIGH)
{
digitalWrite(2, HIGH);}
else
 { digitalWrite(2,LOW);

}
}
