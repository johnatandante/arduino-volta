//HC-SR04 Sensore ultrasuoni
#define REDPIN    9
#define GREENPIN  10
#define BLUEPIN   11

const int triggerPort = 7;
const int echoPort = 8;

byte r = 255;
byte g = 0;
byte b = 0;

void setup() {
  pinMode( triggerPort, OUTPUT );
  pinMode( echoPort, INPUT );
  Serial.begin( 115200 );
  Serial.println( "Sensore ultrasuoni HCSR04: ");
  
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

void loop() {
  digitalWrite( triggerPort, LOW ); // mette LOW l'uscita del trigger

  //invia un impulso di 10 microsecondi sul trigger
  digitalWrite( triggerPort, HIGH ); 
  delayMicroseconds( 10 );
  digitalWrite( triggerPort, LOW );

  long duration = pulseIn( echoPort, HIGH ); // legge la durata dell'eco di ritorno in μs

  long distance = 0.0175 * duration;  // approssimando a 343 m/s la velocità del suono

  Serial.print( "durata: " );
  Serial.print( duration );
  Serial.print( " , " );
  Serial.print( "distanza: " );

  //dopo 38ms si è fuori dalla portata del sensore
  if ( duration > 38000 ) {
    Serial.println( "fuori portata");
    r = 255;
    g = 0;
    b = 0;
  }
  else {
    Serial.print( distance );
    Serial.println( " cm" );

    r = 0;
    g = 255;
    b = 0;

  }

  analogWrite(GREENPIN, g);
  analogWrite(BLUEPIN, b);
  analogWrite(REDPIN, r);

  // si aspettano 1.5 secondi prima di inviare un altro ping ultrasonico
  delay( 1500 );
}