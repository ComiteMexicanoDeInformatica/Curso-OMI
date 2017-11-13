# Descripción

Una víbora cubre totalmente una tabla de $3  $ x $  n$. Los segmentos sucesivos de la víbora están numerados de $1$ hasta $3n$. Los segmentos con números sucesivos (por ejemplo,1 y 2, 2 y 3, 3 y 4, ...) ocupan un cuadro que comparten un mismo borde. Por ejemplo, una víbora podrá ocupar una tabla de $3$  x  $9$ así:

<center>![Ejemplo de una víbora en un tablero de 3x9](/img/1fea0f61441bd8f9f5f21796354228ceb3e647bc.png)</center>

Algunos números de segmentos de la víbora, se han borrado. Puedes reconstruir la víbora?

# Entrada

La primer línea de la entrada contendrá un entero $n$ ($1 \leq n \leq 1000$), lo largo de la tabla. Las tres siguientes líneas describen la tabla; la **i** *-iésima* contiene $n$ enteros $a_{ij} (0 \leq a_{ij} \leq 3n$ para $1 \leq j \leq n$). Si $a_{ij} > 0$, entonces $a_{ij}$ es el número del segmento de la víbora que ocupa el cuadro **j** *-iésimo* de la **i** *-iésima* renglón de la tabla. En caso contrario si $a_{ij} = 0$, entonces el número del cuadro que ocupa el segmento de la víbora es desconocido.

# Salida

Tu programa deberá mostrar 3 líneas a la salida estándar. La **i** *-iésima* línea deberá contener $n$ números enteros positivos $b_{ij}$ (para $1 \leq j \leq n$). Todos los números juntos $b_{ij}$ deberán ser una permutación de los números del $1$ hasta $3n$. Los números de salida deberán ser una reconstrucción válida de la víbora; por ejemplo, deberá ser consistente con los números (positivos) de entrada y satisfacer las condiciones anteriormente mencionadas.

Deberás asumir que al menos hay una reconstrucción válida de la víbora. Si hay más de una, tu programa deberá indicar cualquier reconstrucción válida.

# Ejemplos

||input
9
0 0 5 0 17 0 0 0 21
8 0 0 3 16 0 0 25 0
0 0 0 0 0 0 0 0 23
||output
7 6 5 4 17 18 19 20 21
8 1 2 3 16 15 26 25 22
9 10 11 12 13 14 27 24 23
||end

# Evaluación

* Un **15%** de los casos para $n \leq 10$
* El **40%** de los casos con $n \leq 40$
* Y un **70%** de los casos para $n \leq 300$