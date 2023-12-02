int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long currentTime = millis();
  Serial.println(currentTime);
  
  // Blink for the first 1 minutes
  if (currentTime  < 60000) {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  } else {
    // Turn off LED after 1 minutes
    digitalWrite(ledPin, LOW);
  }
}
