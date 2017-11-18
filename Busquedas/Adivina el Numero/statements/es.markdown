�En este problema tendr�s que adivinar el n�mero que est� pensado OmegaUp!

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendr�s que leer la entrada ni imprimir la salida, sino implementar en tu c�digo la funci�n `adivina(long long a, long long b)` y mandar a llamar la funci�n del evaluador `pista(long long x)`.

# Implementaci�n

### Tu funci�n `adivina(long long a, long long b)`

C/C++ `void adivina(long long a, long long b);`

### Descripci�n

El evaluador buscar� en tu c�digo esta funci�n y la llamar� con los numeros $a$ y $b$ como par�metro. Tu implementaci�n deber� adivinar el n�mero que est� pensando OmegaUp, ayud�ndose llamando a la funci�n `pista()`.

### Par�metros

* `a`,`b`: Representa un rango, es decir si $x$ es el numero que esta pensando omegaUp, entonces se cumple que **a $\leq x \leq$ b** 

### Funci�n del evaluador `long long pista(long long x);`


C/C++ 
### Descripci�n

Puedes llamar a esta funci�n con cualquier entero como par�metro, y puede regresarte uno de estos tres valores:

* `-1`: El n�mero en que esta pensando omegaUp es menor que $x$.

* `0`: El n�mero que esta pensando omegaUp es igual a $x$.

* `1`: El n�mero que esta pensando omegaUp es mayor a $x$.  

**Nota:** El �ltimo llamado que debe hacer tu programa a `pista()` es con la respuesta, es decir, con el numero que esta pensando OmegaUp.

# Rutina de Ejemplo

A continuaci�n se muestran las primeras llamadas de una rutina de ejemplo.

|| input
Funci�n llamada
|| output
Valor devuelto
|| description
Descripci�n
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
El n�mero que est� pensando omegaUp es mayor que 7.
|| input
pista(10)
|| output
-1
|| description
El n�mero que est� pensando omegaUp es menor que 10.
|| input
pista(9)
|| output
0
|| description
El n�mero que est� pensando omegaUp es 9.

|| end

* Nota * La última llamada a `pista()` debe ser con el numero que esta pensando omegaUp.
# Restricciones

*$-2^{61}$ $\leq$ **a,b** $\leq$ $2^{61}$*

# Consideraciones

* Tu puntuaci�n ser� en base a la cantidad de llamadas que hagas a la funci�n `long long pista(long long x)` de la siguiente manera.

* Tendras el 100% del valor del caso si haces a lo m�s $\log (b-a+1)$ llamadas.
* Tendras el 50% del valor del caso su haces a lo mas $2\log (b-a+1)$ llamadas.
* Si haces mas de $2\log (b-a+1)$ llamadas no obtendr�s porcentaje.

{{libinteractive:download}}
