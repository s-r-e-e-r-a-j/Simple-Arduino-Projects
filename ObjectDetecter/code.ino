int pin_trig = 11;
int pin_echo = 10;
int buzzerpin = 7;
int ledpin = 6;

long duration;
int distance;

void setup() {
  pinMode(pin_trig, OUTPUT);
  pinMode(pin_echo, INPUT);
  pinMode(buzzerpin, OUTPUT);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // Trigger the HC-SR04
  digitalWrite(pin_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(pin_trig, HIGH);
  delayMicroseconds(10); 
  digitalWrite(pin_trig, LOW);

  // Measure the echo pulse
  duration = pulseIn(pin_echo, HIGH, 30000); // 30 ms timeout for 400 cm
  if (duration == 0) {
    distance = -1; // No echo detected
  } else {
    distance = duration / 58; // Convert duration to distance in cm
  }

  // Check distance and activate/deactivate buzzer and LED
  if (distance > 0 && distance < 30) {
    tone(buzzerpin, 262, 250); // Play buzzer
    digitalWrite(ledpin, HIGH);
  } else {
    noTone(buzzerpin); // Stop buzzer
    digitalWrite(ledpin, LOW);
  }

  delay(100); // Add a short delay to stabilize readings
}
