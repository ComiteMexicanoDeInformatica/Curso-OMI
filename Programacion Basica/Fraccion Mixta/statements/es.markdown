En el pasado habían muchas formas diferentes de representar fracciones:
porcentajes, decimales y fracciones mixtas. Las fracciones mixtas eran tus favoritas
por su escritura hermosa y compacta. Sin embargo, te diste cuenta que
se empezó a perder la costumbre de usarlas.

# Problema

Escribe un problema que lea una fracción de la forma $\frac{n}{m}$ y
lo escriba como fracción mixta: $a\frac{b}{m} = \frac{n}{m}$.

# Entrada

Una sola línea que contiene los enteros $n$ y $m$.

# Salida

Si $b \neq 0$, imprime en una línea la representación en la forma
$a \cdot \frac{b}{m}$. En caso contrario solo imprime $a$. Mira
los ejemplos para que te quede más claro.

No debes simplificar la fracción.

# Ejemplo

||input
22 6
||output
3 4/6
||description
La fracción mixta de $n$ y $m$ es $3 \frac{4}{6}$.
||input
49 7
||output
7
||description
En este caso no existe parte fraccionaria.
Es decir, $b = 0$.
||end

# Límites

 * $1 \leq n < m \leq 10^8$
