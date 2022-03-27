#Soluci�n

Sea $x$ el n�mero que pens� OmegaUp. De modo que la primera idea intuitiva que surge al leer el problema, es preguntar si $i$ es el n�mero que buscamos, para todo $i \in [a,b]$. Pero esta soluci�n va a realizar $b-a+1$ iteraciones, y dados los l�mites de $a$ y $b$, esta soluci�n no corre en tiempo.
Ya que no podemos hacer m�s de $log(b-a+1)$ iteraciones, tenemos que pensar en una soluci�n que este acotada por $log(b-a+1)$ iteraciones. Una observaci�n, es que el algoritmo de b�squeda binaria te dice si un elemento esta en un rango ordenado en tiempo $log(b_0-a_0+1)$ donde $a_0$ y $b_0$ son el inicio y fin del rango respectivamente. Por lo tanto, basta con aplicar una b�squeda binaria sobre $[a,b]$.

En esta peque�a imagen podemos ver el funcionamiento de una busqueda binaria comparada contra una lineal/secuencial.
![Binary](binary.gif)

Low= Limite inferior

Mid= Nuestra mitad

High= Limite superior

Como puedes observar,la busqueda binaria se basa en pararse en la mitad de nuestro espacio de busqueda ( osea la mitad) y llamar la funci�n pista.
Si nos dice que es mayor , lo que haremos es que nuestra Mitad ahora es igual a nuestro limite inferior, de lo contrario , nuestra mitad toma el valor del limite superior.(La mitad la calculamos como limite inferior + (limite superior-limite inferior)/2).

Asi sucesivamente hasta encontrar el resultado.
