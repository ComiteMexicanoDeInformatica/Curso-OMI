# Problema

Este problema se trata de ordenar un arreglo, con el ordenamiento de inserción. Un ordenamiento por inserción hace lo siguiente:

1.-Guardar el valor $n_i$ como valor a acomodar.

2.-Para cada valor entre las posiciones $i-1$ y $0$, obtener el valor almacenado en cada posición y moverlo a la posición anterior
mientras sean mayores que el valor a acomodar y aún no se llegue al inicio de la lista (posición $0$).

3.-Una vez que el valor a acomodar encuentra un valor igual o menor, insertarlo en la posición que dejó el último valor mayor (el último valor que se movió).

![Ejemplo de Insertion Sort](insertion-sort-example.gif)

Este proceso lo hacemos de $i=1$ a $n$ , podemos notar que después de hacerlo la primera vez,  los dos primeros elementos de la lista $n_0$ y $n_1$ se encuentran ordenados entre sí, al hacerlo de nuevo para $i=2$ se habrán ordenado entre sí los elementos de las $3$ primeras posiciones de la lista, por lo que al hacer el proceso $n-1$ veces, los $n$ números estarán ordenados (el arreglo totalmente ordenado). Como este proceso recorre $n$ veces el arreglo (de tamaño $n$) podemos notar que su complejidad es $Ω(n^2)$. 

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `ordenar(n)`.

# Implementación

## Tu función `void ordenar(int n)`

C/C++ `void ordenar(int n);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el número $n$ como parámetro. Tu implementación deberá llamar las funciones `guardar(int i)` la cual respalda y regresa el entero que se encuentra en esa posición, `obtener(int i)` la cual únicamente regresa el valor que se encuentra en esa posición, `desplazar(int i)` pasa a la posición $i+1$ el valor almacenado en la posición $i$ e `insertar(int i)` almacena en la posición indicada en el parámetro, el último valor respaldado por la función `guardar`.

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

ordenar(3)

|| output

-

|| description

El tamaño del arreglo es de 3.
|| input
guardar(1)

|| output

3

|| description
Tu función pregunta que número hay en la posición 1 y el Evaluador lo respalda.
|| input

obtener(0)

|| output

2

|| description

Tu función pregunta que número hay en la posición 0 .
|| input

guardar(2)

|| output

1

|| description
Tu función pregunta que número hay en la posición 2 y el Evaluador lo respalda.
|| input

obtener(1)

|| output

3

|| description

Tu función pregunta que número hay en la posición 1 .
|| input

desplazar(1)

|| output


|| description
Tu función solicita mover el 3 almacenado en la posición 1 a la posición 2
|| input

obtener(0)

|| output

2

|| description

Tu función pregunta que número hay en la posición 0 .
|| input

desplazar(0)

|| output


|| description
Tu función solicita mover el 2 almacenado en la posición 0 a la posición 1
|| input

insertar(0)

|| output


|| description
Tu función solicita almacenar el valor 1 en la posición 0 (el último valor almacenado por la función $guardar$)
|| end

# Restricciones

$1 \leq n \leq 400$

{{libinteractive:download}}
