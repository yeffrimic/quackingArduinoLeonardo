#include "Keyboard.h"


void setup() {
  // put your setup code here, to run once:
Keyboard.begin();
delay(2000);

Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(KEY_F4);
Keyboard.releaseAll();


}

void loop() {
  // put your main code here, to run repeatedly:

}
