
int inputpin=13;
int ledpin=3;
int buzzerpin=2;
int value=0;
bool pirstate=false;


void setup() {
  Serial.begin(115200);
  pinMode(inputpin, INPUT);
  pinMode(ledpin, OUTPUT);
  
}

void loop() {

  value=digitalRead(inputpin);
  if(value == 1){
    if(pirstate == false){
      Serial.println("Motion Detected");
      digitalWrite(ledpin, HIGH);
      tone(buzzerpin, 262, 250);
      pirstate=true;
    }
  }else{
    digitalWrite(ledpin, LOW);
    noTone(buzzerpin);
     if(pirstate == true){
      Serial.println("Motion Ended");
      pirstate=false;
     }
  }
  
}
