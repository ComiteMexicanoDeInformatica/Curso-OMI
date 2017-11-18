# Descripción

Seguramente has escuchado hablar del programa *Las pistas de Blue*, donde un perro dejaba huellas para que su amo Steve encontrara ciertos objetos. *Azul* es el primo de *Blue*, que vive en México y él utiliza números para que su amo Esteban encuentre objetos. El mundo está dividido en un conjunto de casillas donde en cada una se encuentra un PAR de números (fila, columna) que indica la posición donde está la siguiente pista.

Esteban, al encontrar el objeto que buscaba, notó que su casa estaba llena de pistas y por lo tanto su casa estaba muy sucia por el andar de Azul, así que él quiere saber en qué partes de la casa pudo haber estado Azul para poder limpiar.

# Problema
Dada un conjunto de pistas y las ubicaciones de estas, deberás decirle a Esteban el número de casillas desde, las cuales, empezando en cada una de ellas y siguiendo las pistas, se puede llegar a la casilla donde está el objeto.

# Entrada

En la primera línea, un entero $1 \leq N \leq 50$, que denota las dimensiones de la casa (siempre será de $N$ filas por $N$ columnas). En la segunda línea dos enteros $0 \leq F, C \leq N-1$ separados por espacios que denotan las coordenadas de la casilla donde está el objeto. En cada una de las siguientes $N$ líneas, $2 * N$ números, donde cada par, indica la coordenada de la siguiente pista en cada casilla (ver ejemplo).

# Salida

Un entero que indica el número de casillas, desde las cuales, se puede llegar a la casilla donde está el objeto.

# Ejemplo

||input
3
1 2
0 2 -1 -1 2 0
1 1 -1 -1 2 2
1 2  0  1 1 2
||output
4
||description
![Cuadrícula de Pistas](PistasAzul.jpg)

En el ejemplo la respuesta es 4 porque desde las casillas (0,0), (0,2), (2,0) y (2,2), es posible llegar a la casilla que marca el objeto (1,2) siguiendo las pistas de cada casilla.
||end

#Nota

* Al menos te tienes que mover a una casilla para que puedas contarla, es decir, empezar en la casilla del objeto no deberá contarse
* Las casillas que están marcadas con -1,-1 indica que no hay pista que te lleve a otra casilla
 
# Límites

* $0 \leq F,C \leq N-1$
* $1 \leq N \leq50$

#Evaluación

**Subtarea 1** Para un conjunto de 60% de los casos, no se creará un ciclo dentro del mundo (Un ciclo es una secuencia de pistas que eventualmente te llevan a repetir una casilla)

**Subtarea 2** Para el 100% de los casos, puede o no haber un ciclo en el mundo