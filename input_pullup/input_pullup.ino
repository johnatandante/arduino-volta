
const int buttonPin = 2;
const int ledRedPin = 12;
const int ledYellowPin = 11;
const int ledGreenPin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  digitalWrite(ledRedPin, HIGH);
  digitalWrite(ledYellowPin, LOW);
  digitalWrite(ledGreenPin, LOW);

  // utilizzo la porta seriale ed imposto la velocità
  Serial.begin(115200);

}

bool isStarted = false;

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW)
    isStarted = !isStarted;
  Serial.println(isStarted);
  if (isStarted == true) {
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledGreenPin, HIGH);
    delay(500);
    digitalWrite(ledRedPin, LOW);
    digitalWrite(ledYellowPin, HIGH);
    digitalWrite(ledGreenPin, LOW);
    delay(500);
    digitalWrite(ledRedPin, HIGH);
    digitalWrite(ledYellowPin, LOW);
    digitalWrite(ledGreenPin, LOW);
    delay(500);
  } else
    delay(500);
}
