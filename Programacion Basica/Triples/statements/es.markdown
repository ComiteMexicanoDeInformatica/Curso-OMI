Escribe un programa que lea una lista de enteros no negativos y encuentre todos los "triples" (múltiplos de 3).
Para el propósito de este problema un triple se define como cualquier número que se pueda expresar como $3 \times x$.
Por ejemplo, 0, 3, y 27 se consideran triples.

Para complicar un poco más las cosas,
una vez que identifiques todos los triples debes imprimir su ubicación en la lista original.

# Entrada

La primera línea de entrada consiste de un entero, $n$, la longitud la lista.

Las siguientes $n$ líneas representan los enteros de la lista.

# Salida

Si hubo múltiplos de 3 en la lista, la primera línea de salida debe ser un entero
indicando el número de triples encontrados.

La segunda línea contiene enteros separados por espacios,
describiendo los índices de los triples en orden ascendiente.

Si no hay triples sólo debes imprimir `No hay triples.`.

# Ejemplo 1

||input
7
10
12
8
9
3
29
30
||output
4
2 4 5 7
||description
4 enteros en la lista son triples:
el segundo, cuarto quinto y séptimo.
(Sus valores son $12 = 3 \times 4$, $9 = 3 \times 3$,
$3 = 3 \times 1$, y $30 = 3 \times 10$.)
||end

# Ejemplo 2

||input
7
16
49
2
10
28
55
31
||output
No hay triples.
||description
Ningún número en la lista es un múltiplo de 3.
||end

# Límites

- $1 \leq n \leq 50,000$
- $0 \leq l_{i} \leq 2,000,000,000$
