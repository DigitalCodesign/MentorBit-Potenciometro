# MentorBit-Potenciometro

Esta librería está diseñada para que puedas obtener fácilmente el valor del módulo de **potenciómetro simple**, conectandolo a tu placa MentorBit mediante un **puerto analógico-digital** usando un conector JST de 4 pines.

Si estás empezando en el mundo de la electrónica, ¡no te preocupes! MentorBit está pensado para que aprender sea fácil y divertido. Esta placa ya incluye un montón de componentes (LEDs, pulsadores, pantallas, etc.) y utiliza conectores especiales (JST) para que puedas añadir nuevos sensores y módulos sin tener que pelearte con un montón de cables. Pásate por nuestra web para saber más de MentorBit y nuestros productos [pinchando aquí](https://digitalcodesign.com/).

![Render del MentorBit módulo de potenciómetro.](https://github.com/DigitalCodesign/MentorBit-Potenciometro/blob/main/assets/PoteSimple.png)

Con esta librería, podrás obtener el valor analógico del potenciómetro para usarlo como control de entrada en tus proyectos.

---

## Descripción

### ¿Qué es un potenciómetro?

Un potenciómetro es un componente electrónico que permite variar su resistencia según la posición de su eje. Al conectarlo a una entrada analógica de la placa MentorBit, se puede medir un valor proporcional a la posición del eje.

Este módulo está diseñado para conectarse directamente a los **puertos analógico-digitales** de la sección "Puertos para Módulos" de MentorBit.

---

### ¿Qué hace esta librería?

La librería **MentorBit-Potenciometro** permite:

- Inicializar el módulo de potenciómetro.
- Leer su valor analógico de forma sencilla.

---

### ¿Qué puedes construir con este módulo?

- Controlar velocidad, brillo o volumen.
- Crear interfaces físicas para proyectos educativos.
- Ajustar variables en tiempo real en proyectos interactivos.
- Construir paneles de control para robótica.

---

## Cómo empezar

### 1. **Conexión del Módulo**

Conecta el módulo de potenciómetro a uno de los **puertos analógico-digital** con conector JST de 4 pines en la sección "Puertos para Módulos" de la placa MentorBit. Este módulo utiliza la lectura analógica para determinar la posición del eje. También dispone de un LED integrado en la placa que se puede encender con el pin digital del puerto analógico-digital.

### 2. **Instalación de la Librería**

- Abre tu entorno de programación IDE de Arduino.
- Ve al menú *Programa -> Incluir Librería -> Administrar Librerías...*
- En el buscador, escribe ***MentorBit-Potenciometro*** y haz clic en "Instalar".

![Ejemplo de búsqueda en el gestor de librerías del IDE de Arduino.](https://github.com/DigitalCodesign/MentorBit-Potenciometro/blob/main/assets/library_instalation_example.png)

---

## Ejemplo Básico: Leer valor del potenciómetro

Este ejemplo lee el valor analógico del potenciómetro y lo imprime por el monitor serie.

```cpp
// Se incluye la libreria MentorBitPotenciometro
#include <MentorBitPotenciometro.h>

// Se definen los pines a los que esta conectado el modulo de potenciometro
#define Pin_Potenciometro A4
#define Pin_Led 24

// Se crea el objeto potenciometro
MentorBitPotenciometro potenciometro(Pin_Potenciometro,Pin_Led);

void setup() {
    // Inicializamos el monitor serial a una velocidad de 9600 baudios
    Serial.begin(9600);
}

void loop() {

    // Enviamos por monitor serial el valor de lectura del potenciometro
    Serial.println("Valor del potenciometro: " + String(potenciometro.obtenerLectura()));

    // Ponemos un pequeño delay para evitar llenar el monitor serial de mensajes
    delay(1000);
}
```

---

## Funciones Principales

- `uint16_t obtenerLectura()`  
  Devuelve el valor analógico leído del potenciómetro.

- `void encenderLed(bool value)`  
  Enciende o apaga el led integrado en la placa en función del valor boleano dado a la función.

---

## Recursos Adicionales

- [Web del fabricante](https://digitalcodesign.com/)
- [Tienda Online de Canarias](https://canarias.digitalcodesign.com/shop)
- [Tienda Online de Península](https://digitalcodesign.com/shop)
- [Web Oficial de MentorBit](https://digitalcodesign.com/mentorbit)
- [Web Oficial del Módulo Potenciómetro](https://canarias.digitalcodesign.com/shop/00038980-mentorbit-modulo-potenciometro-simple-8130?category=226&order=create_date+desc#attr=)
- [Manual de usuario del Módulo](https://drive.google.com/file/d/1wJwSPecKfR6qf5EHvaB0IV-Uqlk4GfrA/view?usp=drive_link)
- [Modelo 3D del Módulo en formato .STEP](https://drive.google.com/file/d/1-jrsVB2FByyX9HuBMMyJv2z1jdds1Lbm/view?usp=drive_link)
