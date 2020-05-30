# Descripción
Hay una mesa (redonda) con $N$ niños numerados de $1$ a $N$, la maestra ha decidido hacer un nuevo juego para determinar quien sale primero a jugar en el recreo, en el cual, iniciando desde el primer niño, la maestra avanza $K$ niños en el sentido de las manecillas del reloj. Donde termine la maestra, ese niño sale al recreo, luego la maestra se para en el siguiente niño y vuelve a repetir este proceso hasta que todos los niños salgan al recreo. 

Randy está impaciente por salir a comer y le interesa saber después de cuantos niños saldrá él al recreo. **Randy siempre es el niño número 1**.

# Entrada

Dos enteros, $N$ y $K$, el número de niños y el salto de avance que se hace. 

# Salida

Un entero que represente el número de niños que salieron antes de Randy.

# Ejemplo
||input
11 121
||output
0
||description
Randy es el primero en salir, ningún niño sale antes que él
||input
2 1
||output
1
||description
Randy es el último en salir, sale 1 niño antes que él
||end

# Límites
$1 \leq N,K \leq 1000$
