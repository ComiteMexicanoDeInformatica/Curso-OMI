# Descripci�n

Vlasta la Sabia del reino del m�s all�, recibi� una caja m�gica con un secreto como un regalo de su amiga Haya la Sabia del reino de un poco m�s ac�. Sin embargo, Vlasta la Sabia no sabe cu�l es el secreto de la caja m�gica, no la ha podido. Ella tiene la esperanza de que la ayudes.

La cerradura de la caja se ve como algo as�: contiene $4$ huecos para colocar piedras preciosas formando un cuadrado de $2$ x $2$, y algunos n�meros enteros est�n escritos en el borde de los huecos. La siguiente imagen te dar� un panorama de como est� la cerradura.

![Figura A](caja_magica_1.png)

La caja viene acompa�ada de $9$ piedras preciosas. Sus formas corresponden a los huecos y cada piedra contiene un n�mero del $1$ al $9$ (cada n�mero est� escrito s�lamente en una piedra preciosa). La caja se abrir� s�lo despu�s de que sean colocadas las piedras preciosas correctamente; es decir, en cada hueco deber�a haber exactamente una piedra. Tambi�n la suma de los n�meros de los renglones del cuadrado, columnas y diagonales deber�n corresponder con los n�meros escritos en los bordes de los huecos. Por ejemplo, la cerradura mostrada en la figura de arriba, se abrir� si colocamos las piedras en los huecos con los n�meros como se muestran en la figura de abajo.

![Figura B](caja_magica_2.png)

Vlasta la Sabia quiere saber, dados los n�meros de la cerradura de la caja, como colocar las piedras preciosas para que la abran. Ayuda a Vlasta a resolver esta dif�cil tarea.

# Entrada

La entrada contiene los n�meros escritos en los bordes de la cerradura de la caja. La primer l�nea contiene los n�meros enteros, separados con un espacio, $r_1$ y $r_2$ que son las sumas de los n�meros en los renglones del cuadrado. La segunda l�nea contiene los n�meros enteros, separados con un espacio, $c_1$ y $c_2$ que son las sumas de los n�meros en las columnas del cuadrado. La tercer l�nea contiene los n�meros enteros separados con un espacio, $d_1$ y $d_2$, que son la suma de los n�meros de la diagonal principal y lateral del cuadrado ($1 \leq r_1, r_2, c_1, c_2, d_1, d_2 \leq 20$). La correspondencia entre las 6 variables anteriores y los lugares donde est�n escritas se muestra en la imagen de abajo. Para m�s aclaraciones por favor observa el segundo caso que muestra el ejemplo dado en la descripci�n del problema.

![Figura C](caja_magica_3.png)

# Salida

Muestra la forma en que deber�n estar acomodadas las piedras en la caja: dos l�neas que contengan dos enteros del $1$ al $9$, separados por un espacio. Los n�meros deber�n ser diferentes entre s�. Si no hay una soluci�n para abrir la cerradura, entonces despliega un s�lo n�mero "-1" (sin las comillas).

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

- F�jate en el �ltimo caso del problema. Es imposible abrir la caja porque Vlasta la Sabia necesitar� 4 piedras preciosas id�nticas que tengan el n�mero "5". Sin embargo, Vlasta s�lo tiene una piedra preciosa con cada uno de los n�meros del $1$ al $9$.
- Como los casos son �nicos, al no existir soluci�n, est�n agrupados
