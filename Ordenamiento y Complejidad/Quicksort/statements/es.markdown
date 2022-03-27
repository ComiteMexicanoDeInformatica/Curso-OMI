# Descripci�n

El algoritmo de **Quicksort**, como su nombre sugiere, sirve para ordenar los elementos de un arreglo, y es uno de los m�s conocidos dentro de los algoritmos de ordenamiento. Quicksort se basa en la idea de _Divide y Vencer�s_ y consta de los siguientes pasos:

- Escoger un elemento del arreglo. A este elemento se le conoce como _pivote_.
- Pre-ordenar los elementos del arreglo de tal manera que los elementos que queden a la izquierda del pivote sean menores a este y los que queden a la derecha sean mayores. Este es el paso m�s importante del algoritmo y se le conoce como _partici�n_.
- Resolver (recursivamente) los dos sub-arreglos en los que qued� dividido el arreglo original.

![](quicksort.jpg)

Existen distintas maneras de escoger el pivote, algunas de las cuales son:

- Escoger el primer o �ltimo elemento del arreglo.
- Escoger la mediana del arreglo.
- Escoger un elemento al azar.

Sin embargo, si bien el Quicksort puede llegar a ser un algoritmo bastante r�pido, con una complejidad media de $O(n\;\mathrm{log}\;n)$, tambi�n puede llegar a ser tan lento como _Burbuja_ con una complejidad de $O(n^2)$.

Lo que hace que Quicksort pueda ser m�s r�pido o no, es la elecci�n del pivote. Lo ideal ser�a que, al escoger el pivote y hacer la partici�n, el arreglo quede dividido en dos sub-arreglos de igual tama�o. Sin embargo, si el pivote resultase ser, por ejemplo, el primer elemento del arreglo, la partici�n fallar�a, obteniendo solo un sub-arreglo.

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendr�s que leer la entrada ni imprimir la salida, sino implementar la funci�n `HacerParticion`.

# Implementaci�n

**Tu funci�n** `HacerParticion`

C/C++ `int HacerParticion(int inicio, int fin);`

Pascal `function HacerParticion(var inicio, fin: LongInt): LongInt;`

**Descripci�n**

Esta funci�n har� la partici�n del arreglo y deber� retornar la posici�n final del pivote. Tu funci�n ser� llamada para cada partici�n que hagas en el arreglo.

**Par�metros**

- `inicio`, `fin`: El rango del arreglo sobre el cual se har� la partici�n. La posici�n `fin` no forma parte del rango.

**Funciones del evaluador** `ElementoEnPosicion()`, `Intercambiar()`

C/C++ `int ElementoEnPosicion(int i);`

Pascal `function ElementoEnPosicion(var i: LongInt): LongInt;`

**Descripci�n**

Esta funci�n retornar� el elemento en la posici�n $i$ del arreglo o -1 en caso de que el �ndice dado est� fuera del rango. Los elementos del arreglo son siempre enteros no negativos.

**Par�metros**

- `i`: Un entero indicando el �ndice del elemento en el arreglo.

C/C++ `int Intercambiar(int i, int j);`

Pascal `function Intercambiar(var i, j: LongInt): LongInt;`

**Descripci�n**

Esta funci�n intercambiar� los elementos del arreglo en las posiciones $i$ y $j$. Retorna 1 si fue posible intercambiarlos y 0 en caso contrario.

**Par�metros**

- `i`, `j`: Dos enteros indicando los �ndices de los elementos a intercambiar en el arreglo.

# Rutina de Ejemplo

||input
Funci�n llamada
||output
Valor devuelto
||description
Descripci�n
||input
HacerPariticion(0, 4);
||output
1
||description
En este ejemplo, el arreglo es $3, 1, 5, 4$. El pivote escogido es $3$ y despu�s de hacer la partici�n queda en la posici�n 1 (v�ase las siguientes llamadas).
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
En esta funci�n el evaluador manda a llamar el sub-arreglo $5, 4$. El pivote escogido en este caso es el $5$.
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

# L�mites

- $0 < n \leq 5,000$

# Consideraciones

- El arreglo est� indexeado en 0.
- Los elementos del arreglo ser�n siempre enteros no-negativos.

{{libinteractive:download}}
