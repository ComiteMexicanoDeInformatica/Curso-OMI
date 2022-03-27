# Descripci�n

La Criba de Erat�stenes es un algoritmo que permite hallar todos los n�meros primos menores que un n�mero natural dado $n$. Se forma una tabla con todos los n�meros naturales comprendidos entre $2$ y $n$, y se van tachando los n�meros que no son primos de la siguiente manera: comenzando por el $2$, se tachan todos sus m�ltiplos; comenzando de nuevo, cuando se encuentra un n�mero entero que no ha sido tachado, ese n�mero es declarado primo, y se procede a tachar todos sus m�ltiplos, as� sucesivamente. El proceso termina cuando el cuadrado del mayor n�mero confirmado como primo o no, lo es.

![Criba](criba.gif)

# Entrada

Se te dar� $k$ , en las siguientes $k$ l�neas se te dar� una lista de $k$ n�meros.

# Salida

Por cada n�mero deberas imprimir **SI** si $k_i$ es primo y **NO** en caso contrario.

# Ejemplo

||input
1
2
||output
SI
||input
5
7
5
8
9
18
||output
SI
SI
NO
NO
NO
||end

# L�mites

$1 \leq k,k_i \leq 10^6$
