# Problema

En este problema tendras que adivinar el numero que este pensado OmegaUp!

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `adivina(long long a, long long b)` y mandar a llamar la función del evaluador `pista(long long x)`.

# Implementación

### Tu función `adivina(long long a, long long b)`

C/C++ `void adivina(long long a, long long b);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con los numeros $a$ y $b$ como parámetro. Tu implementación deberá adivinar el numero que este pensando OmegaUp ayudandose llamando a la función `pista()`.

### Parámetros

* `a`,`b`: Representa un rango, es decir si $x$ es el numero que esta pensando omegaUp entonces se cumple que **a $\leq$ x $\leq$ b** 

### Función del evaluador `long long pista(long long x);`


C/C++ 
### Descripción

Puedes llamar a esta función con cualquier entero como parámetro, y puede regresarte uno de estos tres valores:

* `-1`: El numero en que esta pensando omegaUp es menor que $x$.

* `0`: El numero que esta pensando omegaUp es igual a $x$.

* `1`: El numero que esta pensando omegaUp es mayor a $x$.  

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

* Tu puntuación será en base a la cantidad de llamadas que hagas a la función `long long pista(long long x)` de la siguiente manera.

* Tendras el 100% del valor del caso si haces a lo más $\log (b-a+1)$ llamadas.
* Tendras el 50% del valor del caso su haces a lo mas $2\log (b-a+1)$ llamadas.
* Si haces mas de $2\log (b-a+1)$ llamadas no obtendrás porcentaje.

{{libinteractive:download}}
