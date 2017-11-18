# Descripción

La Criba de Eratóstenes es un algoritmo que permite hallar todos los números primos menores que un número natural dado $n$. Se forma una tabla con todos los números naturales comprendidos entre $2$ y $n$, y se van tachando los números que no son primos de la siguiente manera: comenzando por el $2$, se tachan todos sus múltiplos; comenzando de nuevo, cuando se encuentra un número entero que no ha sido tachado, ese número es declarado primo, y se procede a tachar todos sus múltiplos, así sucesivamente. El proceso termina cuando el cuadrado del mayor número confirmado como primo o no, lo es.

![Criba](criba.gif)

# Entrada
Se te dará $k$ , en las siguientes $k$ líneas se te dará una lista de $k$ números. 

# Salida
Por cada número deberas imprimir **SI** si $k_i$ es primo y **NO** en caso contrario.

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
SI
NO
NO
||end

# Límites

$1 \leq k,k_i \leq 10^6$