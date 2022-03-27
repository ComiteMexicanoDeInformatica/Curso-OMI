Comparado con otros problemas dentro de este curso, este no es nada complicado, sino que
es una buena oportunidad para práctica y comprender la entrada y salida de datos (Input/Output).

Antes de escribir cualquier línea de código, es nesesario saber lo que necesita el programa.

1. Leer $a$ y $b$
2. Calcular el valor de $a+b$
3. Mostrar el resultado

# Estructura esqueleto del programa

Comencemos con un programa que aún no hace nada.

```
#include <iostream>

int main()
{

	/* Declaramos las variables */

	/* Leer las variables */

	/* Calcular la respuesta */

	/* Mostramos la salida */
}
```

`main` es el punto de entrada del programa, la función que va a ejecutar
la computadora cuando comience a correr el código. `#include <iostream>` es
una instrucción que utilizamos para avisar a la computadora que vamos a
leer y escribir información. (En este caso, `a`, `b` y su suma.)

Obervando el código anterior encontramos muchos comentarios, que son el texto
`/* que se ve así */`. En este caso, los comentarios nos ayudarán a identificar
dónde deberemos ubicar las intrucciones para solucionar el problema. Los
comentarios son ignorados por la computadora; solamente son para ayudarnos
como programadores.

# Declarar y leer variables

Para escribir un programa, necesitamos usar variables. Éstas nos sirven para
guardar información al solucionar un problema.

Antes de usar variables, primero tenemos que avisarle a la computadora
que las necesitamos. A esto le llamamos declarar las variables. Para eso,
tenemos que decir qué vamos a guardar en la variable (como un número entero,
un número con punto decimal, una letra, etc.), y luego darle un nombre.

Por ejemplo, la sentencia

```
int a, b, total;
```

declara tres variables que van a guardar enteros (`int`), con nombre
`a`, `b`, y `total`. Estos nombres los elegimos para que correspondan a los nombres
de las entradas y salidas del problema.

Una vez que declaramos nuestras variables podemos trabajar con ellas, pero nos
falta asignarles un valor. Para leer un valor de la entrada, utilizamos
`std::cin`, como en la siguiente línea.

```
std::cin >> a >> b;
```

Juntemos lo que hemos hecho hasta ahora.

    int main()
    {

    	/* Declaracion de variables */
    	int a, b, total;

    	/* Leer variables */
    	std::cin >> a >> b;

    	/*Calcular la respuesta*/

    	/*Mostramos la salida*/
    }

# Calculando la respuesta

Ahora, calculemos la respuesta. Sumar variables es fácil, simplemente
las juntamos con el operador `+`. Ahora, para guardar ese valor ponemos
del lado izquierdo de `=` el nombre de la variable donde lo guardaremos.

Así, la siguiente línea calcula la suma de `a` y `b` y la guarda en
`total`.

```
total = a + b
```

# Mostar la salida

Ahora, necesitamos imprimir la salida para que la evalúe omegaUp.

`std::cout` toma un valor y lo imprime en la pantalla. Por su parte,
`std::endl` imprime un "Enter" al final.

```
std::cout << total << std::endl;
```

# Programa completo

Juntando todo lo que aprendimos, nos quedamos con la siguiente solución.

    #include <iostream>

    int main()
    {

    	/* Declaramos las variables */
                int a, b, total;

    	/* Leer las variables */
                std:cin >> a >> b;

    	/* Calcular la respuesta */
                total = a + b;

    	/* Mostramos la salida */
                std::cout << total << std::endl;
    }
