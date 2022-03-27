#Funciones Matemáticas

El uso de funciones predefinidas almacenadas dentro de la líbreria math.h. Math.h es un archivo de cabecera que contienen funciones matemáticas básicas. La biblioteca de matemáticas es relativamente fácil de usar. Se debe incluir la directiva de pre procesamiento:

`#include <math.h>`

Algunos de las funciones matemáticas que se describen son:

#Valor absoluto (abs).
Dado un valor numérico de tipo entero su valor absoluto es un número entero sin tomar en cuenta el signo positivo o negativo.

El valor absoluto se define en cualquier sistema numérico, de los números enteros, reales y racionales:
|x| = x sí x>= 0
|x| = -x en otro caso; para un elemento x de los sistemas numéricos anteriormente indicados.

Comúnmente para calcular el valor absoluto x, se expresa abs(x)

#Valor mínimo (min).
Dado una par de números se obtiene el número de menor valor.

Para obtener el valor mínimo, dado x como primer número y y como el segundo número, la expresión se min(x, y).

Los parámetros que se pasan a la función son de tipo entero. El tipo de valor devuelto corresponde al mismo tipo de entrada.

#Valor máximo (max).
Dado una par de números se obtiene el número de mayor valor.

Para obtener el valor máximo, dado x como primer número y y como el segundo número, la expresión se max(x, y).

Los parámetros que se pasan a la función son de tipo entero. El tipo de valor devuelto corresponde al mismo tipo de entrada.

#Raíz cuadrado.
La raíz cuadrada de un número, es el número enviado como parámetro en la función multiplicado por sí mismo.

Comúnmente para calcular el valor absoluto x, se expresa sqrt(x)

Al calcular la raíz cuadrada del valor no negativo de x. Puede producirse un error de dominio si x es negativo.

#Potencia.
Se obtiene multiplicando el número base por la cantidad de veces que indica el exponente. Para calcular la potencia de un número se expresa así:

pow(X,Y) donde X es el número a elevar e Y es la potencia ambos X o Y pueden ser números enteros dados como parámetros.

Puede producirse un error de dominio si x es negativo e y no es un valor entero. También se produce un error de dominio si el resultado no se puede representar cuando x es cero e y es menor o igual que cero.

Puedes revisar todas las funciones de `Math.h` en la siguiente liga http://www.cplusplus.com/reference/cmath/ (página en inglés)
