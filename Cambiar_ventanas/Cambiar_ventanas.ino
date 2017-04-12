/*
 * Cambiar de Ventanas.
 * Este ejemplo demuestra el uso de el microcontrolador
 * atmega32u4 para emular un teclado y asi poder
 *  Cambiar de Ventanas. 
 * con tan solo conectar la placa a una computadora.
 * Yeffri J. Salazar, Najt Labs Guatemala. 
 */

#include "Keyboard.h"

void setup() {
Keyboard.begin();
delay(2000);

for(int i =0;i<5;i++){
  
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(KEY_TAB);
delay(1000);
Keyboard.press(KEY_TAB);        
Keyboard.releaseAll();
delay(1000);
}
}

void loop() {

}
