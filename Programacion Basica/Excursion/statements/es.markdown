La escuela está organizando una excursión y es tu trabajo llevar el control de cuántos alumnos viajan en cada uno de los camiones.
Para esto tienes una lista de todos los camiones y el número de alumnos que viaja en cada uno.

Después se te hará una serie de preguntas del tipo "¿Cuántos alumnos hay en el camión $x$?" y debes responder el número que tienes en tu lista.

# Tarea

Escribe un programa que lea la lista de camiones y después conteste una serie de preguntas con el número de alumnos de cada camión.

# Entrada

Tu programa deberá leer del teclado dos enteros $n$ y $p$.
Donde $n$ es el número de camiones y $p$ el número de preguntas que deberás contestar.
Cada una de las siguientes $n$ líneas representa el número de alumnos que viajan en ese camión. La primer línea representa el camión $1$, la segunda el camión $2$ y así sucesivamente.
Cada una de las siguientes $p$ líneas representa la $x$ de la pregunta que debes responder.

# Salida

Debes imprimir $p$ enteros con la respuesta a cada una de las preguntas.

# Ejemplo

||input
6 5
1151
723
1321
815
780
931
4
3
4
5
1
||output
815
1321
815
780
1151
||description
La salida consiste de 5 líneas contestando las preguntas en el orden en que se hicieron. Observa que los camiones se empiezan a númerar desde el $1$.
||end

# Límites

- $1 \leq n, q \leq 10,000$.
- $0 \leq p_{i} \leq 2,000,000,000$.
- $1 \leq x \leq n$.

# Nota

- Se te asegura que la cantidad de pasajeros en los camiones son todas diferentes.
