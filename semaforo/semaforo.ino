const int ledRedPin    = 12;     
const int ledYellowPin = 11;
const int ledGreenPin  = 10;
void setup() {
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
}

void loop() {
  digitalWrite(ledRedPin, HIGH);
  digitalWrite(ledYellowPin, LOW);
  //digitalWrite(ledGreenPin, LOW);
  delay(3000);
  //digitalWrite(ledRedPin, HIGH);
  digitalWrite(ledYellowPin, HIGH);
  digitalWrite(ledGreenPin, LOW);
  delay(1000);
  digitalWrite(ledRedPin, LOW);
  //digitalWrite(ledYellowPin, HIGH);
  digitalWrite(ledGreenPin, HIGH);
  delay(1000);  
  //digitalWrite(ledRedPin, LOW);
  digitalWrite(ledYellowPin, LOW);
  //digitalWrite(ledGreenPin, HIGH);
  delay(3000);    
  
  //digitalWrite(ledRedPin, LOW);
  digitalWrite(ledYellowPin, HIGH);
  //digitalWrite(ledGreenPin, HIGH);
  delay(2000);
}