Ha habido un derrame de petroleo en el golfo y una organización ecologista internacional te ha contratado para escribir un programa que los ayude a calcular la gravedad del impacto ambiental.

Te van a dar una cuadrícula de $R$ filas y $C$ columnas, que representan el entorno que rodea la plataforma petrolera. El derrame se originó en la plataforma, que se marcará en su mapa con un '\$'. Las casillas de tierra se marcarán con un '#' y las casillas del mar se marcarán con un '.'. Cada día que pasa después de la explosión inicial, cada cuadrado de mar adyacente (norte, este, sur u oeste) a la plataforma petrolera o a una plaza marítima, previamente cubierta de petróleo, queda cubierto por el petróleo. Las plazas terrestres nunca son cubiertas por petróleo.

# Problema

Tu programa debe simular la propagación del derrame de petróleo durante $K$ días, luego imprime un mapa del entorno circundante con cuadrados marinos cubiertos de petróleo representados por '\*'.

#Entrada

Tu programa debe leer de teclado tres enteros separados por un espacio $R$, $C$ y $K$. Las siguientes $R$ líneas contendrán cada una $C$ caracteres, cada uno de los cuales será '#' o '.' representando cuadrados terrestres y marítimos, respectivamente. Exactamente sólo habrá un sólo '\$', que representa la plataforma petrolera en el mar.

#Salida

Tu programa debe mostrar $R$ líneas, cada una con $C$ caracteres. Cada carácter en esta cuadrícula debe ser el mismo que el carácter correspondiente en la cuadrícula de entrada, a excepción de las casillas marinas que han sido cubiertas por petróleo después de $K$ días. Estos deberían estar representados por caracteres '\*'.

||input
4 6 4
###...
.$....
...###
#.#..#
||output
###**.
*$\***\* \***### #_#..#
||input
4 3 2
#.#
.\$.
.##
...
||output #_#
_\$_
\*##
...
||end

# Límites

#Restricciones

- $1 \leq R, C \leq 2000$ , donde $R$ y $C$ son el número de filas y columnas de la cuadrícula, respectivamente.
- $0 \leq K \leq 10$ $000$ $000$, donde $K$ es el número de días para los cuales debe simular el derrame de petróleo.
- Para el 75% de los casos, $1 \leq R,C \leq 50$.
