Este problema puede ser resuelto simulando la fila de clientes. Para ello, podemos usar un arreglo donde guardemos el número de tacos que pide cada cliente.

    int cola[10000]; //cola[i] = número de tacos que ordena la persona i

Como recordaremos, en una *pila* manejamos además un índice que nos indique la posición del último elemento insertado. Sin embargo, como podremos observar, en esta ocasión insertamos y eliminamos elementos desde posiciones distintas: insertamos al final y eliminamos desde el principio, por lo que sonaría razonable manejar dos índices para este problema.

    int inicio, fin; //posición del primer y del último elemento

Cada una de las operaciones las podemos interpretar de la siguiente manera:

 - Las operaciones del tipo $1$ $t$ equivale a insertar el elemento $t$ al final de la cola.
 - Las operaciones del tipo $2$ equivale a eliminar el elemento que se encuentra al principio de la cola.
 - Las operaciones del tipo $3$ equivale a encontrar la longitud actual de la cola.
 - Las operaciones del tipo $4$ equivale a imprimir la suma de todos los elementos que han sido eliminados.

Ahora veamos cómo implementar cada una de estas funciones. La operación de `agregar` en realidad no difiere mucho de la que implementamos para una pila.

    void agregar(int valor) {
        cola[fin++] = valor;
    }

Para la función de `eliminar`, lo único que difiere de la pila es que en esta ocasión modificamos la posición del inicio, en lugar de la posición del fin. 

Para fines de este problema, haremos que nuestra función de eliminar retorne también el elemento (pues lo necesitaremos también para la operación $4$), y -1 en caso de que la cola esté vacía.

    int eliminar() {
        if (inicio == fin) //La cola esta vacia
            return -1;
        else //Retornamos el valor y despues actualizamos el inicio
            return cola[inicio++];
    }

En realidad la parte en que verificamos si la cola está vacía no es necesaria para este problema, puesto que se nos asegura que nunca se atenderá a una fila vacía. Sin embargo, es bueno que se tome esto en consideración para futuros problemas.

Para calcular el tamaño de nuestra cola, no es difícil darse cuenta que son $fin-inicio$ elementos.

    int longitud() {
        return fin - inicio;
    }

Esta estructura de datos que hemos implementado, como es de suponerse, recibe el nombre de **cola**. Una vez implementada, ya podemos usarla para resolver nuestro problema.

    int contador = 0;
    switch (operacion) {
        case 1:
            cin >> t;
            agregar(t);
            break;
        case 2:
            contador += eliminar();
            break;
        case 3:
            cout << longitud() << "\n";
            break;
        case 4:
            cout << contador << "\n";
    }
