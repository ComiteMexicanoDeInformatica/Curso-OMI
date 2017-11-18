Teorema variación con repetición

El número de variaciones de un conjunto de $n$ elementos es $n^k$.

Hay $n$ formas de seleccionar un elemento del conjunto para cada una de las $k$ posiciones, ya que para cada posición están disponibles los $n$ elementos, según la regla del producto  $n^k$.

Supongamos que una tarea se puede dividir en dos subtareas consecutivas. Si hay $n_1$ formas de realizar la primera y $n_2$ formas de hacer la segunda subtarea después de que la primera haya sido realizada, entonces hay $n_1n_2$ formas de completar la tarea.

# Problema
Se desea la $j-$ésima cadena lexicográficamente menor con $k$ letras utilizando solo las primeras $n$ letras del abecedario.

#Entrada
Una sola línea con tres enteros $n$, $k$ y $j$


# Salida
La $j-$ésima cadena lexicográficamente menor 

# Ejemplo
||input
3 5 2
||output
aaaab
||end

# Límites

* $1 \leq n \leq 10$
* $1 \leq k \leq 18$
* $1 \leq j \leq n^k$
