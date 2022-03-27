Este problema se trata de implementar una cola.

# Entrada y Salida

**Este es un problema interactivo**,
por lo que no tendrás que leer la entrada ni imprimir la salida,
sino implementar en tu código la función `agrega(int n)` y `saca()`.

# Implementación

## Tu función `agrega(int n)`

C/C++ `void agrega(int N);`

### Descripción

El evaluador buscará en tu código esta función y la llamará con el número $n$ como parámetro.
Tu implementación deberá agregar el entero $n$ a una cola.

### Parámetros

- `n`: El entero a agregar a la cola.

## Tu función `saca()`

C/C++ `int saca();`

### Descripción

Esta función debe regresar el primer elemento que se metió en la cola, y sacarlo.

Por ejemplo, si en este momento la cola tiene los datos `15, 6, 9` y se manda a
llamar `saca()`, la funcion deberá regresar `15` y la cola debe quedar sólo
con los datos `6, 9`.

En caso de que la cola esté vacía, imprime $-1$.

# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo.

|| input
Función llamada
|| output
Valor devuelto
|| description
Descripción
|| input
agrega(15)
|| output

- || description
  Al principio la cola está vacia.
  Con esta llamada, la cola ahora es `[15]`.
  || input
  agrega(6)
  || output
- || description
  Se agrega el elemento y la cola queda `[15 , 6]`.
  || input
  agrega(9)
  || output
- || description
  Se agrega el elemento y la cola queda `[15, 6, 9]`.
  || input
  saca()
  || output
  15
  || description
  Se devuelve `15` porque es el primer elemento y la cola queda `[6, 9]`.
  || input
  saca()
  || output
  6
  || description
  Se devuelve `6` porque es el primer elemento y la cola queda `[9]`.
  || input
  saca()
  || output
  9
  || description
  Se devuelve `9` porque es el primer elemento y la cola queda vacía `[]`.
  || input
  saca()
  || output
  -1
  || description
  Se devuelve `-1` porque ya no hay más elementos en la cola.
  || end

# Restricciones

$0 \leq n \leq 10,000$

# Consideraciones

- Se asegura que la cola nunca tendrá mas de $10,000$ elementos.

# Evaluador

El evaluador toma el caso de ejemplo en el siguiente formato.

En la primera línea un entero, el número de operaciones a realizarse.

Por cada operación, una línea con el siguiente formato:

- `a x`: Agrega a `x` a la cola.
- `s`: Saca el primer elemento de la cola.

{{libinteractive:download}}
