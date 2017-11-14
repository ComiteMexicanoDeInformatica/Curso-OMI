#Resolviendo Mesa Redonda
Existe un juego llamado mesa redonda donde cada turno se elmina a un niño hasta que no queda mas que un niño en el juego y así este se convierte en ganador. Al inicio comenzamos con N - Niños jugando en un círculo numerados de 1 a N.

#Explicación

Para el inicio del juego tenemos N = 5 que es la cantidad de niños, además debes de introducir el total de niños que pasa la maestra para que pueda dejar salir a otro niño, en este caso seleccionamos que 3 sería el número de niños que va brincando:

En la entrada tenemos:
N = 5 // K = 3

!{Inicio del Juego}(inicio-juego.jpg)

Iniciamos en el niño 1, como nuestro salto es de 3, llegamos hasta el niño 4 que es el primer niño en salir, como sale el niño 4 ahora nuestro siguiente inicio es el niño 5 quedando así:

!{Cuando sale el niño 4}(eliminando4.jpg)

Ahora el inicio es el niño 5 y saltamos 3 niños más llegando al niño 3 que es el siguiente a salir:

!{Cuando sale el niño 3}(eliminando3.jpg)

Nuevamente debemos de iniciar con el niño 5, si saltamos 3 llegamos al mismo niño 5 que es el siguiente en salir:

!{Cuando sale el niño 5}(eliminando2.jpg)

El nuevo inicio es ahora el niño 1, saltando 3 niños llegamos al 2 por lo tanto Randy es el último niño en salir, por lo tanto en la salida va a imprimir un 4 y debido a que son 4 niños los que salen antes de Randy.

El orden que los niños salieron al recreo es: 4 - 3 - 5 - 2 - Randy
