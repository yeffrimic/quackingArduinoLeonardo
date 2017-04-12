/*
   abrir firefox linux
   Este ejemplo demuestra el uso de el microcontrolador
   atmega32u4 para emular un teclado y asi poder
    abrir firefox linux
   con tan solo conectar la placa a una computadora.
   Yeffri J. Salazar, Najt Labs Guatemala.
*/

#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(2000);


  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('t');
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.println("firefox themicrofcontrol.wordpress.com && exit");
  delay(1000);
  Keyboard.write(KEY_RETURN);
}

void loop() {

}
