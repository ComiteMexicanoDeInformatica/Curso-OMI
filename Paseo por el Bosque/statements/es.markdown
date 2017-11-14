# Descripción

Troyo ha estado paseando por el bosque, y esta harto de no encontrar patrones en un árbol magistral. Ayúdale a encontrar algún patrón. Pero tu que eres un gran programador, los patrones que decidiste darle, es recorrer el árbol en pre-orden, in-orden y post-orden.

# Problema
Dado un arreglo de $N$, deberás insertar cada uno de ellos en un árbol binario de búsqueda, según vienen en la entrada, e imprimir los recorridos del árbol en este órden; Preorden, Inorden y Postorden respectivamente. El primer elemento que leas será la raíz del árbol.

# Entrada
Un entero $N$ que indica el tamaño del arreglo, seguido de los $N$ elementos del arreglo.

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

#Nota

Aquí las definiciones de los recorridos mencionados. [Recorridos de un árbol][1]


  [1]: https://es.wikipedia.org/wiki/Recorrido_de_%C3%A1rboles
