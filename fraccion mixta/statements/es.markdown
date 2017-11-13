# Descripción
Estas navegando por la red cuando te encuentras una página que te recuerda que en el pasado habían muchas formas diferentes de representar fracciones: porcentajes, decimales y fracciones mixtas. No importaba lo grande que fueran los números, las fracciones siempre lograban representarlos en una manera  hermosa y compacta, cuando te diste cuenta que se empezó a perder la costumbre.
En este problema se te dará una fracción de la manera $\frac{n}{m}$ y  deberas encontrar $a$ y b tales que $0 \leq b \leq m$, y $am + b = n$.

# Entrada

Una sola línea que contiene los enteros $n$ y $m$.
# Salida
Si  b $\neq$ 0, imprime en una línea la representación en la forma $a \cdot \frac{b}{m}$. En caso contrario solo imprime a.

# Ejemplo

||input
22 6

||output
3 4/6
||description
La fracción mixta de $n$ y $m$.
||input
49 7
||output
7
||end

# Límites
$1 \leq n,m \leq 10^8$