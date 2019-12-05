void setup() {

for (int i=2; i<13;i++){
  //boucle allumant les LEDS de la broche 2 à la broche 13
  pinMode(i,OUTPUT);
}
}

void loop() {
    //boucle allumant les LEDS de la broche 2 à la broche 13
for (int i=2; i<13;i++){
  digitalWrite(i,HIGH);
  delay(100);
}
for (int i=13; i>2;i--){
  //boucle éténiant les LEDS de manière décroissante de la broche 13 à la 2 
  digitalWrite(i,LOW);
  delay(100);
 // digitalWrite(i,LOW);
}
}
