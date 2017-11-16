# Problema

En este problema controlas a un personaje que está atrapado en una casa enorme. Inicialmente el personaje empieza en el cuarto $X$ de la casa y desea llegar al cuarto $Y$ (los cuartos están numerados de $1$ a $N$).

Los cuartos de la casa tienen la particularidad que tienen exactamente dos puertas, cada una de ellas conecta a otro cuarto.

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `Player1(int x)` y podrás mandar a llamar algunas funciones del evaluador.

# Implementación

### Tu función `Player1(int x, int y)`

C/C++ `void Player1(int x, int y);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con dos enteros $x$ , $y$ donde $1$ $\leq$ N $\leq$ $10^{5}$ .

### Parámetros

* `x`: El cuarto donde inicia el personaje.
* `y`: El cuarto a donde debe llegar personaje.

### Función del evaluador `siguienteCuarto(int n)`

C/C++ `int siguienteCuarto(int n)`

Puedes llamar a esta función para saber a que cuarto te conduce la $n-ésima$ puerta del cuarto donde actualmente está el personaje. (Si $n$ es mayor a 2 o menor a 1 regresará -1; de lo contrario el cuarto al que conduce la puerta).

### Descripción

* `1`: La función regresa el cuarto al que llegas desde el cuarto actual tomando la puerta 1.
* `2`: La función regresa el cuarto al que llegas desde el cuarto actual tomando la puerta 2.
* `k`: Si $k\neq1$ y $k\neq2$ la función regresa -1 ya que  no será una puerta válida.

### Función del evaluador `move(int c)`

C/C++ `void move(int c)`

Con esta función le dices al evaluador que quieres mover al personaje al cuarto $c$, esto se realizará siempre y cuando donde está actualmente el personaje exista una puerta que conduzca al cuarto $c$ de lo contrario chocarás con pared (guiño guiño) y perderás el juego. ¡Ten cuidado con el move()!

### Parámetros
* `c`: Un entero tal que $1$ $\leq$ $c$ $\leq$ $N$.

### Función del evaluador `regresa()`

C/C++ `void regresa()`

Con está función el personaje regresará al cuarto de donde llegó al actual siempre y cuando haya a donde regresar, de lo contrario el universo explotará y perderás el juego. ¡Ten cuidado con el regresa()!.

# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo.

|| input
Función llamada
|| output
Valor devuelto
|| description
Descripción
|| input
adivina(5,10)
|| output
-
|| description
Se llama a tu procedimiento.
|| input
pista(7)
|| output
1
|| description
El numero que esta pensando omegaUp es mayor que 7.
|| input
pista(10)
|| output
-1
|| description
El numero que esta pensando omegaUp es menor que 10.
|| input
pista(9)
|| output
0
|| description
El numero que esta pensando omegaUp es 9.

|| end

# Restricciones

*$-2^{61}$ $\leq$ a,b $\leq$ $2^{61}$*

# Consideraciones

* Tu puntuacián será en base a la cantidad de llamadas que hagas a la función `long long pista(long long x)` de la siguiente manera.

* Tendras el 100% del valor del caso si haces a lo más $\log (b-a+1)$ llamadas.
* Tendras el 50% del valor del caso su haces a lo mas $2\log (b-a+1)$ llamadas.
* Si haces mas de $2\log (b-a+1)$ llamadas no obtendrás porcentaje.

{{libinteractive:download}}
