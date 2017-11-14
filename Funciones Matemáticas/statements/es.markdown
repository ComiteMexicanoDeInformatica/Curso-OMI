# Descripción
Históricamente las computadoras han ido evolucionando conforme a la cantidad de operaciones matemáticas que pueden hacer en determinado tiempo. Las operaciones manejadas tambien han ido evolucionando hasta llegar al punto en que la computadora puede hacer operaciones muy complejas. En este problema vamos a usar algunas operaciones básicas, las cuales se te presentan a continuación.

----------
1.- Valor Absoluto

2.- Máximo de dos números

3.- Mínimo de dos números

4.- Raíz Cuadrada

5.- Potencias

----------

Cada una de las anteriores operaciones van a ser representadas con el respectivo número que tienen a su derecha. Para este problema, en los casos particulares de las operaciones *Raíz Cuadrada* y *Potencias*, se tomarán en cuenta raices cuadradas con entrada entera y salida con **dos decimales**, y potencias con entradas y salidas enteras.


# Entrada

En la primera línea recibirás un número $N$ el cual representará el número de operaciones que se te pedirá realizar. En las siguientes $N$ líneas primeramente recibirás un número $1 \leq M \leq 5$ el cual te indicará la operación ha realizarse. Posteriormente a recibir dicho número, en la misma línea recibirás los números con los que realizarás la operación seleccionada. De manera particular, para los casos de *Valor Absoluto* y *Raíz Cuadrada* recibirás un único numero, y las demás operaciones recibirán dos números.

# Salida

La salida será $N$ líneas las cuales representarán el resultado de cada una de las operaciones que se pidió en la entrada. El orden de dichos resultados deberá de ser el mismo con el cual se puso en la entrada.

# Ejemplo

||input
6
1 -8
4 29
5 2 4
2 -7 12
3 -11 3
4 49
||output
8
5.39
16
12
-11
7.00
||description
La primera línea nos indica que se realizarán 6 operaciones. La siguiente $N$ líneas nos indican que se realizarán las siguientes operaciones: *Valor Absoluto*, *Raíz Cuadrada*, *Potencias*, *Máximo*, *Mínimo* y *Raíz Cuadrada*. Obsérvese que si la *Raiz Cuadrada* no es exacta sólo se muestran dos decimales y si es exacta se muestran 2 ceros.
||end

# Límites

* $1 \leq M \leq 5$
* $1 \leq N \leq 1000$
