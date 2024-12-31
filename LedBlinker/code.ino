
int redledpin=2;
int yellowledpin=3;
int greenledpin=4;

void setup() {

  pinMode(redledpin, OUTPUT);
  pinMode(yellowledpin, OUTPUT);
  pinMode(greenledpin, OUTPUT);
}

void loop() {
  
  digitalWrite(redledpin, HIGH);
  delay(1000);
  digitalWrite(redledpin, LOW);
  delay(1000);
  digitalWrite(yellowledpin, HIGH);
  delay(1000);
  digitalWrite(yellowledpin, LOW);
  delay(1000);
  digitalWrite(greenledpin, HIGH);
  delay(1000);
  digitalWrite(greenledpin, LOW);
  delay(1000);
  digitalWrite(greenledpin, HIGH);
  delay(1000);
  digitalWrite(greenledpin, LOW);
  delay(1000);
  digitalWrite(yellowledpin, HIGH);
  delay(1000);
  digitalWrite(yellowledpin, LOW);
  delay(1000);
  digitalWrite(redledpin, HIGH);
  delay(1000);
  digitalWrite(redledpin, LOW);
  delay(1000);


}
