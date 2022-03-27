Para nuestra fortuna, todo el contenido teórico que necesitamos para resolver este problema se nos proporciona en el mismo. Ahora bien, partiendo de la simbología que se maneja en el problema, se nos da una congruencia de la forma:
$$A \equiv B \mod C$$
En el problema se nos va a proporcionar quién es $B$ y $C$, y además se nos dará una lista de números los cuales tendremos que analizar para ver cuántos de ellos son congruentes con B módulo C. La idea general para resolver lo anterior, es obtener primeramente cuánto es $BmodC$ y después comparar dicho valor con cada uno de N números que se nos dará en la lista.

Para evitar errores y pérdida de tiempo, retomemos nuestra receta de cocina que hemos utilizado en problemas anteriores pero aplicado al caso particular de este problema.

1.- Leer quiénes son $B$ y $C$.

2.- Obtener el valor de $BmodC$.

3.- Leer la lista de $N$ números, compararlo con el valor de $BmodC$ e ir contando cuántos de éstos son iguales.

4.- Mostrar el resultado del conteo en pantalla.

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

    int a, b, c, n, aux, contador=0;

Recuerde, no importa cómo nombre sus variables, siempre y cuando sus nombres le recuerden lo que representan. En este caso, se denominaron las variables tal y cual son enunciadas en el problema pero en minúsculas. Adicionalmente, observe que de acuerdo a los límites mostrados en el problema, basta con declarar las variables como simples enteros $int$. Por otra parte, se agregaron dos variables extras las cuales son $aux$ y $contador$. La variable $aux$ es una variable auxiliar que nos va a servir para guardar el valor de $BmodC$, y la variable $contador$ irá tomando a cuenta de cuántos números son congruentes con $BmodC$.

Entonces, el siguiente paso es leer los valores de $B$, $C$ y $N$, y de manera inmediata obtener el valor de $BmodC$ para asignarlo a la variable $aux$.

    cin >> b >> c >> n;
    aux=b%c;

Posteriormente, iremos leyendo los $N$ números del teclado y a su vez iremos comparándolos con el valor guardado de la variable $aux$. Lo anterior lo haremos con un ciclo $for$ y una condicional $if$ dentro de él. Si el módulo del valor leído es igual a $aux$, entonces el contador se aumentará en 1. Al final, fuera del $for$ se imprimirá en pantalla el valor de la variable $contador$.

```
for(int i=0;i<n;i++){
    cin >> a;
    if(a%c == aux){
        contador++;
    }
}
cout << contador;
```

Finalmente, con lo anterior hemos resuelto satisfactoriamente el problema en cuestión. Esperamos te haya servido ésta explicación. ¡Sigue entrenando!.
