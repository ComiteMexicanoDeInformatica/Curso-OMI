#Solución

Sea $x$ el número que pensó OmegaUp. De modo que la primera idea intuitiva que surge al leer el problema, es preguntar si $i$ es el número que buscamos, para todo $i \in [a,b]$. Pero esta solución va a realizar $b-a+1$ iteraciones, y dados los límites de $a$ y $b$, esta solución no corre en tiempo.
Ya que no podemos hacer más de $log(b-a+1)$ iteraciones, tenemos que pensar en una solución que este acotada por $log(b-a+1)$ iteraciones. Una observación, es que el algoritmo de búsqueda binaria te dice si un elemento esta en un rango ordenado en tiempo $log(b_0-a_0+1)$ donde $a_0$ y $b_0$ son el inicio y fin del rango respectivamente. Por lo tanto, basta con aplicar una búsqueda binaria sobre $[a,b]$.

En esta pequeña imagen podemos ver el funcionamiento de  una busqueda binaria comparada contra una lineal/secuencial.
![Binary](binary.gif)

Low= Limite inferior

Mid= Nuestra mitad

High= Limite superior

Como puedes observar,la busqueda binaria se basa en pararse en la mitad de nuestro espacio de  busqueda ( osea la mitad) y llamar la función pista.
Si nos dice que es mayor , lo que haremos es que nuestra Mitad ahora es igual a nuestro limite inferior, de lo contrario ,  nuestra mitad toma el valor del limite superior.(La mitad la calculamos como limite inferior + (limite superior-limite inferior)/2).

Asi sucesivamente hasta encontrar el resultado.
