#include "Adafruit_VL53L0X.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int time_to_sleep = 200;

Adafruit_VL53L0X lox = Adafruit_VL53L0X();
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  Serial.begin(115200);
  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
  }
  
  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  // power 
  Serial.println(F("VL53L0X API Simple Ranging example\n\n")); 

  // initialize the lcd 
  lcd.init();                      
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Adafruit VL53L0X");

}

int „;

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
    
  Serial.print("Reading a measurement... ");
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!
  measureValue = measure.RangeMilliMeter;

  lcd.clear();
  lcd.print("Adafruit VL53L0X");
  lcd.setCursor(0,1);

  if (measure.RangeStatus != 4) {  // phase failures have incorrect data
    Serial.print("Distance (mm): "); 
    Serial.println(measureValue);
    lcd.print("Dist.(mm): ");
    lcd.print(measureValue);
  } else {
    Serial.println(" out of range ");
    lcd.print("out of range");
  }

  delay(250);
}