# Problema

Este problema se trata de ordenar un arreglo con el ordenamiento de cubetas. Un ordenamiento de cubetas hace lo siguiente:

* Lees el numero $m_i$
* Luego en un arreglo sumas $1$ a la  posición $m_i$

En este problema te daremos un arreglo $M$ de $N$ números, seguido te haremos $K$ preguntas, las preguntas consisten en decir cuantas veces se repite cierto número. Los números siempre estaran entre 0 y 100.

# Entrada y Salida
**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `inicio( int N,int M[])`.

# Implementación

## Tu función `inicio( int N,int M[])`

C/C++ `void inicio( int N,int M[]);`

C/C++ `int pregunta(int x);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el arreglo $n$ como parámetro. Deberas implementar la función`pregunta(int x)` (la cual debe retornar el número de veces que se repite $x$ en el arreglo).
### Parámetros

* `n`: El tamaño del arreglo.

# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo.

|| input
Función llamada
|| output
Valor devuelto
|| description
Descripción
|| input
inicio(N[1,2,3,3,2],5)
|| output
-
|| description
El arreglo es 1 2 3 3 2
|| output
|| input
pregunta(2)
|| output
2
|| description
Hay 2 , 2 en mi arreglo.
|| input
pregunta(3)
|| output
2
|| description
Hay 2, 3 en mi arreglo
|| end

# Restricciones

* $1 \leq M  \leq 1,000$
* $0 \leq n_i \leq 100$

# Consideraciones
* Se asegura que el arreglo nunca tendrá más de $1,000$ elementos.

{{libinteractive:download}}
