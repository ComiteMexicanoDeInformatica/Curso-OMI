# Historia

En un planeta lejano existen dos lenguajes: Numírico y Enteral. aunque los dos son muy parecidos por que comparten el mismo alfabeto cada palabra se escribe diferente.

Por ejemplo, "hola" en Numírico se escribe "53134" y en Enteral "46952"

Se te ha contratado para que ayudes a traducir palabras de un lenguaje al otro.

# Tarea

Escribe un programa que lea un diccionario de palabras y después pueda traducir palabras de un lenguaje al otro.

# Entrada

La primera línea de entrada consiste de dos enteros $d$ y $w$
Las siguientes $d$ líneas representan una traducción del diccionario. Cada línea contiene dos enteros $n_{i}$ y $e_{i}$ separados por un espacio: La palabra en Númirico y su traducción a Enteral. Se te garantiza que no hay palabras de Númirico repetidas en el diccionario.

Las siguientes $w" líneas contienen una sola palabra en Numírico para que traduzcas.


# Salida
Por cada palabra en Númirico que se te pide que traduzcas debes imprimir una línea que contenga su traduccion en Enteral. En caso de que no haya traducción debes imprimir "C?" para esa línea.

# Ejemplo

||input
5 6
2 71
3 556
140 19
87 555
71 3
140
2
87
2
3
4
||output
19
71
555
71
556
C?
||description
Observa que la palabra en Numírico $4$ no tiene traducción a Enteral.
||end

# Límites

* $0 \leq d, w \leq 1,000$
* $-2,000,000,000 \leq n_{i}, e_{i} \leq 2,000,000,000$

