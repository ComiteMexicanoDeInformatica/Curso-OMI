# Fracción Mixta

Vamos a resolver Fracción Mixta. Las oportunidades son, si ya has encontrado fracciones de este tipo durante la estancia en la escuela ( si no usa Google, no tienes idea de lo que te estás perdiendo) porque a las matemáticas no hay que temerles.

Como siempre, vamos a definir un plan antes de empezar a teclear código:

* Leer el numerador y denominador
* Calcular el valor de $a$ y $b$
* Escribir a pantalla la fracción mixta a pantalla

Después de los dos problemas, no deberás tener dificultad en que nuestro programa esté listo para ller la entrada. Asumiremos que sabes que estás haciendo así que vamos directamente a lo interesante

# Calcular la respuesta

Exactamente como se convierte una fracción impropia a una mixta? Así como lo dice el problema, vamos a usar el mismo denominador, hay sólo dos números que tenemos que encontrar. La descripción dice que son $a$ y $b$, pero no es muy descriptiva. Así es que la llamaremos la parte del número entero y la parte fraccionaria, o el número grande y el número pequeño, ya que en estas andamos.

Aquí hay una forma que nos podría ser útil. Ya debes de conocer que las fracciones y la división son prácticamente la misma cosa. Así es que, escribiendo $n$ dividido entre $d$ es lo mismo que $n/d$. Porque, podríamos tratar a nuestra fracción impropia como el tipo de una pregunta de división. Vamos a intentarlo con los datos ejemplo.

||input
22 6
||output
3 4/6
||input
49 7
||output
7
||end

El segundo caso es obvio - 49 dividido entre 7 da como resultado un 7, el cual es la salida. En éste caso el valor de $a$ debe de corresponder al resultado de la división.

Ahora consideremos el primer caso, 22 dividido entre 6 nos da 3 una vez que se redondea. Una vez más, el '3' corresponde a la primera parte de la salida, pero de donde viene el '4'? Haciendo unas pequeñas pruebas nos puede dar una posible explicación: el número '4' es el **residuo**, la cantidad que queda después que se hace la división. No es difícil darse cuenta de que el cosiente y residuo corresponde exactamente a $a$ u $b$.

Esto es una gran noticia, porque ahora nos queda muy claro que tipo de operaciones debemos de realizar. Para obtener $a$, necesitamos redondear la división de $n/d$. Así es mejor, gracias a la forma en que típicamente la computadora almacena los datos, en la mayoría de los lenguajes (claro que unos se usan para la inteligencia artificial). Cuando le dices a la computadora que divida dos enteros, el resultado se redondea al entero menor. Así que inmediantamente nos damos cuenta de una forma de calcular $a$

a = n / d;  // el cociente!

Puedes usar el nombre de las variables que desees. En éste problema, $a$ y $b$ no son probalemente los mejores nombres que les prodrías dar a tus variables. Sólo recuerda escoger nombres de variables que sean algo significativo.

Ahora, como obtenemos $b$, el residuo? Aquí hay una forma: podemos substraer $ad$. Piensa de esta forma - si tu fracción mixta se ve de la forma 'a b/d', este paso sirve para quitar la parte del número completo, así podemos ver la parte del más pequeño.

b = n - a * b; // el residuo!

Si nos has usado el módulo antes, podrías creer que el operador del módulo es muy confuso que no valga la pena. Al contrario, si lo usas podrás ahorrarte tiempo y esfuerzo. Cuando necesites comprobar si un número es par (verificar si I % 2 == 0), u obtener los últimos dos dígitos de un número (x % 100), o buscar el siguiente múltiplo de 23 después de cierto número (x - (x % 23) + 23), usando el móduo es más rápido (y en ocasiones tener un código más legible).

Bueno es suficiente, regresemos al problema

# Escribiendo la salida

La redacción está muy clara de que hay dos diferentes situaciones de que preocuparnos: si $b$ no es cero, o si lo es. En cada uno de esos casos se espera un tipo diferente de salida.

Veamos los problemas anteriores, la situación se resuelve con el comando **if**

if (b != 0) {
	cout << a << " " << b " " << d << endl;
	// muestra la fracción completa
} else {
	cout << a << endl;
	// o solo el número completo
}

Si, es un poco extraño el código de arriba, pero no hay mucho que decir de esos.

De cualquier manera, una vez que unamos todas las piezas, podríamos tener la solución correcta a la **Fracción Mixta** en nuestras manos