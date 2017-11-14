Este problema puede ser resuelto simulando la fila de clientes. Para ello, podemos usar un arreglo donde guardemos el número de tacos que pide cada cliente.

    int v[10000]; //v[i] = número de tacos que ordena la persona i

Como recordaremos, en una *pila* manejamos además un índice que nos indique la posición del último elemento insertado. Sin embargo, como podremos observar, en esta ocasión insertamos y eliminamos elementos desde posiciones distintas: insertamos al final y eliminamos desde el principio, por lo que sonaría razonable manejar dos índices para este problema.

    /**posición del inicio y fin de la cola y número de elementos**/
    int frente = 0, final = -1, cont = 0; 

Cada una de las operaciones las podemos interpretar de la siguiente manera:

 - Las operaciones del tipo $1$ $t$ equivale a insertar el elemento $t$ al final de la cola.
 - Las operaciones del tipo $2$ equivale a eliminar el elemento que se encuentra al principio de la cola.
 - Las operaciones del tipo $3$ equivale a encontrar la longitud actual de la cola.
 - Las operaciones del tipo $4$ equivale a imprimir la suma de todos los elementos que han sido eliminados.

Ahora veamos cómo implementar cada una de estas funciones. La operación de `insertar` en realidad no difiere mucho de la que implementamos para una pila.

    void insertar(int dato) {
        final = final + 1;
        v[final] = dato;
        cont++;
    }

Para la función de `extraer`, lo único que difiere de la pila es que en esta ocasión modificamos la posición del inicio, en lugar de la posición del fin. 

    void extraer() {
        frente = frente + 1;
        cont--;
    }

En el caso de este problema, no debemos preocuparnos de verificar si la cola está vacía o no antes de eliminar un elemento, puesto que en el problema se nos asegura que no se atenderá a una fila vacía. Sin embargo, no debemos pasar esto de alto para futuros programas.

La función de `extraer` podemos implementarla también para que nos regrese el elemento que hemos eliminado (y -1 por ejemplo si está vacía la cola). En esta ocasión, ambas funciones de extraer y consultar las consideraremos por separado.

     int consulta() {
         return v[frente];
     }

Calcular el tamaño de nuestra cola resulta tarea fácil si guardamos el valor en una respuesta y lo actualizamos por cada operación de `insertar` y `extraer`, como hemos hecho en esta ocasión.

    int longitud() {
        return cont;
    }

Esta estructura de datos que hemos implementado, como es de suponerse, recibe el nombre de **cola**. Una vez implementada, ya podemos usarla para resolver nuestro problema.

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
