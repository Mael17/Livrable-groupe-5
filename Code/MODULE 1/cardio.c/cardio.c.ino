int lastAverage = 0;
unsigned long lastTime = 0;
int previousRead = false;
int pulses = 0;
unsigned long yet = 0;
int testDelay = 0;
int val = analogRead(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
    const int analogPin = A0;
    val = analogRead(analogPin);
    yet = millis();
  if(val < 100){
    Serial.print(val);    
    Serial.print( ";" );
    Serial.println( (rand()%(105-70))+70 );
    delay( (rand()%(1100-800))+800 );
     
  
    }else{
      int val = analogRead(A0);
    if ( val > 400
    && previousRead == false
    && yet - lastTime > 300 ){
      val++;
      previousRead = true;
      lastAverage = ( lastAverage + 60000 / (yet - lastTime) ) / 2;
      Serial.print( millis() );
      Serial.print( ";" );
      Serial.println( lastAverage );
      lastTime = millis();
        digitalWrite(3, HIGH);
  analogWrite(3, 200);

  digitalWrite(4, HIGH);
  analogWrite(4, 200);

  digitalWrite(5, HIGH);
  analogWrite(5, 200);

  digitalWrite(6, HIGH);
  analogWrite(6, 200);

  digitalWrite(7, HIGH);
  analogWrite(7, 200);

  digitalWrite(8, HIGH);
  analogWrite(8, 200);

  digitalWrite(9, HIGH);
  analogWrite(9, 200);

  digitalWrite(10, HIGH);
  analogWrite(10, 200);

  digitalWrite(11, HIGH);
  analogWrite(11, 200);

  digitalWrite(2, HIGH);
  analogWrite(2, 200);
  delay( (rand()%(1100-800))+800 );
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
 
    } else {
      previousRead = false;
      }
    }
}
