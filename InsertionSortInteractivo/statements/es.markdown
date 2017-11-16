# Problema
Insertion Sort, es un algoritmo de ordenamiento que ordena en tiempo cuadrático. Consiste de $n$ iteraciones (donde $n$ es el tamaño del arreglo) en las que debes encontrar el número más pequeño y llevarlo a su 
# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `inicio(n)`.

# Implementación

## Tu función `ordena(int n)`

C/C++ `int ordena(int n);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el número $n$ como parámetro. Tu implementación deberá llamar las funciones `int obten(int indice)` (la cual retorna el elemento que se encuentra en esa posición), `int siguiente()` (la cual regresa el próximo número a ordenar), `bool desplaza(int i)` (la cual reemplaza el valor del arreglo en la posición $i+1$ con el valor en la posición $i$) y `void inserta(int indice)` (la cual inserta en la posición $indice$ de arreglo el $iecimo$ número ). 

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

inicio(2)

|| output

-

|| description

El tamaño del arreglo es de 2.
|| input
pregunta(0)

|| output

20

|| description
El usuario pregunta que número hay en la posición 0.
|| input

pregunta(1)

|| output

15

|| description

El usuario pregunta que número hay en la posición 1 .
|| input

cambia(0)

|| output



|| description

Ahora la posicion 0 tiene 15 y la posición 1 tiene 20. Con lo cual el arreglo queda ordenado. 
|| end

# Restricciones

$0 \leq n \leq 2,000$

# Consideraciones

* Para un 20% de los casos de prueba, $n\leq20$
* Para un 20% de los casos de prueba, $n\leq100$
* Para un 20% de los casos de prueba, $n\leq500$
* Para un 20% de los casos de prueba, $n\leq1,000$
* Para un 20% de los casos de prueba, $n\leq2,000$
* Para los primeros 40% casos de prueba, el máximo de operaciones desplaza que puedes hacer es $n^2$
* Para el otro 60%, podrás utilizar la operación desplaza solo las veces que sean necesarias.

{{libinteractive:download}}
