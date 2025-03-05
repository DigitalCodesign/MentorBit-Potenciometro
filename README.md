# MentorBitPotenciometro

Librería para el uso de potenciómetros con LED integrado en módulos compatibles con MentorBit.

## Descripción

La librería `MentorBitPotenciometro` facilita la lectura de potenciómetros con un LED integrado en módulos compatibles con MentorBit. Permite obtener el valor analógico del potenciómetro y controlar el estado del LED.

## Modo de Empleo

1.  **Instalación:**
    * Abre el IDE compatible con MentorBit.
    * Ve a "Herramientas" -> "Gestionar librerías..."
    * Busca "MentorBitPotenciometro" e instálala.

2.  **Ejemplo básico:**

    ```c++
    #include <MentorBitPotenciometro.h>

    MentorBitPotenciometro pote(A0, 2); // Potenciómetro en pin A0, LED en pin 2

    void setup() {
      Serial.begin(9600);
      Serial.println("Potenciómetro inicializado.");
    }

    void loop() {
      uint16_t valor = pote.obtenerLectura();
      Serial.print("Valor del potenciómetro: ");
      Serial.println(valor);

      // Enciende el LED si el valor es mayor a 500
      if (valor > 500) {
        pote.encenderLed(true);
      } else {
        pote.encenderLed(false);
      }

      delay(100);
    }
    ```

## Constructor y Métodos Públicos

### Constructor

* `MentorBitPotenciometro(uint8_t pin_potenciometro = 0, uint8_t pin_led = 0)`: Crea un objeto `MentorBitPotenciometro`.
    * `pin_potenciometro`: Pin analógico al que está conectado el potenciómetro. Si no se especifica, se asume que no está conectado a ningún pin inicialmente.
    * `pin_led`: Pin digital al que está conectado el LED. Si no se especifica, se asume que no está conectado a ningún pin inicialmente.

### Métodos

* `uint16_t obtenerLectura()`: Lee el valor analógico del potenciómetro.
* `void encenderLed(bool value)`: Controla el estado del LED.
    * `value`: `true` para encender el LED, `false` para apagarlo.
