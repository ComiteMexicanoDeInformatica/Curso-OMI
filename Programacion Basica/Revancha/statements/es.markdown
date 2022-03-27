Los estadísticos no te caen bien, ni tu a ellos. Desde que tenías 4 años, tu enojo contra estos traga-números ha ido en aumento.

Pero esto está a punto de cambiar.

Después de muchas noches de insomnio, se te ha ocurrido la mejor de las revanchas: ganarles en su propio juego.
Vas a escribir un paquete para estadística tan completo que los vas a dejar sin trabajo.

Decides que lo primero que tu progama debe hacer es análisis de datos básico,
que consiste en leer un conjunto de datos (una lista de enteros) y va a calcular las siguientes medidas de dispersión:

- Valor mínimo: el valor más pequeño en la lista. Por ejemplo el valor más pequeño (mínimo) de los números {5, 6, 5, 3} es 3.
- Valor máximo: el valor más grande en la lista. El valor más grande (máximo) de los números {5, 6, 5, 3} es 6.
- Media (valor promedio): la suma de todos los números en la lista, dividida entre la cantidad de números que hay en ella. La media de los números {5, 6, 5, 3} es $\frac{(5+6+5+3)}{4} = \frac{19}{4} = 4.75$. Por sencillez, te piden que tu programa redondee los resultados al número entero mas grande, pero que sea menor o igual que el resultado. Por ejemplo: $4.75$ se redondea a $4$.

# Entrada

La primer línea de entrada contiene un solo entero, $n$ $(1 \le n \le 1000)$, el tamaño de la lista de números.
En las siguientes $n$ líneas hay un entero, $x_i$ $(0 \le x_i \le 1000000)$, en cada linea.

# Salida

La salida contiene 3 enteros separados por un espacio: el mínimo, el máximo, y el promedio de la lista de números.

# Ejemplo

||input
6
70
72
74
50
73
75
||output
50 75 69
||description
El mínimo es 50, el máximo es 75 y el promedio es 69.
||input
6
100
200
200
200
200
1100
||output
100 1100 333
||description
El mínimo es 100, el máximo es 1100 y el promedio es 333 (redondeado).
||end

# Límites

- $1 \le n \le 1000$
- $0 \le x_i \le 1000000$
