//define vars here basics 2
int privod=8;//privod prudu na pin 8 dosky digitalny vstup
int ledPin=13;//umiestnenie led na doske digitalny vystup
//digiatl high ma 5v cokolvek menej ako cca 3.5V je LOW
void setup() {
  // put your setup code here, to run once:
  pinMode(privod, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(digitalRead(privod)==HIGH)
 {
    digitalWrite(ledPin, HIGH);
 }
 else
 {
    digitalWrite(ledPin, LOW);
 }
}
