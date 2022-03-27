#TRADUCTOR

Primero podríamos decir que es un problema parecido al de "Excursión", buscaremos resolver el problema de una forma similar. Asumimos que Numerical y Enteral son nuestros lenguajes que deseamos traducir y no son negativos.

Entonces tendríamos un arreglo que nos permita buscar directamente en ellos, es decir si el número 5 se traduce a 50, podríamos establecer Traduccion[5] = 50.

Nuestro código para leer en la primera mitad de la entrada podría ser:

```
	for (int i = 0; i <D; i ++)
	{
		// Leer un par de enteros en val_1 y val_2 //
		traducción [val_1] = val_2;
	}
```

Tenemos esto como un enfoque correcto, pero debemos de tener en cuenta ciertas consideraciones:

    1.- ¿Cómo sabes si una traducción existe?
    2.- ¿Cómo se traduce un número negativo?
    3.- ¿Cuántos espacios necesitamos para implementar la salución?

Analizando esto nos podría llevar a una solución de -2,000,000,000 a 2,000,000,000., esto es cerca de 4 billones de espacios en nuestro arreglo. Un INT en C requiere 4 bytes de espacio por lo que llega a 4 x 4 mil millones = 16 mil millones de bytes en total.

Esto requeriría alrededor de 16 GB de memoria para funcionar, demasiado para la mayoría de las computadoras, en lugar de modificar este algoritmo (que sería un proceso lento y doloroso), enfoquemos nuestra antención a que requier menos memoria para trabajar.

## Buscando Respuestas

Simplificando el código para el manejo de entrada en matricez paralelas podríamos tener:

```
	for (int i = 0; i <D; i ++)
	{
	 	<Leer un par de enteros en dict_1 [i] y dict_2 [i]>
	}
```

De este modo utilizamos menos memoria, solo necesitariamos mil valores en cada matriz en el peor de los casos. Ahora tenemos que no es tan obvio como vamos a responder las consultas:

    1.- ¿Cómo podrías resolver este problema sin una computadora?
    2.- Si le dieran un diccionario como se encuentra en la entrada y le preguntan, ¿A qué traduce el 55?

Hay un enfoque bastante obvio que podría tomar, puede mirar hacia abajo todas las entradas en el lado izquierdo y ver si alguno de esos números es 55.

Con el siguiente código usamos la idea anterior para buscar en la matriz dict_1[] un valor determinado:

```
	<Leer un entero en la palabra_actual>
	for(int j = 0; j <D; j ++)
	{
		if (dict_1 [j] == palabra_actual)
		{
			<Output dict_2 [j]>
		}
	}
```

Ahora tenemos que responder lo siguiente: ¿Qué pasa si no hay una traducción? en este momento nuestro programa no debe de imprimir nada, pero la declarción del problema requiere que imprima la cadena "C?".

En este punto tenemos dos enfoques posibles:

1.- Use una variable para realizar un seguimiento de si hemos encontrado la respuesta. Por ejemplo, podríamos tener alguna variable, encontrada, que esta configurada en 0, mientras que no hemos encontrado una respuesta y establecidad en 1 una vez que tenemos.

```
	<Leer un entero en palabra_actual>
	int found = 0;
	for (int j = 0; j <D; j ++)
	{
		if (dict_1 [j] == palabra_actual)
		{
			<Salida dict_2 [j]> found = 1;
		}
	}
	if (! found)
	{
	 	<Output "C?">
	}
```

Cuando usamos el (!found) se dice que (found == 0).

2.- Manipulando el flujo de bucle. Utiliznando una declaración de interrupciones colocada apropiadamente, podemos hacer que el programa salga del ciclo tan pronto como encuentra la respuesta. Si hace todo el camino a través de las iteraciones D del ciclo, significa que ha verificado todo el diccionario sin ningún resultado.

```
	<Leer un entero en current_word>
	for(int j = 0; j <D; j ++)
	{
		if (dict_1 [j] == palabra_actual)
		{
			<Output dict_2 [j]> break;
		}
		if (j == D-1)
		{
		// hemos buscado en toda la lista <Output "C?">
		}
	}
```

De estas dos opciones, recomendaría la primera. Usando un nombre de variable apropiado, es mucho más fácil saber qué está sucediendo con el primer método. Además, en situaciones más complicadas en las que introducimos otras sentencias break y continue en el ciclo, es posible que el segundo método no funcione de la manera que esperamos.
