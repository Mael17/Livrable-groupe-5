int pinLed1, pinLed2, pinLed3,pinLed4,pinLed5,pinLed6,pinLed7,pinLed8,pinLed9,pinLed10;
void setup() {
 //Serial.begin(9600);
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
  //initialisation des LEDS
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
  
}

void loop() {
  //allumage des LEDS
  int choix,temps;
  choix=random (2,13);
  //Ici le logiciel choisi de manière aléatoire l'allumage des LEDS entre la broche 2 et la broche 13
  temps=100;
if (choix==2){
 digitalWrite(pinLed1,HIGH);
 delay(temps);
 digitalWrite(pinLed1,LOW);
}else if (choix==3){
  digitalWrite(pinLed2,HIGH);
  delay(temps);
  digitalWrite(pinLed2,LOW);
  }else if (choix==4){
  digitalWrite(pinLed3,HIGH);
  delay(temps);
  digitalWrite(pinLed3,LOW);
} else if (choix==5){
  digitalWrite(pinLed4,HIGH);
  delay(temps);
  digitalWrite(pinLed4,LOW);
  }else if (choix==6){
  digitalWrite(pinLed5,HIGH);
  delay(temps);
  digitalWrite(pinLed5,LOW);
  }else if (choix==7){
  digitalWrite(pinLed6,HIGH);
  delay(temps);
  digitalWrite(pinLed6,LOW);
  }else if (choix==8){
  digitalWrite(pinLed7,HIGH);
  delay(temps);
  digitalWrite(pinLed7,LOW);
  }else if (choix==9){
  digitalWrite(pinLed8,HIGH);
  delay(temps);
  digitalWrite(pinLed8,LOW);
  }else if (choix==10){
  digitalWrite(pinLed9,HIGH);
  digitalWrite(pinLed9,LOW);
  delay(1000);
  }else if (choix==11){
  digitalWrite(pinLed10,HIGH);
  delay(1000);
  digitalWrite(pinLed10,LOW);
  }
}
