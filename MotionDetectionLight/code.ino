
int sensorpin=7;
int relaypin=5;

void setup() {
  
  Serial.begin(9600);
  pinMode(sensorpin, INPUT);
  pinMode(relaypin, OUTPUT);

}

void loop() {
  
  int pirstate=digitalRead(sensorpin);

  Serial.println(pirstate);

  if(pirstate == HIGH){

    //turn on the bulb
    digitalWrite(relaypin, LOW);

  }else{

    //turn off the bulb
    digitalWrite(relaypin, HIGH);
  }

}
