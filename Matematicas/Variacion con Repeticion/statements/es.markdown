Teorema variaci�n con repetici�n

El n�mero de variaciones de un conjunto de $n$ elementos es $n^k$.

Hay $n$ formas de seleccionar un elemento del conjunto para cada una de las $k$ posiciones, ya que para cada posici�n est�n disponibles los $n$ elementos, seg�n la regla del producto $n^k$.

Supongamos que una tarea se puede dividir en dos subtareas consecutivas. Si hay $n_1$ formas de realizar la primera y $n_2$ formas de hacer la segunda subtarea despu�s de que la primera haya sido realizada, entonces hay $n_1n_2$ formas de completar la tarea.

# Problema

Se desea la $j-$�sima cadena lexicogr�ficamente menor con $k$ letras utilizando solo las primeras $n$ letras del abecedario.

#Entrada
Una sola l�nea con tres enteros $n$, $k$ y $j$

# Salida

La $j-$�sima cadena lexicogr�ficamente menor

# Ejemplo

||input
3 5 2
||output
aaaab
||end

# L�mites

- $1 \leq n \leq 10$
- $1 \leq k \leq 18$
- $1 \leq j \leq n^k$
