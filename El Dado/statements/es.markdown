# Descripción
Eres parte de un equipo de programación en tu curso de Introducción a la Programación. Tu equipo va a escribir un programa que simula un juego de azar con dados. Te tocó escribir una función que simula el lanzamiento de un dado. El prototipo de la función es:

int lanzaDado()

Sin embargo, el dado no es un dado convencional (6 caras numeradas de 1 a 6), este dado puede tener N caras y empezar su numeración en K. Por ejemplo:

Si N=8 y K=2, significa que el dado tiene 8 caras y que las caras se numeran a partir de 2 (2, 3, 4, 5, 6, 7, 8 y 9)

Escribe la función y un programa que la pruebe.

# Entrada
Una línea con los enteros N y K separados por un espacio.

# Salida

Un entero, entre K y K+N-1.

# Ejemplo

||input
8 2
||output
4
||description
El lanzamiento simulado resultó en 4
||input
6 1
||output
5
||input
10 20
||output
26
||end

# Límites

* $ 1\le n,k \le 100$
