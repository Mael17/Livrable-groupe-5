int pinLed1, pinLed2, pinLed3,pinLed4,pinLed5,pinLed6,pinLed7,pinLed8,pinLed9,pinLed10;
void setup() {
   //initialisation des variables
 pinLed1 = 2;
  pinLed2 = 3;
  pinLed3 = 4;
  pinLed4 = 5;
  pinLed5 = 6;
  pinLed6 = 7;
  pinLed7 = 8;
  pinLed8 = 9;
  pinLed9 = 10;
  pinLed10= 11;
  //initialisation 
   pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
  pinMode(pinLed9, OUTPUT);
  pinMode(pinLed10, OUTPUT);
  //mise à 0V de chaque pin
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  digitalWrite(pinLed6, LOW);
  digitalWrite(pinLed7, LOW);
  digitalWrite(pinLed8, LOW);
  digitalWrite(pinLed9, LOW);
  digitalWrite(pinLed10, LOW);
}

void loop() {
  //allumage manuelle des LEDS désignées
 digitalWrite(pinLed1,HIGH);
 
  digitalWrite(pinLed3,HIGH);
  
  digitalWrite(pinLed5,HIGH);
  
  digitalWrite(pinLed7,HIGH);
  
    digitalWrite(pinLed9,HIGH);
    
    delay(1000);
    digitalWrite(pinLed1,LOW);
 
  digitalWrite(pinLed3,LOW);
  
  digitalWrite(pinLed5,LOW);
  
  digitalWrite(pinLed7,LOW);
  
    digitalWrite(pinLed9,LOW);
    
    digitalWrite(pinLed2,HIGH);
 
  digitalWrite(pinLed4,HIGH);
  
  digitalWrite(pinLed6,HIGH);
  
  digitalWrite(pinLed8,HIGH);
  
    digitalWrite(pinLed10,HIGH);
    delay(1000);
      digitalWrite(pinLed2,LOW);
 
  digitalWrite(pinLed4,LOW);
  
  digitalWrite(pinLed6,LOW);
  
  digitalWrite(pinLed8,LOW);
  
    digitalWrite(pinLed10,LOW);
}
