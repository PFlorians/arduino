//global vars
byte pin;

void setup() {
  pin=12; //dekrementovat postupne na 9
  Serial.begin(9600); //pouziva digitalne piny 0,1 ako TX, RX, rychlost 9600
  //nastavenie pinov na vystup
  while(pin>=9)
  {
    pinMode(pin, OUTPUT);
    pin--;  
  }
  pin=12;
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  
  
}
