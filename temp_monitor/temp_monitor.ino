/* acquisizione di temperatura con LM35DZ */
float tempC; // dichiarazione della variabile in virgola mobile della temperatura
float tempC35; // dichiarazione della variabile in virgola mobile della temperatura
void setup()
{
  analogReference(INTERNAL);  // imposta Vref = 1.1V
  Serial.begin(115200); // inizializza la porta seriale a 9600 bit/s
}
void loop()
{
  int adc_value = analogRead(A0); // lettura del valore analogico
  int adc_value35 = analogRead(A5);

  //tempC = (5.0 * adc_value * 100.0) / 1024; // calcolo della temperatura su un fondo scala di 5.0 volt
  tempC = adc_value / 9.309;  // per un f.s. di 1,1 volt
  tempC35 = adc_value35 / 9.309;  // per un f.s. di 1,1 volt
  
  Serial.print("adc_value = ");
  Serial.print(adc_value); // mandar al monitor seriale la lettura della temperatura
  Serial.print("\ttempC = ");
  Serial.print(tempC); // mandar al monitor seriale la lettura della temperatura
  Serial.print("\tadc_value35 = ");
  Serial.print(adc_value35); // mandar al monitor seriale la lettura della temperatura
  Serial.print("\ttempC35 = ");
  Serial.println(tempC35); // mandar al monitor seriale la lettura della temperatura

  delay(1000);
}