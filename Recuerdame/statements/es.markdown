# Descripción
Esta es tu primera experiencia resolviendo un problema interactivo, y queremos que sea una experiencia agradable. Asi que te dejamos la tarea de escribir dos funciones muy sencillas, para resolver un problema muy simple. ¡Ah! y al mismo tiempo distinguirás la diferencia entre variables locales y variables globales en C++.

El problema se origina porque los números o algunos de ellos, están perdiendo la memoria. Asi que, dependen de las funciones que tu escribas, para su bienestar.
El número le dice, al programa-de-soporte-a-los-números, quien es, a través de la función: $$void\ recuerdame(int\ num)$$
Esta función recibe el número en el parámetro $num$.
La otra función que debes escribir es $$bool\ soy(int\ x) $$
Con esta función el desmemoriado número pregunta:$$soy(elNumero)$$
La función regresa $cierto$ o $falso$ ($true$ o $false$) dependiendo de si $ elNumero$ es igual al valor guardado a travez de $num$



# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código a las funciones `void recuerdame(int num)` y  `bool soy(int x)`.

# Implementación

### Tu función C++ 
`void recuerdame(int num)`


### Descripción

El evaluador buscará en tu código a esta función y la llamará con el número $unNum$  como argumento. Tu implementación deberá guardar este número. 

### Parámetros

* `num`, es el número que se debe recordar

### Tu función C++ 
`bool soy(int x)`


### Descripción
El evaluador buscará en tu código a esta función y la llamará con el número $unNumX$  como argumento.
Esta función puede regresarte uno de estos dos valores:

* `true`: Si `unNumX` es igual que `unNum`.

* `false`: Si `unNumX` es diferente que `unNum`.


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
El número por recordar es 10,que es diferente  a 7.
|| input
soy(10)
|| output
true
|| description
El número por recordar es 10, que es igual a 10.
|| end

# Restricciones

*$0\leq$ unNum,unNumX $\leq$ 9$*

# Consideraciones

* Tu puntuación será en base

{{libinteractive:download}}