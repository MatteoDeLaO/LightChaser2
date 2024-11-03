void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT); // the four pins are now outputs
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(9,1);  //pin 9 is on while 10,11,12 are off
  digitalWrite(10,0);  
  digitalWrite(11,0);
  digitalWrite(12,0);
  delay(50);   // wait 50 milliseconds 
  digitalWrite(9,0);  // pin 10 is on while 9,11,12 is off
  digitalWrite(10,1);
  digitalWrite(11,0);  
  digitalWrite(12,0);                   
  delay(50);  // wait 50 milliseconds
  digitalWrite(9,0);  //pin 11 is on while 9,10,12 is off
  digitalWrite(10,0);  
  digitalWrite(11,1);
  digitalWrite(12,0);                  
  delay(50);  //wait 50 milliseconds
  digitalWrite(9,0);  // pin 12 is on while 9,10,11 is off
  digitalWrite(10,0);  
  digitalWrite(11,0);
  digitalWrite(12,1);  
  delay(50);  //wait 50 milliseconds 
}
