#Resolviendo QuickSort

Para poder resolver quicksort hay que comprender como trabaja el algoritmo:

 - Elegir un elemento a ordenar, al que llamaremos pivote.

 - Reacomodaremos los elementos de la lista a cada lado del pivote, de tal forma que los elementos menores al pivote quede de un lado y los elementos mayores al pivote queden al otro lado. Los números iguales podemos acomodarlos a la derecha o a la izquierda del pivote (según decidamos).

 - La lista queda separada en dos sublistas, una formada por los elemento menor, y otra por los elementos mayores al pivote.

 - Este proceso lo repetiremos de forma recursiva para cada una de las sublistas mientras estas contengan más de un elemento. Una vez terminado este proceso los elementos deberán de quedar ordenados.

Al ser un programa interactivo nos tocara programar la función encargada de realizar la partición y reacomodo de los elemento.

En el programa principal encontraremos dos funciones que nos ayudaran a resolver este problema:


 - `int ElementoEnPosicion(int i)`: Obtenemos el número que se encentra en la posición $i$.
 - `int Intercambiar(int i, int j)`: Intercambia el elemento $i$ por el elemento $j$.

Conociendo el funcionamiento de quicksort y las funciones de apoyo estamos listos para resolver el problema.

#Solución

Para resolver el problema necesitamos elegir un pivote y conocer el valor que contiene dicho elemento esto lo obtenemos con la función `int ElementoEnPosicion(int i)` quedando la declaración de las variables de la siguiente manera:

    int HacerParticion(int n){ 
        int piv = ElementoEnPosicion(n - 1); //Obtenemos el valor para el pivote en la posicion n-1
        int i = -1, j; 


Una vez conocido valor y posición del pivote, podemos realizar el reordenamiento de los elementos, creando dos sublistas una que contiene los elementos menores al pivote y otra con los elemento mayores.

    for (j = 0; j < n - 1; j++)
        if (ElementoEnPosicion(j) <= piv)
            Intercambiar(++i, j);

    Intercambiar(i + 1, n - 1);

La función  `int Intercambiar(int i, int j) ` realizara el ordenamiento de los elementos, enviando los elemento menores a una sublista y a los mayores ala otra sublista.

Una vez realizado esto tendríamos nuestra función completo y esta quedaría de la siguiente manera:   

    int HacerParticion(int n) {

        int piv = ElementoEnPosicion(n - 1);
        int i = -1, j;
        for (j = 0; j < n - 1; j++)
            if (ElementoEnPosicion(j) <= piv)
                Intercambiar(++i, j);
        Intercambiar(i + 1, n - 1);
        return i + 1;
    }

Implementado los siguiente y ejecutado nuestro arreglo de elementos deberia de quedar ordenado.