# Descripción

Por muchos años, a los matemáticos les ha gustado divertirse con lo que se conoce como **Congruencias**. Pero, ¿qué son las congruencias?. Primeramente lucen de esta manera:

$$A \equiv B \mod C$$

La anterior expresión se lee cómo **A es congruente con B, módulo C**. Ahora, para que entiendas mejor el concepto de congruencias, te lo explicaremos mediante un pequeño experimento que utiliza la operación normal de módulo que conoces. Imagina que calculamos **mod(5)** para **TODOS** los números enteros.

![congruences](congruences.png)

Supongamos que rebanamos un circulo en 5 partes y las etiquetamos como $0,1,2,3$ y $4$. Entonces para cada uno de los enteros a los que se le aplicó la operación **mod(5)**, los pondremos dentro de la rebanada con la cual corresponda. Piensa que estas rebanadas son como contenedores los cuales van a guardar conjuntos de números. Por ejemplo, el número 26 iría en la rebanada marcada con 1, porque $26 \bmod 5 = 1$.

Ahora bien, ¿acaso no sería muy útil tener una manera de expresar los números que pertenecen a una misma rebanada?. Por ejemplo, el número 26 está en la misma rebanada que los números $1, 6, 11, 16, 21, \ldots$.

La forma más común de decir que dos números pertencen a la misma rebanada, es decir, que ellos están en la misma **clase de equivalencia**. Y, ¿cuál crees que sea la forma en la que se expresa esto matemáticamente?... ¡Exacto! Se expresa como $A \equiv B \mod C$. Si hacemos la analogía con el ejemplo del número 26 y 11, quedaría expresado como $26 \equiv 11 \mod 5$.

#Problema

Ahora bien, en este problema se te pide algo sencillo. Tomando en cuenta la simbología $A \equiv B \mod C$, se te proporcionará los valores de $B$ y $C$, y posteriormente se te darán $N$ valores los cuales tendrás que analizar y decir, cuántos de ellos pertenecen a la misma **rebanada**, es decir, a la misma clase de equivalencia.

# Entrada

En la primera línea recibirás 2 números que representarán a $B$ y $C$ respectivamente. Como este es uno de nuestros primeros acercamientos a las congruencias, los valores de estas variables siempre serán positivas. En la segunda línea recibirás el valor de $N$, y en las siguientes $N$ líneas recibirás 1 número por línea (llamemos a estos números $n_i$).

# Salida

Un entero que represente cuántos de los números $n_i$ pertenecen a la misma clase de equivalencia.

# Ejemplo

||input
26 5
4
11
3
18
21
||output
2
||description
Los únicos números que pertenecen a la misma rebanada de $26 mod 5=1$ son los números 11 y 21.
||end

# Límites

- $2 \leq C \leq 100$
- $1 \leq B \leq 1,000$
- $1 \leq N \leq 1,000,000$
- $1 \leq n_i \leq 10,000$
