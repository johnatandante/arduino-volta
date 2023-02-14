#include <ButtonDebounce.h>

// button set pin & delay
ButtonDebounce button(2, 50);
void setup() {
  Serial.begin(115200);
}

void loop() {
  button.update();
  if(button.state() == LOW){
    Serial.println("Clicked");
  } else {
    Serial.println("Not Clicked");
  }
  delay(200);
}
