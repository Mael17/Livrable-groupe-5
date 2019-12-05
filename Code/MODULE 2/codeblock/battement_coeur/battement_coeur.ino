int pinLed1, pinLed2, pinLed3,pinLed4,pinLed5,pinLed6,pinLed7,pinLed8,pinLed9,pinLed10; //variables des pins
void setup()
{
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
  //initialisation des modes
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
void loop()
{
    //allumage des dix LED durant 1 seconde
    digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,HIGH);
  digitalWrite(pinLed3,HIGH);
  digitalWrite(pinLed4,HIGH);
  digitalWrite(pinLed5,HIGH);
  digitalWrite(pinLed6,HIGH);
  digitalWrite(pinLed7,HIGH);
  digitalWrite(pinLed8,HIGH);
    digitalWrite(pinLed9,HIGH);
    digitalWrite(pinLed10,HIGH);
    delay(800);
    //on les éteint toutes brièvement
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
    delay(80);
  //Boucle de la variable temps qui augmente
  for (int temps = 1000; temps <= 200; temps += 200)
  {
    //les dix LEDs sont éteintes
    digitalWrite(pinLed1, HIGH);
    delay(temps); 
    delay(100); 
    digitalWrite(pinLed2, HIGH);
    delay(temps);
    delay(100);
    digitalWrite(pinLed3, HIGH);
    delay(temps);
    delay(100);
     digitalWrite(pinLed4, HIGH);
    delay(temps); 
    delay(100); 
     digitalWrite(pinLed5, HIGH);
    delay(temps); 
    delay(100); 
     digitalWrite(pinLed6, HIGH);
    delay(temps); 
    delay(100); 
     digitalWrite(pinLed7, HIGH);
    delay(temps); 
    delay(100); 
     digitalWrite(pinLed8, HIGH);
    delay(temps); 
    delay(100); 
     digitalWrite(pinLed9, HIGH);
    delay(temps);
    delay(100); 
     digitalWrite(pinLed10, HIGH);
    delay(temps);
    delay(100); 
    //la boucle reprend
  }
  //retour au début de la loop();
}
