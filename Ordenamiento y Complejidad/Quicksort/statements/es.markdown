# Descripción

El algoritmo de **Quicksort**, como su nombre sugiere, sirve para ordenar los elementos de un arreglo, y es uno de los más conocidos dentro de los algoritmos de ordenamiento. Quicksort se basa en la idea de *Divide y Vencerás* y consta de los siguientes pasos:

 - Escoger un elemento del arreglo. A este elemento se le conoce como *pivote*.
 - Pre-ordenar los elementos del arreglo de tal manera que los elementos que queden a la izquierda del pivote sean menores a este y los que queden a la derecha sean mayores. Este es el paso más importante del algoritmo y se le conoce como *partición*.
 - Resolver (recursivamente) los dos sub-arreglos en los que quedó dividido el arreglo original.

![](quicksort.jpg)

Existen distintas maneras de escoger el pivote, algunas de las cuales son: 

 - Escoger el primer o último elemento del arreglo. 
 - Escoger la mediana del arreglo. 
 - Escoger un elemento al azar.

Sin embargo, si bien el Quicksort puede llegar a ser un algoritmo bastante rápido, con una complejidad media de $O(n\;\mathrm{log}\;n)$, también puede llegar a ser tan lento como *Burbuja* con una complejidad de $O(n^2)$. 

Lo que hace que Quicksort pueda ser más rápido o no, es la elección del pivote. Lo ideal sería que, al escoger el pivote y hacer la partición, el arreglo quede dividido en dos sub-arreglos de igual tamaño. Sin embargo, si el pivote resultase ser, por ejemplo, el primer elemento del arreglo, la partición fallaría, obteniendo solo un sub-arreglo.

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar la función `HacerParticion`.

# Implementación

**Tu función** `HacerParticion`

C/C++ `int HacerParticion(int inicio, int fin);`

Pascal `function HacerParticion(var inicio, fin: LongInt): LongInt;`

**Descripción**

Esta función hará la partición del arreglo y deberá retornar la posición final del pivote. Tu función será llamada para cada partición que hagas en el arreglo.

**Parámetros**

 - `inicio`, `fin`: El rango del arreglo sobre el cual se hará la partición. La posición `fin` no forma parte del rango. 

**Funciones del evaluador** `ElementoEnPosicion()`, `Intercambiar()`

C/C++ `int ElementoEnPosicion(int i);`

Pascal `function ElementoEnPosicion(var i: LongInt): LongInt;`

**Descripción**

Esta función retornará el elemento en la posición $i$ del arreglo o -1 en caso de que el índice dado esté fuera del rango. Los elementos del arreglo son siempre enteros no negativos.

**Parámetros**

 - `i`: Un entero indicando el índice del elemento en el arreglo.

C/C++ `int Intercambiar(int i, int j);`

Pascal `function Intercambiar(var i, j: LongInt): LongInt;`

**Descripción**

Esta función intercambiará los elementos del arreglo en las posiciones $i$ y $j$. Retorna 1 si fue posible intercambiarlos y 0 en caso contrario.

**Parámetros**

 - `i`, `j`: Dos enteros indicando los índices de los elementos a intercambiar en el arreglo.

# Rutina de Ejemplo

||input
Función llamada
||output
Valor devuelto
||description
Descripción
||input
HacerPariticion(0, 4);
||output
1
||description
En este ejemplo, el arreglo es $3, 1, 5, 4$. El pivote escogido es $3$ y después de hacer la partición queda en la posición 1 (véase las siguientes llamadas).
||input
ElementoEnPosicion(0)
||output
3
||description
Este fue el elemento que escogimos como pivote.
||input
ElementoEnPosicion(1)
||output
1
||description
||input
Intercambiar(0, 1)
||output
1
||description
Intercambiamos los elementos $3$ y $1$, por lo que el arreglo queda como $1, 3, 5, 4$.
||input
HacerParticion(2, 4)
||output
1
||description
En esta función el evaluador manda a llamar el sub-arreglo $5, 4$. El pivote escogido en este caso es el $5$.
||input
ElementoEnPosicion(2)
||output
5
||description
||input
ElementoEnPosicion(3)
||output
4
||description
||input
Intercambiar(2, 3)
||output
1
||description
Intercambiamos los elementos $5$ y $4$, por lo que el arreglo queda como $4$ y $5$.
||end

# Límites

* $0 < n \leq 5,000$

# Consideraciones

* El arreglo está indexeado en 0.
* Los elementos del arreglo serán siempre enteros no-negativos.

{{libinteractive:download}}