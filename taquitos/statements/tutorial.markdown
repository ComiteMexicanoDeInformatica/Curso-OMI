Este problema puede ser resuelto simulando la fila de clientes. Para ello, podemos usar un arreglo donde guardemos el número de tacos que pide cada cliente.

    int v[10000]; //v[i] = número de tacos que ordena la persona i

Como recordaremos, en una *pila* manejamos además un índice que nos indique la posición del último elemento insertado. Sin embargo, como podremos observar, en esta ocasión insertamos y eliminamos elementos desde posiciones distintas: insertamos al final y eliminamos desde el principio, por lo que sonaría razonable manejar dos índices para este problema.

    /**posición del inicio y del fin y número de elementos**/
    int frente = 0, final = -1, cont = 0; 

Cada una de las operaciones descritas en el problema las podemos interpretar en términos de funciones de la siguiente manera:

 - Las operaciones del tipo $1$ $t$ equivale a `insertar` el elemento $t$ al final de la fila.
 - Las operaciones del tipo $2$ equivale a `extraer` el elemento que se encuentra al principio de la fila.
 - Las operaciones del tipo $3$ equivale a encontrar la `longitud` actual de la fila.
 - Las operaciones del tipo $4$ equivale a imprimir la suma de todos los elementos que han sido eliminados.

Ahora veamos cómo implementar cada una de estas funciones. La operación de `insertar` en realidad no difiere mucho de la que implementamos para una pila.

    void insertar(int dato) {
        final = final + 1;
        v[final] = dato;
        cont++;
    }

Para la función de `extraer`, lo único que difiere de la pila es que en esta ocasión modificamos la posición del inicio en lugar de la posición del fin. 

    void extraer() {
        frente = frente + 1;
        cont--;
    }

En el caso de este problema, no debemos preocuparnos de verificar si la cola está vacía o no antes de eliminar un elemento, puesto que en el problema se nos asegura que no se atenderá a una fila vacía. Sin embargo, no debemos pasar esto de alto para futuros programas.

Cabe destacar que la función de `extraer` podemos implementarla también para que nos regrese el elemento que hemos eliminado (y que nos regrese -1, por ejemplo, si está vacía). En esta ocasión, ambas funciones de `extraer` y `consultar` las consideramos por separado.

     int consulta() {
         return v[frente];
     }

Por último, calcular el tamaño de nuestra fila resulta tarea fácil si guardamos el valor en una variable y la actualizamos por cada operación de `insertar` y `extraer`, como hemos hecho en esta ocasión.

    int longitud() {
        return cont;
    }

Una vez implementada estas funciones, ya podemos usarlas para resolver el problema.

    switch (oper) {
        case 1:
            cin >> t;
            fila.insertar(t);
            break;
        case 2:
            venta += fila.consulta();
            fila.extraer();
            break;
        case 3:
            cout << fila.longitud() << endl;
            break;
        case 4:
            cout << venta << endl;
    }

Esta estructura de datos que hemos implementado, como es de suponerse, recibe el nombre de **cola**. Su nombre se debe precisamente a que simula el comportamiento de una cola o fila de espera, como en el problema que acabamos de resolver.
