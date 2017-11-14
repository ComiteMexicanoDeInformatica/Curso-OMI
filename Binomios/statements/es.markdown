# Descripción

Un binomio es una expresión algebraica compuesta por dos términos distintos, por ejemplo, $x+y$ es un binomio. Cuando elevamos un binomio a una potencia $n$, donde $n$ es un entero no negativo, obtenemos diferentes expresiones algebraicas dependiendo del valor de $n$. Por ejemplo, para $n=1,2,3$ obtenemos las siguientes expresiones: $$(x+y)^1=x+y$$ $$(x+y)^2=x^2+2xy+y^2$$ $$(x+y)^3=x^3+3x^2y+3xy^2+y^3$$

Tu tarea para este problema es, que dado el exponente $n$, encuentres el desarrollo de $(x+y)^n$ tomando en cuenta las siguientes consideraciones:

 - Si el exponente de alguna de las variables es $0$, entonces omitimos la variable, de modo que $x^0y$ lo escribimos como $y$.
 - Si el exponente de alguna de las variables es $1$, entonces omitimos el exponente, de modo que $x^1$ lo escribimos como $x$.
 - Si el coeficiente del término es $1$, entonces lo omitimos, de manera que $1x$ lo escribimos como $x$.

# Entrada

Un entero $n$, el exponente a elevar del binomio $x+y$.

# Salida

La expansión del binomio $(x+y)^n$. Los términos deberán imprimirse en una sola línea sin espacios y tomando en cuenta las anteriores consideraciones. Los exponentes se deberán imprimir anteponiendo el carácter `^`. 

# Ejemplo

||input
1
||output
x+y
||input
2
||output
x^2+2xy+y^2
||end

# Límites

* $0 \leq n \leq 50$
* Para la solución deberás usar un **long long int**.
