#define REDPIN    9
#define GREENPIN  10
#define BLUEPIN   11
void setup() {
  Serial.begin(115200);
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}
bool flagr = 1;  
byte r = 0;
bool flagg = 1;
byte g = 85;
bool flagb = 1;
byte b = 171;
void loop() {
  analogWrite(REDPIN, r);
  analogWrite(GREENPIN, g);
  analogWrite(BLUEPIN, b);
  r++;
  g++;
  b++;
  Serial.print(r);
  Serial.print(" ");
  Serial.print(g);
  Serial.print(" ");
  Serial.println(b);
  delay(30);



}