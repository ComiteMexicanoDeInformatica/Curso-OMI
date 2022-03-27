# Problema

Este problema se trata de implementar una pila.

# Entrada y Salida

**Este es un problema interactivo** por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código las funciones `agrega(int n)` y `saca()`.

# Implementación

## Tu función `agrega(int n)`

C/C++ `void agrega(int N);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el número $n$ como parámetro. Tu implementación deberá agregar el entero $n$ a una pila.

### Parámetros

- `n`: El entero a agregar a la pila.

## Tu función `saca()`

C/C++ `int saca();`

### Descripción

Esta función debe regresar el objeto que esté hasta arriba de la pila y sacarla de ella, es decir si en este momento la pila tiene los datos 3, 6, 9 y se manda a llamar `saca()` la funcion debera regresar 9 y la pila debe quedar solo con los datos 3, 6.

En caso de que la pila este vacía imprime $-1$.

# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo.

|| input
agrega(3)
|| output

- || description
  Al principio la pila esta vacía al llamar por primera vez la pila queda un solo elemanto [3]
  || input
  agrega(6)
  || output
- || description
  Se agrega el elemento y la pila queda[3, 6]
  || input
  agrega(9)
  || output
- || description
  Se agrega el elemento y la pila queda[3, 6, 9]
  || input
  saca()
  || output
  9
  || description
  Se devuelve 9 porque es el elemento de hasta arriba y la pida queda [3, 6]
  || input
  saca()
  || output
  6
  || description
  Se devuelve 6 porque es el elemento de hasta arriba y la pida queda [3]
  || input
  saca()
  || output
  3
  || description
  Se devuelve 3 porque es el elemento de hasta arriba y la pida queda vacía []
  || input
  saca()
  || output
  -1
  || description
  Se devuelve -1 porque ya no hay mas elementos en la pila
  || end

# Restricciones

$0 \leq n \leq 100,000$

# Consideraciones

- Se asegura que la pila nunca tendrá mas de $10,000$ elementos.

{{libinteractive:download}}
