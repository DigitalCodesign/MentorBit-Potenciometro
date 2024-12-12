# MentorBit-Potenciometro
Esta librería está construida por Digital Codesign para utilizar el módulo de Potenciómetro, principalmente diseñado para el kit educacional "MentorBit".

Puedes encontrar nuestro MentorBit y mucho más material de electrónica y robótica en nuestra tienda oficial:  [https://digitalcodesign.com/shop](https://digitalcodesign.com/shop)

# Modo de empleo

Una vez tengamos la librería instalada desde el Arduino IDE, tenemos que incluir la librería con la siguiente línea:

```
#include <MentorBitPotenciometro.h>
```

### Constructor

Una vez incluida la librería, usamos el constructor para crear el objeto del módulo de potenciómetro, y definimos los pines a los que están conectados el potenciómetro y el LED:

```
MentorBitPotenciometro potenciometro(PIN_POTENCIOMETRO, PIN_LED);
```

Siendo `PIN_POTENCIOMETRO` el pin al que está conectado el potenciómetro y `PIN_LED` el pin al que está conectado el LED.

### Uso

Con el objeto `potenciometro` definido, podemos obtener la lectura del potenciómetro utilizando la función `obtenerLectura()`, que devuelve el valor analógico leído en el pin del potenciómetro:

```
uint16_t lectura = potenciometro.obtenerLectura();
```

El valor devuelto es un número entre 0 y 1023, correspondiente al valor de la lectura analógica del potenciómetro.

Además, si deseas controlar el LED de la placa en función de un parámetro de entrada, puedes usar la función `encenderLed()`. Si pasas `true` (o `1`), el LED se encenderá, y si pasas `false` (o `0`), se apagará:

```
potenciometro.encenderLed(true);  // Enciende el LED
potenciometro.encenderLed(false); // Apaga el LED
```

### Atributos

- `PIN_POTENCIOMETRO`: Define el pin del potenciómetro.
- `PIN_LED`: Define el pin del LED integrado en la placa.
