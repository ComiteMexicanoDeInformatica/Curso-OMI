
# Historia

<!-- no es necesario escribir historia en este momento-->

# Problema

<!-- definir de qué se trata el problema de la manera mas clara y concisa posible -->

Karel tiene N zumabdores en su mochila  y debe recorrer la primer fila del mundo, 
cada que se encuentre con un monton de zumbadores debe restar el tamaño del monton a la N
inicial y apagarse cuando no se pueda restar o cuando haya llegado al final

# Ejemplo

### Entrada

<!--las imagenes van en la misma carpeta de statements -->

![Ejemplo de entrada](img1.png)

### Salida

![Ejemplo de salida](img2.png)


# Consideraciones

<!-- definir aquí todo las consideraciones necesarias para que las personas encargadas
de hacer las soluciones no tengan niguna duda 

Si el problema se divide en subtasks se define aquí

-->

* Karel inicia al principio del callejón orientado al este.
* Karel tendrá suficiente fuerza para derrotar por lo menos a un bandido.
* El callejón está representado por un rectángulo de una casilla de ancho.
* En cada casilla hay un montón de zumbadores que indica la fuerza de ese bandido. Las casillas vacias también representan bandidos en el callejón, la fuerza de dichos bandidos es de 0.
* Cuando Karel derrota a un bandido, pierde la misma cantidad de fuerza que la que tenía el bandido. Por ejemplo, si Karel empieza con una fuerza de 10 y lucha con un bandido de fuerza 4 , Karel queda con una fuerza de 10 - 4 = 6.
* No importa la cantidad de zumbadores en el mundo, sólo importa la posición final de Karel.
* Para el 30% de los casos N < 50

