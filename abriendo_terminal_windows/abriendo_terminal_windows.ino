/*
   abrir terminales windows
   Este ejemplo demuestra el uso de el microcontrolador
   atmega32u4 para emular un teclado y asi poder
    abrir terminales windows
   con tan solo conectar la placa a una computadora.
   Yeffri J. Salazar, Najt Labs Guatemala.
*/

#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("cmd");
  delay(2000);
  Keyboard.write(KEY_RETURN);
  delay(2000);
  

}

void loop() {

}
