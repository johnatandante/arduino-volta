#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

const int time_to_sleep = 200;
const char helloWorld[] = {'H','e','l','l','o',',',' ','w','o','r','l','d','!'};

int cursor_position = 0;

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("Hello Dante!");
}

void loop()
{

  lcd.clear();
  lcd.setCursor(cursor_position++,0);
  lcd.print("Hello, world!");

  delay(time_to_sleep);
}
