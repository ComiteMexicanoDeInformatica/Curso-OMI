# Descripción
Una permutación de un conjunto de objetos distintos es una ordenación de un subconjunto de ellos. Una lista ordenada de $r$ elementos de un conjunto, se llama una $r-$permutaciones o variaciones de $r$ elementos.

El número de $r-$permutaciones de un conjunto de $n$ elementos está dado por:

<center>$n P r$ = $n ( n - 1) ( n - 2) \cdot ( n - r + 1)$</center>

Cuando $r = n$, el número $n P r = n ( n - 1) ( n - 2)$, es simplemente el número de maneras de organizar $n$ cosas distintas en una fila.

#Problema
La Organización Mundial Intercontinental (OMI), ha iniciado operaciones en el país y actualmente dispone de 3 barcos cargueros para transportar mercancía de un puerto marítimo a otro. A pocos días de realizar su primer envío de 9 contenedores, el jefe de operaciones ha decidido que cada carguero lleve 3 contenedores, y que éstos, de acuerdo con su peso, estén distribuidos de manera uniforme.

Ayuda al jefe de operaciones para minimizar $T−t$, donde *$T$ es el peso del carguero con mayor carga* y, *$t$ el peso del carguero con la carga menor*.

# Entrada
9 líneas que contienen la carga $c_i$, donde ($1 \leq c \leq 1,000,000$).

#Salida
Una sola línea indicando el valor mínimo de $T−t$.

Ejemplo
||input
1
2
3
4
5
6
7
8
9
||output
0
||end