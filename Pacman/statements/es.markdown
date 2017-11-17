¡PacMan te está buscando!
PacMan (también conocido como comemocos en España) fue uno de los juegos que ostentó el record guiness del videojuego más exitoso de todos los tiempos. 

PacMan se puede mover en las 4 direcciones(norte, este, sur y oeste) siempre y cuando no haya una pared o un fantasma dispuesto a lastimarlo.

# Problema

En esta ocasión PacMan está pidiendo la ayuda de OmegaUp, para encontrar un(a) estudiante con mucho talento que le ayude a contar la cantidad de movimientos que debe hacer, para llegar a la comida (punto amarillo o fruta) más cercana. 

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `buscaComida(int pos)` y mandar a llamar las funciones del evaluador `hayComida(int pos)` y `esPosibleAvanzar(int pos,  char direccion)`.

# Implementación

Este problema es interactivo y deberás escribir una función llamada buscaComida que reciba del evaluador la entrada del problema de la siguiente forma:

    int buscaComida(int pos);

El parámetro **pos** te ayudará a mostrar la casilla en la que te encuentras en este momento. Considera que el tablero está numerado de la siguiente manera.

\begin{align*}
1 \; 2 \; 3
\end{align*}
\begin{align*}
4 \; 5 \; 6
\end{align*}
\begin{align*}
7 \; 8 \; 9
\end{align*}

Como resultado tu función deberá devolver la cantidad de pasos que debe realizar PacMan para saciar su hambre.

Así es como recibes la entrada, y una vez que la recibes debes de empezar a explorar el tablero con las siguientes funciones:


    int hayComida(int pos);

Esta función te dice si hay comida en la posición que especificas como parámetro.

    int esPosibleAvanzar(int posActual, char direccion);

Esta función te ayudará a saber si es posible moverte en la dirección especificada desde una posición dada. Debes de especificar 'n' para indicar la dirección norte; 'e' para este; 'o' para oeste ; 's' para el sur.
Como resultado esta función devolverá la posición a la que puedes avanzar en esa dirección. Si no es posible avanzar en esa dirección la función devolverá -1.


###Ejemplo 
Si consideramos que el mapa tiene 9 posiciones como el mapa mostrado arriba te mostramos algunos ejemplos de la función esPosibleAvanzar.
 
||input
   esPosibleAvanzar(5,'n')
||output
   2
||description
   La posición 5 tiene al norte la casilla 2 y es posible avanzar.
||input
   esPosibleAvanzar(7,'s')
||output
   -1
||description
   La posición 7 no tiene al sur ninguna casilla por lo que es imposible avanzar.
||end
# Restricciones


*El tablero de juego será de máximo $100/times100$.
*Si el tablero no tiene comida deberás regresar un -1.

{{libinteractive:download}}