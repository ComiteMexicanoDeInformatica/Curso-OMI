Un músico de la ciudad va a dar un concierto para recabar fondos para la caridad.
El concierto se realizará en un teatro, con un espacio perfectamente designado, en el que
hay $r$ filas de asientos con $s$ asientos cada una. En cada asiento se puede sentar como
máximo una persona (es decir, dos personas no pueden sentarse en un mismo asiento).

Pero hay un problema: los boletos para el concierto se han sobrevendido, por lo que
algunas personas van a tener que estar paradas para ver el concierto.

# Problema

El músico te ha pedido tu ayuda para que respondas la siguiente pregunta:
Si todos los que compraron boleto vienen al concierto,
¿cuántas personas estarán sentadas y cuántas estarán paradas?

# Entrada

La primer línea de la entrada consistirá en dos enteros, $r$ y $s$,
el número de filas y el número de asientos por fila.

La segunda línea contendrá un sólo entero, $b$, que representa entre el número de boletos
que se han vendido.

# Salida

La salida deberá consistir en dos enteros separados por un espacio:
el número de personas que estarán sentadas y las que permanecerán paradas, respectivamente.

Recuerda que todos intentarán sentarse si pueden.

# Ejemplo

||input
7 12
100
||output
84 16
||description
La primera línea de la entrada dice que hay $7$ filas de $12$ asientos cada una
(es decir, $7 \times 12 = 84$ asientos en total).

La segunda línea indica que hay $100$ personas que tienen boletos.
Así que no hay suficiente espacio para todos; solo $84$ personas podrán sentarse
y $16$ permanecerán paradas.
||end

# Límites
* $0 \leq r \leq 10,000$
* $0 \leq s \leq 10,000$
* $0 \leq b \leq 1,000,000,000$
