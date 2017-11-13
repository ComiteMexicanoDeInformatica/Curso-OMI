# Un mejor plato si se sirve frío
# Descripción

Los estadísticos no te caen bien, ni tu a ellos. Desde que tenías 4 años, tu enojo contra estos traga-números ha ido en aumento. pero esto está a punto de cambiar.
Después de muchas noches de insomnio, se te ha ocurrido la mejor de las revanchas: ganarles en su propio juego. Vas a escribir un paquete para estadística, tan completo, que los vas a dejar sin trabajo.
Con este paquete se va apoder predecír el clima,calcular la esperanza de vida de una persona,e inclusive será un jugador de poker invatible. 
Decides que lo primero que tu progama debe hacer es análisis de datos básico: Tu programa va a leer un conjunto de datos (una lista de enteros) y va a calcular las siguientes medidas de dispersión:

 * Valor mínimo: el valor mas pequeño en la lista. Por ejemplo el valor mas pequeño (mínimo) de los números {5, 6, 5, 3} es 3.
 * Valor máximo: el valor mas grande en la lista. El valor mas grande (máximo) de los números {5, 6, 5, 3} es 6.
 * Media (valor promedio): de define como la suma de todos los números en la lista, dividida entre la cantidad de números que hay en ella. La media de los números {5, 6, 5, 3} es (5+6+5+3)/4 = 19/4 = 4.75. Por sencillez, te piden que tu programa redondee los resultados al número entero mas grande, pero que sea menor que el resultado. Por ejemplo: 4.75 se redondea a 4.



# Entrada
La primer linea de entrada contiene un solo entero n (1 <= n <= 1000), el tamaño de la lista de números. En las siguientes n lineas hay un entero, entre 0 y 1000000 inclusive, en cada linea. 



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
El mínimo es 50, el máximo es 75 y el promedio es 69 
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
El mínimo es 100, el máximo es 1100 y el promedio es 333 (redondeado)
||end

# Límites

* (1 <= n <= 1,000)
* 0 <= entero de cada linea <=1000000