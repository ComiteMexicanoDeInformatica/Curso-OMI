# Descripción

En matemáticas, decimos que un número es divisor de otro cuando al realizar la división el residuo es $0$. Dicho de otra forma, $a$ divide a $b$ sí el resultado de $a/b$ es entero. También podemos decir que si $a$ divide a $b$ entonces $a$ es un factor de $b$.

Por lo tanto, los factores de un número, son todos aquellos números que pueden dividirlo enteramente, incluyendo el $1$ y si mismo.
Ejemplo:

    Divisores(36) = [1, 2, 3, 4, 6, 9, 12, 18, 36]

El operador modulo $\%$ nos permite calcular el residuo de la división de dos números enteros.

* $5\%2=1$
* $12\%3=0$
* $7\%4=3$

# Problema

Si tenemos dos conjuntos de números enteros $A=\\{a_0, a_1, ..., a_{n-1}\\}$ y $B=\\{b_0, b_1, ..., b_{n-1}\\}$. Si para un número entero $x$ se cumple que todos los elementos de $A$ son factores del número y a la vez, que $x$ es factor de todos los elementos de $B$ entonces diremos que $x$ está *entre* $A$ y $B$.

Dicho de otra forma, $x$ está entre $A$ y $B$ si: $x\mod a_i=0$ para todo $a_i$ y que $b_i\mod x=0$ para todo $b_i$.

Tu tarea es que dados $A$ y $B$, encuentres e imprimas todos los enteros que se encuentren entre ambos conjuntos.

# Entrada

Dos enteros $n$ y $m$ representando el tamaño de $A$ y $B$. Seguido de una línea con $n$ enteros; los elementos de $A$ y de una línea con $m$ enteros; los elementos de $B$.

# Salida

Una sola línea con todos los enteros entre ambos conjuntos, separados con un espacio como se muestra en el ejemplo.

# Ejemplo

||input
3 2
2 3 6
42 84
||output
6 42
||description
Hay dos valores de $x$ entre $A=\\{2,3,6\\}$ y $B = \\{42,84\\}$

* $x=6$. Todos los elementos de $A$ dividen a $6$ y $6$ divide a todos los elementos de $B$.

* $x=42$ Todos los elementos de $A$ dividen a $42$ y $42$ divide a todos los elementos de $B$.

||end

# Límites

* $1 \leq n,m \leq 10$
* $1 \leq a_i,b_i \leq 100$
