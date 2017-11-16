Para resolver el problema, antes debemos introducir el concepto de combinaciones. 

Recordemos, cuando vimos el tema de permutaciones, que si tenemos un conjunto de $n$ elementos y queremos contar el número de permutaciones con $r$ elementos de este conjunto, podemos calcularlo fácilmente usando la siguiente fórmula

$$_nP_r=\frac{n!}{(n-r)!}$$

Sin embargo, a diferencia de una permutación, en las combinaciones el orden es irrelevante, de modo que si dos sub-arreglos tienen los mismos elementos, entonces se consideran iguales. Por ejemplo, si tenemos el conjunto $\{1,2,3\}$, todas las posibles permutaciones con 2 elementos son las siguientes:

$$\{1,2\}\:\:\:\:\:\:\:\:\{2,1\}$$
$$\{1,3\}\:\:\:\:\:\:\:\:\{3,1\}$$
$$\{2,3\}\:\:\:\:\:\:\:\:\{3,2\}$$

mientras que todos los posibles subconjuntos (las combinaciones) de 2 elementos son las siguientes

$$\{1,2\}$$
$$\{1,3\}$$
$$\{2,3\}$$

Calcular el número de combinaciones no es difícil, pues basta con observar que para cada sub-arreglo junto con sus posibles permutaciones, solo consideramos uno de ellos para las combinaciones. En el ejemplo anterior, de las permutaciones $\{1,2\}$ y $\{2,1\}$ obtenemos una combinación. De esto se deduce que la fórmula para las combinaciones es la siguiente

$$_nC_r=\frac{_nP_r}{_rP_r}=\frac{n!}{r!(n-r)!}$$

Otra forma de denotarlo (y además es la más usada) es la siguiente

$$_nC_r=\binom{n}{r}$$

Lo interesante de esto es que, si calculamos todos los números de combinaciones de un conjunto de $n$ elementos, obtenemos los coeficientes del desarrollo binomial de $(x+y)^n$. Por ejemplo

$$(x+y)^2=x^2+2xy+y^2=\binom{2}{0}x^2+\binom{2}{1}xy+\binom{2}{2}y^2$$

De manera más general

$$(x+y)^n=\binom{n}{0}x^n+...+\binom{n}{r}x^{n-r}y^r+...+\binom{n}{n}y^n$$

Es por ello que a estos números se les conoce también como **coeficientes binomiales**. Esto en teoría debería solucionar el problema. Solo hay que tener en cuenta las consideraciones del problema

    /**Los casos n = 0 y n = 1 los consideramos aparte**/
    if (n == 0)
        cout << "1";
    else if (n == 1)
        cout << "x+y";
    else {
        cout << "x^" << n << "+";
        for (int i = n - 1; i > 0; i--) {
            cout << CoefBinom[n][i] << "x";
            if (i != 1) //Verificamos que el exponente de x no sea 1
                cout << "^" << i;
            cout << "y";
            if (n - i != 1) //Verificamos que el exponente de y no sea 1
                cout << "^" << n - i;
            cout << "+";
        }
        cout << "y^" << n;
    }

Sin embargo, cabe mencionar que el problema con la fórmula anterior es que, al hacer uso de *factoriales*, el resultado podría desbordarse antes de tiempo. Es por ello que tenemos las siguientes identidades

$$\binom{n}{0}=\binom{n}{n}=1$$
$$\binom{n}{r}=\binom{n-1}{r-1}+\binom{n-1}{r}$$

La última identidad se conoce como **Identidad de Pascal**, la cual puede ser visualizada de la siguiente manera

![Triángulo de Pascal](Pascal.png)

Y gracias a ella, podemos calcular los coeficientes binomiales sin temer por que ocurra un desbordamiento. (No olvidemos usar el tipo **long long** para guardar los valores).

    int n;
    long long CoefBinom[51][51];
    cin >> n;

    /**Inicializamos los coeficientes binomiales usando
    la Identidad de Pascal**/
    for (int i = 0; i <= 50; i++) {
        CoefBinom[i][0] = 1;
        CoefBinom[i][i] = 1;
        for (int j = 1; j < i; j++)
            CoefBinom[i][j] = CoefBinom[i - 1][j - 1] + CoefBinom[i - 1][j];
    }
