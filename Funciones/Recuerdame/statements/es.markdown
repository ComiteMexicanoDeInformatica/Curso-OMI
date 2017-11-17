Esta es tu primera experiencia resolviendo un problema interactivo, y queremos que sea una experiencia agradable. Así que te dejamos la tarea de escribir dos funciones muy sencillas para resolver un problema muy simple. ¡Ah! y al mismo tiempo te darás cuenta de la diferencia entre variables locales y variables globales en C++.

El problema se origina porque los números o algunos de ellos están perdiendo la memoria. Así que dependen de las funciones que tú escribas para su bienestar.
El número le dice al programa-de-soporte-a-los-números quién es a través de la función `void recuerdame(int num)`.

Esta función recibe el número en el parámetro `num`.

La otra función que debes escribir es `bool soy(int x)`.

Con esta función el desmemoriado número pregunta: `soy(m)`, y
la función regresa `true` o `false` dependiendo de si `m` es igual al valor guardado a través de `recuerdame`.

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código las funciones `void recuerdame(int num)` y `bool soy(int m)`.

# Implementación

### Tu función C++

`void recuerdame(int num);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el número $num$  como argumento. Tu implementación deberá guardar este número.

### Parámetros

* `num`, es el número que se debe recordar.

### Tu función C++
`bool soy(int m)`

### Descripción
El evaluador buscará en tu código esta función y la llamará con el número $n$  como argumento.

Esta función debe regresar:

* `true`: Si `m` es igual que `num` (el número guardado).

* `false`: Si `m` es diferente que `num`.

# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo.

|| input
Función llamada
|| output
Valor devuelto
|| description
Descripción
|| input
recuerdame(10)
|| output
-
|| description
Se llama a tu procedimiento.
|| input
soy(7)
|| output
false
|| description
El número por recordar es 10, que es diferente a 7.
|| input
soy(10)
|| output
true
|| description
El número por recordar es 10, que es igual a 10.
|| end

# Restricciones

$0 \leq num,m \leq 9$

# Consideraciones

* Tu puntuación será en base a la cantidad de casos resueltos.

{{libinteractive:download}}
