
const int buttonPin = 2;
const int ledPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(buttonPin); // spingo il bottone, leggo 0, lo lascio viene 1
  digitalWrite(ledPin, !buttonState); // da 0 diventa 1, quindi ALTO


}
