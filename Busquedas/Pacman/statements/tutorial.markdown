El problema es interactivo, por lo que lo único que necesita tener nuestra solución es una función `int buscaComida(int)` que nos dice la posición en la que nuestro amigo PacMan comenzará en el mundo y debe regresar el mínimo número de pasos hasta donde está la comida (si es que encuentra, ya que puede no haber).

El mundo es una cuadrícula de máximo $100 \times 100$ pero nosotros no recibimos las dimensiones, todo lo que tenemos es la función `esPosibleAvanzar(int, char)`, a la que le damos la dirección a la que nos queremos mover y nos dará el número de casilla que se encuentra en esa dirección o -1 si no existe ninguna.

Puede no existir una casilla en esa dirección ya sea por que nos encontramos en los límites del mapa o por que está bloqueado el camino, lo que significa que los caminos hasta la comida pueden no ser el línea recta.

Una opción podría ser realizar todos los posibles recorridos y al final retornar el tamaño del de menor longitud que hayamos encontrado, pero tenemos una condición más y es que el mundo está rodeado de fantasmas que nos robarán la mitad de nuestros puntos si nos alejamos del punto inicial más de lo necesario.

La forma de solucionar el problema y que además nos garantiza encontrar la ruta más corta, es utilizar una búsqueda en amplitud. Si imaginamos los recorridos como un árbol, la búsqueda en amplitud nos hace un recorrido por niveles. Es decir que no revisaremos un nodo al que llegamos con $N$ pasos sin antes haber revisado todos los nodos a los que llegamos con $N-1$ pasos.

# Búsqueda en amplitud

Una búsqueda en amplitud se realiza utilizando una cola, se revisa el nodo actual, y si no es lo que estamos buscando, todos sus hijos se agregan al final de la cola, esto nos garantiza que se revisarán "por niveles".

En el problema nos dan una posición inicial. Lo que se hace es agregarla a una cola y a partir de ahí revisar si hay comida en ella y si no, agregar a la cola todas las posibles casillas a las que nos podamos mover haciendo uso de la funcion `esPosibleAvanzar(int, char)` con cada una de las 4 posiciones ('n', 's', 'e', 'o'). Además es importante, una vez que añadimos un nodo a la cola, marcarlo como visitado, para si posteriormente encontramos otra forma de llegar a él, ignorarla. Este paso es importante por que de lo contrario se pueden crear ciclos en la ruta.

También es necesario almacenar el número de pasos necesarios para llegar a una posición desde la posición inicial, esto para retornarla una vez que localicemos que hay comida en ella.

Debido a que el mundo es a lo más de $100 \times 100$, un arreglo de $10000$ elementos será suficiente para almacenar estos datos.

    bool flag[10000];
    int pasos[10000];
    queue<int> busca;

En nuestra función `buscaComida(int)` lo primero es meter a la cola la posición inicial, teniendo en cuenta que se necesitan 0 pasos para llegar a ella.

    busca.push(pos);
    pasos[pos] = 0;
    flag[pos] = true;

La búsqueda se realiza mientras la cola no está vacía, puesto que si en algún momento esto ocurre, significa que hemos agotado todos nuestros caminos y sólo nos queda regresar un $-1$ como nos lo indica el problema.

    while(!busca.empty()) {
        int actual = busca.front();
        if (hayComida(actual)){
            return pasos[actual];
        }

        int norte = esPosibleAvanzar(actual, 'n');
        if (norte != -1 && !flag[norte]) {
            busca.push(norte);
            pasos[norte] = pasos[actual] + 1;
            flag[norte] = true;
        }
        // De forma análoga en las otras direcciones        
        busca.pop();
    }

Es muy importante hacer un `pop()` una vez agregados los hijos del nodo actual a la pila, si no la búsqueda se ciclará.
