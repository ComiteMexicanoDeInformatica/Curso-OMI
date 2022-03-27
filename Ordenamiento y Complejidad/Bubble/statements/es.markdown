# Problema

Este problema se trata de ordenar un arreglo con el ordenamiento de burbuja. Un ordenamiento de burbuja hace lo siguiente:

1.- Compara $n_i$ con $n_{i+1}$ .

2.- Si $n_i$ $>$ $n_{i+1}$, entonces intercambiamos sus posiciones.

Este proceso lo hacemos desde $i=0$ hasta $i=n-2$ , podemos notar que después de hacerlo la primera vez, se nos garantiza que el número más alto se encuentra en la posición $n-1$, al hacerlo de nuevo garantizamos que tanto la posición $n-1$ tiene el mayor como la posición $n-2$ contiene el segundo mayor. Al hacer este proceso $n$ veces estaremos garantizando que tenemos los últimos $n$ números están ordenados (el arreglo totalmente ordenado). Como este proceso recorre $n$ veces el arreglo (de tamaño $n$) podemos notar que su complejidad es O($n^2$).

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `inicio(n)`.

# Implementación

## Tu función `inicio(int n)`

C/C++ `int inicio(int n);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el número $n$ como parámetro. Tu implementación deberá llamar las funciones `pregunta(int x)` (la cual retorna el elemento que se encuentra en esa posición) y `cambia(int x)` (la cual intercambia los elementos de la posición $x$ y $x+1$ ) para ordenar el arreglo de tamaño $n$ y retornar 0 cuando termine

### Parámetros

- `n`: El tamaño del arreglo.

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

Ahora la posición 0 tiene 15 y la posición 1 tiene 20. Con lo cual el arreglo queda ordenado.
|| end

# Restricciones

$0 \leq n \leq 1,000$

# Consideraciones

- Se asegura que el arreglo nunca tendrá más de $1,000$ elementos.

{{libinteractive:download}}
