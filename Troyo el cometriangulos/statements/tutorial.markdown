# Solución

[solucion](solu.jpg)

Como podemos ver en la imágen, el triángulo $n$ es el mismo triángulo que el $n-1$, pero añadiendole la diagonal de $n$ puntos. 
Y ya que el triángulo $1$ tiene $1$ solo punto, entonces el triángulo $2$ va a tener $1+2=3$ puntos, el tercer triángulo va a tener $1+2+3=6$ puntos, y así sucesivamente.
De modo que, el $n$-ésimo triángulo tendrá $1+2+3+4+5+ \ldots + n$ puntos. Entonces, el problema se reduce a encontrar una manera óptima de calcular $1+2+3+ \ldots + n$.

Sea $S=1+2+3+ \ldots + n$. De modo que $2S = (1+2+3+ \ldots + n)+(n+n-1+n-2+ \ldots + 1)$.
Y por el principio de distributividad, se tiene que $2S = (1+2+3+ \ldots + n)+(n+n-1+n-2+ \ldots + 1) = (1+n)+(2+(n-1)) + (3+(n-2)) + \ldots (n+1)$.
Lo cual es igual a sumar $n$ veces $n+1$, es decir, $n \cdot (n+1)$. Por lo que, $2S = n \cdot (n+1)$, lo que implica que $S = \frac{n \cdot (n+1)}{2}$.
Por lo tanto, $1+2+3+ \ldots + n = \frac{n \cdot (n+1)}{2}$. $\blacksquare$