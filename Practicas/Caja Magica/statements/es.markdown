# Descripción

Vlasta la Sabia del reino del más allá, recibió una caja mágica con un secreto como un regalo de su amiga Haya la Sabia del reino de un poco más acá. Sin embargo, Vlasta la Sabia no sabe cuál es el secreto de la caja mágica, no la ha podido. Ella tiene la esperanza de que la ayudes.

La cerradura de la caja se ve como algo así: contiene $4$ huecos para colocar piedras preciosas formando un cuadrado de $2$ x $2$, y algunos números enteros están escritos en el borde de los huecos. La siguiente imagen te dará un panorama de como está la cerradura.

![Figura A](caja_magica_1.png)

La caja viene acompañada de $9$ piedras preciosas. Sus formas corresponden a los huecos y cada piedra contiene un número del $1$ al $9$ (cada número está escrito sólamente en una piedra preciosa). La caja se abrirá sólo después de que sean colocadas las piedras preciosas correctamente; es decir, en cada hueco debería haber exactamente una piedra. También la suma de los números de los renglones del cuadrado, columnas y diagonales deberán corresponder con los números escritos en los bordes de los huecos. Por ejemplo, la cerradura mostrada en la figura de arriba, se abrirá si colocamos las piedras en los huecos con los números como se muestran en la figura de abajo.

![Figura B](caja_magica_2.png)

Vlasta la Sabia quiere saber, dados los números de la cerradura de la caja, como colocar las piedras preciosas para que la abran. Ayuda a Vlasta a resolver esta difícil tarea.

# Entrada

La entrada contiene los números escritos en los bordes de la cerradura de la caja. La primer línea contiene los números enteros, separados con un espacio, $r_1$ y $r_2$ que son las sumas de los números en los renglones del cuadrado. La segunda línea contiene los números enteros, separados con un espacio, $c_1$ y $c_2$ que son las sumas de los números en las columnas del cuadrado. La tercer línea contiene los números enteros separados con un espacio, $d_1$ y $d_2$, que son la suma de los números de la diagonal principal y lateral del cuadrado ($1 \leq r_1, r_2, c_1, c_2, d_1, d_2 \leq 20$). La correspondencia entre las 6 variables anteriores y los lugares donde están escritas se muestra en la imagen de abajo. Para más aclaraciones por favor observa el segundo caso que muestra el ejemplo dado en la descripción del problema.

![Figura C](caja_magica_3.png)

# Salida

Muestra la forma en que deberán estar acomodadas las piedras en la caja: dos líneas que contengan dos enteros del $1$ al $9$, separados por un espacio. Los números deberán ser diferentes entre sí. Si no hay una solución para abrir la cerradura, entonces despliega un sólo número "-1" (sin las comillas).

Si hay muchas salidas, muestra cualquiera.

# Ejemplos

||input
3 7
4 6
5 5
||output
1 2
3 4
||input
11 10
13 8
5 16
||output
4 7
9 1
||input
1 2
3 4
5 6
||output
-1
||input
10 10
10 10
10 10
||output
-1
||end

# Nota

* Fíjate en el último caso del problema. Es imposible abrir la caja porque Vlasta la Sabia necesitará 4 piedras preciosas idénticas que tengan el número "5". Sin embargo, Vlasta sólo tiene una piedra preciosa con cada uno de los números del $1$ al $9$.
* Como los casos son únicos, al no existir solución, están agrupados