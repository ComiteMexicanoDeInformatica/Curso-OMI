#¿Qué es la STL?

Una de las dificultades del lenguaje C es la implementación de contenedores (vectores, listas enlazadas, conjuntos ordenados) genéricos, de fácil uso y eficaces. Para que estos sean genéricos por lo general estamos obligados a recurrir a punteros genéricos (void *) y a operadores de cast. Es más, cuando estos contenedores están superpuestos unos a otros (por ejemplo un conjunto de vectores) el código se hace difícil de utilizar. 

Para responder a esta necesidad, la STL (standard template library) implementa un gran número de clases template describiendo contenedores genéricos para el lenguaje C++. La STL además proporciona algoritmos que permiten manipular fácilmente estos contenedores (para inicializarlos, buscar valores, etc.). La STL introduce igualmente el concepto de iterador que permite recorrer fácilmente un contenedor sin tener en cuenta la manera en que ha sido implementado.


Los conceptos desarrollados en la STL han sido extendidos por la librería boost que permite manipular estructuras de gráficos genéricos. 

##Cola con STL##

La cola de prioridades es una estructura de datos que se puede visualizar como una bolsa, donde podemos ir metiendo elementos uno atrás del otro, pero sólo los podemos retirar según un criterio de prioridad.

**Operaciones Básicas de Colas***
   
    push() --> Inserta un elemento en la cola;
    pop() ---> Extrae el elemento ubicado al inicio de la cola;
    
**Definición con la STD**
    
    Queue (std::queue)
 
        push();
        pop();
        front;
        back;
        size;
        empty;

En este problema debemos de ver el tiempo por cada proceso y almacenarlo en una cola.

    proceso:
    ---> id;
    ---> tiempo;

Habiendo definido esto almacenamos en nuestra cola como mostramos en el ejemplo:

!{Cola Inicial del Problema}(colainial.jpg)

Lo que se debe de hacer el analizar el **tiempo** del **ID** proceso que esta en el inicio de la **COLA** restando el **K** tiempo que indicaste:

!{Después de que a todos los ID restamos K}(primerbarrido.jpg)

En este caso el primer ID que ya su tiempo es menor a **K** sería el proceso con **ID = 39**, quiere decir que es el primero que **matamos de la cola**

Seguimos repitiendo el proceso pero ahora con los siguientes elementos:

!{Restando K tiempo en los elementos restante}(segundobarrido.jpg)

Como observamos en este punto cuando llegamos al proceso con **ID = 109** su tiempo es menor a K por tanto ahí terminamos y es el siguiente en mostrar.

Esto se debe de seguir repitiendo hasta que ya no tengamos mas procesos en cola.
