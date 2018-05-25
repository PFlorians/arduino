/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */

void s()
{
  int i;
  for(i=0;i<3;i++)
  {
    digitalWrite(11, HIGH);
    delay(200);             
    digitalWrite(11, LOW);   
    delay(200);
  }
}
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int i=0;
  s();
  delay(500);
  for(i=0;i<3;i++)
  {
    digitalWrite(11, HIGH);
    delay(500);             
    digitalWrite(11, LOW);   
    delay(500);
  }
  s();
  delay(3000);              
}
