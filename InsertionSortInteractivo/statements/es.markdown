
# Problema

Este problema se trata de ordenar un arreglo con el ordenamiento de inserción. Un ordenamiento por inserción hace lo siguiente:

1.-Guardar el valor $n_i$ como valor a acomodar.

2.-Para cada valor entre las posiciones $i-1$ y $0$ obtener el valor almacenado en cada posición mientras sean mayores que el valor a acomodar y mientras aún no se llegue al inicio de la lista (posición $0$), para desplazar cada valor a la posición contigua anterior.

3.-Una vez que el valor a acomodar encuentra un valor igual o menor, insertar el valor a acomodar en la posición que ocupaba el último valor desplazado.

Este proceso lo hacemos desde $i=1$ hasta $i=n-1$ , podemos notar que después de hacerlo la primera vez, se nos garantiza que los dos primeros elementos de la lista $n_0$  y  $n_1$ se encuentran ordenados entre sí, al hacerlo de nuevo para $i=2$ se habrán ordenado entre sí los elementos de las $3$ primeras posiciones de la lista, por lo que despues de $i$ veces se habrán ordenado entre sí los $i+1$ primeros elementos de la lista. Al hacer este proceso $n-1$ veces estaremos garantizando que los $n$ números estan ordenados (el arreglo totalmente ordenado). Como este proceso recorre $n$ veces el arreglo (de tamaño $n$) podemos notar que su complejidad es $Ω(n^2)$. 


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

guardar(2)

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

$1 \leq n \leq 500$

# Consideraciones

* Para los primeros 20% de los casos de prueba $1 \leq n \leq 20$ y $0 \leq k \leq n^2$

* Para los siguientes 20% de los casos $21 \leq n \leq 100$ y $0 \leq k \leq n^2$

* Para otro 20% de casos $101 \leq n \leq 200$ y $k$ debe ser el mínimo de operaciones necesarias dependiendo de cada caso.

* Para otro 20% $201 \leq n \leq 300$ y $k$ debe ser el mínimo de operaciones necesarias dependiendo de cada caso.0

* Para el restante 20% de los casos $301 \leq n \leq 500$ y $k$ debe ser el mínimo de operaciones necesarias.


{{libinteractive:download}}
