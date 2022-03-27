A continuación vamos a resolver el problema _Simplificar Fracciones_. Como parte de lo que tienes que saber acerca de este problema, está toda la teoría detrás del _Algoritmo de Euclides_. Para ello, [aquí][1] tienes una fuente de información para ello.

Para evitar errores y pérdida de tiempo, es importante planificar ¿Qué tiene que hacer nuestro programa?

1.- Leer cuantas y quiénes son las fracciones que vamos a simplificar.

2.- Aplicar el _Algoritmo de Euclides_ a los numeradores y denominadores de cada una de esas fracciones que se nos proporcionan.

3.- Aplicar la regla de simplificación que se nos dá.

4.- Mostrar el resultado de la simplificación en pantalla.

Lo anterior suena como un plan, ¿no?. Empecemos.

ESQUELETO DEL CÓDIGO

```
#include <iostream>

 / * Declarar variables * /

 int main () {
	 / * Leer la entrada * /

	 / * Calcular la respuesta * /

	 / * Escribe la salida * /

	 return 0;
 }
```

Así como hemos hecho en ejercicios anteriores, utilizaremos el mismo esqueleto con el que ya estamos familiarizados.

#Solución

Al igual que antes, declaramos la libreria para utilizar los comandos de Entrada y Salida de datos en C++, así como la identificación estandarizada de su clase contenedora std.

    #include <iostream>
    using namespace std;

Antes de que podamos leer algo, necesitaremos variables para almacenar los datos. Vamos a declarar algunas de ellos ahora.

    int N;
    long long a,b,MCD;

Recuerde, no importa cómo nombre sus variables, siempre y cuando sus nombres le recuerden lo que representan. En este caso, se denominaron las variables tal y cual son enunciadas en el problema. Adicionalmente, observe que se declararon las variables de acuerdo a los límites mostrados en el problema. Es decir, para N no hay ningun problema y su tamaño cabe dentro de una variable tipo $int$, pero las variables $a$, $b$ y $MCD$ tienen que ser de tipo $long$ $long$ para que pueda guardarse un número de hasta tamaño $2^{63}$. Éstas dós ultimas observaciones se tomarán en cuenta de la misma manera para la implementación de los siguientes códigos.

La idea general de cómo vamos a resolver el problema se divide en dos partes. En la primera nos concentraremos únicamente en el _Algoritmo de Euclides_ y en la segunda parte en dar entrada a los datos, aplicar la regla que se nos da y mostrar los resultados.

#Implementación del Algoritmo de Euclides

De acuerdo con la teoría mostrada en la fuente que te proporcionamos arriba ([esta][1]), una forma fácil de ver el Algoritmo de Euclides es:

$$MCD(a,b)=MCD(b,r),$$ dónde $r=$residuo de dividir $\dfrac{a}{b}$

Es decir, el MCD de dos números es igual al MCD del residuo que se obtiene de dividir esos dos mismos números **y** uno de esos números . Pero te preguntarás, _¿de qué nos sirve ésto?_. La respuesta es sencilla. Al cumplirse la anterior igualdad, el MCD original que se estaba buscando se reduce al MCD dos números dónde uno de ellos (en este caso $r$) es siempre más pequeño de los dos números originales. Por lo tanto, si aplicamos cíclicamente dicha igualdad hasta que $r$ sea $0$, entonces habremos encontrado una división exacta, y en consecuencia, habremos encontrado el MCD que estabamos buscando originalmente.

En consecuencia a lo anterior, implementaremos el _Algoritmo de Euclides_ usando la anterior igualdad, y por simplicidad se implementará utilizando recursividad. Se creo una funcíón llamada MCD cuyo código quedó cómo se muestra a continuación.

```
long long mcd(long long a, long long b)
{
    if(b == 0) return a;
    return mcd(a,a%b);
}
```

Observa que en el anterior código el caso base es cuando $b=0$, es decir, cuando se encuentra un residuo igual a 0. Con lo cual se regresa el valor de $a$ en ese momento, es decir, el MCD en cuestión.

#Implementación de la Regla de simplificación

Ésta parte es relativamente más sencilla que la anterior. Para este paso hay que leer cíclicamente las $N$ entradas del problema y los respectivos numeradores y denominadores. Para ello leeremos primero leeremos quién es $N$ y despues, dentro de de un $for$, leeremos un numerador y un denominador, llamaremos a la funcion MCD, dividiremos el numerador y denominador leídos entre el MCD obtenido con ellos y finalmente mostramos el resultado de esas dos divisiones. El código queda de la siguiente forma.

```
cin >> N;

    for(int i=0; i<n; i++){
        cin >> a >> b;
        MCD = mcd(a,b);
        a=a/MCD;
        b=b/MCD;
        cout << a << " " << b << endl;
    }
```

De ésta forma, hemos conseguido lo pedido en el problema. Este es un ejemplo sencillo de la aplicación del _Algortimo de Euclides_, pero recuerda que siempre puedes usar el proceso que discutimos anteriormente para implementar futuras soluciones para otros problemas. Y para finalizar esta explicación, te diremos un secreto. El algoritmo de euclides ya se encuentra implementado en una de las librerias disponibles en $C++$ las cuales podrás hacer uso durante la Olimpiada Mexicana de Informática. La función se llama **gcd() , la cual se encuentra en la libreria **algorithm** del conjunto de librerias de STL. Para poder usarla recuerda que tienes que incluir dicha librería (**#include <algorithm>**) y llamar a la función **gcd() en vez de la función MCD que creamos.
