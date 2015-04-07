/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int nextState1,nextState2,nextState3,nextState4,nextState5,nextState6;
int prevState1,prevState2,prevState3,prevState4,prevState5,prevState6;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);  
}

// the loop routine runs over and over again forever:
void loop() {

  nextState1 = digitalRead(2);
  nextState2 = digitalRead(3);
  nextState3 = digitalRead(4);
  nextState4 = digitalRead(5);
  nextState5 = digitalRead(6);
  nextState6 = digitalRead(7);
  
  
  /*
  //Turn on tracks
  if(prevState1 == 0 && nextState1 == 1)
   Serial.print("a1");
  if(prevState2 == 1 && nextState2 == 0)
   Serial.print("b1");
  if(prevState3 == 1 && nextState3 == 0)
   Serial.print("c1");
  if(prevState4 == 1 && nextState4 == 0)
   Serial.print("d1");
  if(prevState5 == 1 && nextState5 == 0)
   Serial.print("e1");
  if(prevState6 == 1 && nextState6 == 0)
   Serial.print("f1");
   
  //Turn off tracks  
  if(prevState1 == 1 && nextState1 == 0)
   Serial.print("a0");
  if(prevState2 == 0 && nextState2 == 1)
   Serial.print("b0");
  if(prevState3 == 0 && nextState3 == 1)
   Serial.print("c0");
  if(prevState4 == 0 && nextState4 == 1)
   Serial.print("d0");
  if(prevState5 == 0 && nextState5 == 1)
   Serial.print("e0");
  if(prevState6 == 0 && nextState6 == 1)
   Serial.print("f0");
  */
  
  if(prevState1 != nextState1)
   Serial.print("a");
  if(prevState2 != nextState2)
   Serial.print("b");
  if(prevState3 != nextState3)
   Serial.print("c");
  if(prevState4 != nextState4)
   Serial.print("d");
  if(prevState5 != nextState5)
   Serial.print("e");
  if(prevState6 != nextState6)
   Serial.print("f");
  
  prevState1 = nextState1; 
  prevState2 = nextState2;
  prevState3 = nextState3;
  prevState4 = nextState4;
  prevState5 = nextState5;
  prevState6 = nextState6;
  
  delay(250);
  
  /*Serial.print("button 1 = ");
  Serial.println(digitalRead(2));
  Serial.print("button 2 = ");
  Serial.println(digitalRead(3));
  Serial.print("button 3 = ");
  Serial.println(digitalRead(4));
  Serial.print("button 4 = ");
  Serial.println(digitalRead(5));
  Serial.print("button 5 = ");
  Serial.println(digitalRead(6));
  Serial.print("button 6 = ");
  Serial.println(digitalRead(7));
  Serial.println("");
  delay(1000);        // delay in between reads for stability
  */
}



