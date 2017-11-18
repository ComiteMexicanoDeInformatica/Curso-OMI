# Descripción

Troyo ha estado paseando por el bosque, y está harto de no encontrar patrones en un árbol magistral. Ayúdale a encontrar algún patrón. Pero tú que eres un gran programador, decidiste darle la orden de recorrer el árbol en *pre-orden*, *in-orden* y *post-orden*.

# Problema
Dado un arreglo de tamaño $N$, deberás insertar cada uno de ellos en un árbol binario de búsqueda según vienen en la entrada, e imprimir los recorridos del árbol en este orden; Preorden, Inorden y Postorden respectivamente. El primer elemento que leas será la raíz del árbol.

# Entrada
En la primera línea un entero $N$ que indica el tamaño del arreglo, en la siguiente línea están los $N$ elementos del arreglo.

# Salida
En la primera línea deberás imprimir el recorrido en pre-orden, en la segunda deberás imprimir el recorrido en inorden, y en la tercera y última el post-orden.

||input
8
5 2 3 7 1 4 6 8
||output
5 2 1 3 4 7 6 8
1 2 3 4 5 6 7 8
1 4 3 2 6 8 7 5
||end

# Nota
 * Aquí las definiciones de los recorridos mencionados, y de qué es un árbol binario de búsqueda. [Recorridos de un árbol](https://es.wikipedia.org/wiki/Recorrido_de_%C3%A1rboles)
 * Se te asegura que todos los valores de entrada son diferentes.

# Límites

 * $1 \leq N \leq 10^5$.
