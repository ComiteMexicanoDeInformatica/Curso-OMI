# Insertion Sort Interactive

Al igual que los últimos problemas **este es un problema interactivo**, por lo que no es necesario leer la entrada ni imprimir la salida, sino implementar el código de la función `ordenar(n)` donde $n$ es el tamaño de la lista. Recuerda incluir la declaración de la libreria de cabezera.

El evaluador buscará en tu código esta función y la llamará con el número $n$ como parámetro. Tu implementación deberá llamar las funciones `guardar(int i)` la cual retorna y respalda el entero que se encuentra en esa posición, `obtener(int i)` la cual únicamente retorna el valor que se encuentra en esa posición, `desplazar(int i)` pasa a la posición $i+1$ el valor almacenado en la posición $i$) e `insertar(int i)` almacena en la posición indicada en el parámetro, el último valor respaldado por la función `guardar`.


	#include "ordenador.h"
	/**
	int  guardar(int indice)
	void obtener(int indice)
	bool desplazar(int indice)
	void insertar(int indice)
	**/
	void ordenar(int n)  //debe llamarse igual 


# Ejemplo

A continuación se muestran un ejemplo sencillo de como deben funcionar con el algoritmo de inserción para una lista de 3 elementos { 2, 3, 1 } 

|| input

Función llamada

|| output

Valor devuelto

|| description

Descripción

|| input

guardar(2)

|| output

-

|| description

El tamaño del arreglo es de 3.
|| input
guardar(1)

|| output

3

|| description
Tu función pregunta que número hay en la posición 1 y el Evaluador lo respalda.
|| input

obtener(0)

|| output

2

|| description

Tu función pregunta que número hay en la posición 0 .
|| input

guardar(2)

|| output

1

|| description
Tu función pregunta que número hay en la posición 2 y el Evaluador lo respalda.
|| input

obtener(1)

|| output

3

|| description

Tu función pregunta que número hay en la posición 1 .
|| input

desplazar(1)

|| output



|| description
Tu función solicita mover el 3 almacenado en la posición 1 a la posición 2
|| input

obtener(0)

|| output

2

|| description

Tu función pregunta que número hay en la posición 0 .
|| input

desplazar(0)

|| output



|| description
Tu función solicita mover el 2 almacenado en la posición 0 a la posición 1
|| input

insertar(0)

|| output



|| description
Tu función solicita almacenar el valor 1 en la posición 0 (el último valor almacenado por la función $guardar$) para quedar ordenada.
|| end


Para ver animaciones de otros ejemplos que te permitan entender mejor este método, puedes consultar:

$ https://es.khanacademy.org/computing/computer-science/algorithms/insertion-sort/a/insertion-sort $

$ https://es.wikipedia.org/wiki/Ordenamiento_por_inserci%C3%B3n $


# Descripción de la solución

Este problema se trata de ordenar un arreglo con el método de ordenamiento por inserción, a través de tu función `ordenar(n)` que deberá recorrer la lista. 

	
	void ordenar(int n) {   //debe llamarse igual
		int t, y;
		for(int x=0; x<n; x++) {

Un ordenamiento por inserción hace lo siguiente:

1.-Guardar el valor $n_i$ como valor a acomodar.

		
		t=guardar(x);


2.-Para cada valor entre las posiciones $i-1$ y $0$ obtener el valor almacenado en cada posición mientras sean mayores que el valor a acomodar y mientras aún no se llegue al inicio de la lista (posición $0$), para desplazar cada valor a la posición contigua anterior.
	
		y=x-1;
		while(y>=0 && obtener(y)>t) {
			desplazar(y);
			y--;
		}

3.-Una vez que el valor a acomodar encuentra un valor igual o menor, insertar el valor a acomodar en la posición que ocupaba el último valor desplazado.

		insertar(y+1);
		}
	}

Este proceso lo hacemos desde $i=1$ hasta $i=n-1$ , podemos notar que después de hacerlo la primera vez, se nos garantiza que los dos primeros elementos de la lista $n_0$  y  $n_1$ se encuentran ordenados entre sí, al hacerlo de nuevo para $i=2$ se habrán ordenado entre sí los elementos de las $3$ primeras posiciones de la lista, por lo que despues de $i$ veces se habrán ordenado entre sí los $i+1$ primeros elementos de la lista. Al hacer este proceso $n-1$ veces estaremos garantizando que los $n$ números estan ordenados (el arreglo totalmente ordenado). Como este proceso recorre $n$ veces el arreglo (de tamaño $n$) podemos notar que su complejidad es $Ω(n^2)$. 

