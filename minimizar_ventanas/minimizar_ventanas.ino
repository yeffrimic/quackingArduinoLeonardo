/*
 * Minimizar Ventanas.
 * Este ejemplo demuestra el uso de el microcontrolador
 * atmega32u4 para emular un teclado y asi poder
 * minimizar todas las ventanas 
 * con tan solo conectar la placa a una computadora.
 * Yeffri J. Salazar, Najt Labs Guatemala. 
 */

#include "Keyboard.h"

void setup() {
Keyboard.begin();
delay(2000);

Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('d');
Keyboard.releaseAll();


}

void loop() {

}
