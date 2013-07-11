///balam soto  bodysounsuit v1  some time  in 2010
//This  code is in the public domain.

int analogValue0 = 0;    // variable to hold the analog value
int analogValue1 = 0;
int analogValue2 = 0;    
int analogValue3 = 0;
int analogValue4 = 0;    
int analogValue5 = 0;  //  lasT one  variable to hold the analog value 





void setup() {
  
  //keep this speed  seems to work fine for serial transmition on mac os
  //besides no need for faster speed
  
  Serial.begin(57600);



  
}

void loop() {
  

  
  
analogValue0 = analogRead(0);
analogValue1 = analogRead(1);
analogValue2 = analogRead(2);
analogValue3 = analogRead(3);
analogValue4 = analogRead(4);
analogValue5 = analogRead(5);





  
 
  // print as an ASCII encoded  the space after digit is to have clean
  //print if you want to use  Osc after serial conversion
  
  
Serial.print("0 ");
Serial.println(analogValue0);  
Serial.print("1 ");
Serial.println(analogValue1);
Serial.print("2 ");
Serial.println(analogValue2);
Serial.print("3 ");
Serial.println(analogValue3);
Serial.print("4 ");
Serial.println(analogValue4);
Serial.print("5 ");
Serial.println(analogValue5);
  
delay(100);

///ho yeaaaa,   need to start clean, and have a smooth buffer


  
Serial.flush();

///that's is it,   now  run to your computer and  start screaming  it works,

  
  


 
  
  

  
}

