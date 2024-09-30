/*


          ██████╗    ██╗    ██████╗    ██╗   ████████╗    █████╗    ██╗
          ██╔══██╗   ██║   ██╔════╝    ██║   ╚══██╔══╝   ██╔══██╗   ██║
          ██║  ██║   ██║   ██║  ███╗   ██║      ██║      ███████║   ██║
          ██║  ██║   ██║   ██║   ██║   ██║      ██║      ██╔══██║   ██║
          ██████╔╝   ██║   ╚██████╔╝   ██║      ██║      ██║  ██║   ███████╗
          ╚═════╝    ╚═╝    ╚═════╝    ╚═╝      ╚═╝      ╚═╝  ╚═╝   ╚══════╝

   ██████╗    ██████╗    ██████╗    ███████╗   ███████╗   ██╗    ██████╗    ███╗   ██╗
  ██╔════╝   ██╔═══██╗   ██╔══██╗   ██╔════╝   ██╔════╝   ██║   ██╔════╝    ████╗  ██║
  ██║        ██║   ██║   ██║  ██║   █████╗     ███████╗   ██║   ██║  ███╗   ██╔██╗ ██║
  ██║        ██║   ██║   ██║  ██║   ██╔══╝     ╚════██║   ██║   ██║   ██║   ██║╚██╗██║
  ╚██████╗   ╚██████╔╝   ██████╔╝   ███████╗   ███████║   ██║   ╚██████╔╝   ██║ ╚████║
   ╚═════╝    ╚═════╝    ╚═════╝    ╚══════╝   ╚══════╝   ╚═╝    ╚═════╝    ╚═╝  ╚═══╝


  Autor: Digital Codesign
  Version: 1.0.0
  Fecha de creación: Septiembre de 2024
  Fecha de version: Septiembre de 2024
  Repositorio: https://github.com/DigitalCodesign/MentorBit-Potenciometro
  Descripcion:
    Esta libreria esta especificamente diseñada para ser utilizada junto con
    el modulo potenciometro de MentorBit 
  Metodos principales:
    MentorBitPotenciometro -> constructor de la clase
    obtenerLectura -> devuelve el valor analogico del potenciometro
    encenderLed -> enciende o apaga el led de la placa en funcion del parametro de 
                   entrada

*/

#include "MentorBitPotenciometro.h"


/*
    Constructor, se debe indicar el pin al que esta conectado el potenciometro y el led
*/
MentorBitPotenciometro::MentorBitPotenciometro(uint8_t pin_potenciometro, uint8_t pin_led){
    _potenciometer_pin = pin_potenciometro;
    _led_pin = pin_led;
    pinMode(_led_pin, OUTPUT);
}
/*
    Funcion que obtiene el valor del potenciometro y lo devuelve
*/
uint16_t MentorBitPotenciometro::obtenerLectura(){
    uint16_t value = 0;
    value = analogRead(_potenciometer_pin);
    return value;
}

/*
    Funcion que enciende o apaga el led integrado en la placa en funcion del
    parametro de entrada

    value = 1 -> led encendido
    value = 0 -> led apagado
*/
void MentorBitPotenciometro::encenderLed(bool value){
    digitalWrite(_led_pin,value);
}