# a + b 
Escribir el programa para solucionar el problema a + b. Comparado con otros problemas dentro de este curso, no es nada complicado, siendo esta una buena oportunidad para practica y comprender las entradas y salida de datos (Input/Output). 

Antes de escribir cualquier linea de codigo, es nesesario saber lo que necesita el programa.

	-Leer lo numero enteros a y b
	-Calcular el valor de a+b
	-Mostrar el resultado de a+b

# Estructura eskeleto del programa

A continuación abriremos un nuevo archivo y escribiremos el siguiente programa este no realizara nada todavia.
 
C++

	#include <iostream>

	void main()
	{

		/*Declaramos las variables*/

		/*Leer las variables*/

		/*Calcular la respuesta*/

		/*Mostramos la salida*/
	}


Obervando el codigo ejemplo anterior encontramos muchos comentarios (/\*comentario*/), los cuales nos ayudaran a identificar donde deberemos ubicar las intrucciones para solucionar el problema.


# Declarar y leer variables

Para poder interactuar dentro de un programa es nesecario tener variables las cuales contienen la información para solucionar un problema. 

Esta accion la podemos definir en dos partes "Declaración" y/o "Lectura" de los variables.

El primer concepto "Declaracion" consiste en que nuestro lenguaje de programación, conosca los datos con que tipo de dato trabajara (Entero, Real, ...), cuantas variables utilizaremos y asignaremos un nombre representativo:

```
int a,b,total;
```

En el codigo anterior podemos ver que tenemos tres variables $a$, $b$ y $total$, las cuales representarian los siguiente; $a$ y $b$ serian los dos valores de con los que vamos a realizar la suma, mientras que $total$ es donde guardaremos el resultado de la suma. En caso de declara mas de una variable etas estaran separadas por "," como es el caso de este
ejemplo.

Una vez que nuestro lenaguje ya conoce nuestras variables podemos trabajar con ellas,pero, ¿Qué valor continen en este momento?, la respuesta es ninguno no hemos asignado algun valor, entonces ¿Cómo le asignamos un valor?

```
std::cin >> a >> b;
```

La asignación de valor a las variables las realizaremos con la instruccion ```std::cin```
la cual nos permite darle un valor a las variables que necesitamos.

A continuación actualizaremos nuestra estructura esqueleto en la parte asignada con el comentario:
 
C++

	void main()
	{

		/*Declaracion de variables*/
		int a,b,total;

		/*Leer variables*/
		std::cin >> a >> b;

		/*Calcular la respuesta*/

		/*Mostramos la salida*/
	}

Una vez actualizado nuestro esqueleto realizaremos una prueba rapida, compilamos el código y lo guardaremos con el nombre addin.txt en el mismo directorio.

#Calculando la respuesta

Problamente la parte mas fácil del problema de sumar dos numero es calcular el resultado, la suma es una des las operaciones fundamentales dentro de la computación a pesar de que son faciles de calcular.

Actualizaremos nuestra estructura esqueleto en la parte "Calcular la respuesta" con la siguiente instrucción:

```
total = a + b
```

Que realiza este fragmento de código anterior  a la variables $total$ le asignaremos el resultado de sumar las variables $a + b$

#Mostar la salida

La salida de un programa es el resultado que nos da nuestra operación y esta nos sirve para verificar si nuetro programa esta funcionando de manera correcta.

```
std::cout << total << std::endl;
```

Para obtener la salida de nuestro programa utilizaremos la instrucción ```std::cout``` la cual nos devuelve el valor de una variable.

#Programa completo

Ralizando la ultima actualizanción a nuestra estructua esqueleto tendriamos los siguiente: 

C++

	#include <iostream>

	void main()
	{

		/*Declaramos las variables*/
                int a,b,total;

		/*Leer las variables*/
                std:cin >> a >> b;

		/*Calcular la respuesta*/
                total = a + b;

		/*Mostramos la salida*/
                std::cout<< total << std::endl;
	}

De esta manera ya tenemos nuestro programa a+b completo y funcionado para el 100% de los casos. Las intrucciones descritas dentro de este tutorial funcionan para todos los programas en los cuales requiramos de entrda y salida de datos. 

