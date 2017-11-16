
#Pilas
Una pila (stack) es una estructura de datos que permite almacenar elementos conservando el orden en cual se introducen. La recuperación de sus datos está en el orden inverso al que fueron introducidos. 
La pila se caracteriza por las operaciones de inserción y eliminación de elementos que se realizan solamente en un extremo de la estructura. El extremo donde se realizan estas operaciones se denomina habitualmente Top. 

Dada una pila P, formada por los elementos a, b, c, d, e, f, g es decir, (P=[ a, b, c, d, e, f, g]), se dice que a, es el elemento menos accesible de la pila, está en el fondo de la pila (bottom) y que el elemento g, por el contrario, es el más accesible, está en la cima (top). 

El orden que se añaden los elementos en una pila implica el orden en que son eliminados, es decir, el primer elemento que se elimine de la estructura deberá ser el último elemento que fue introducido. Por esa razón, se dice que una pila es una lista o estructura lineal de tipo **LIFO** (Last In First Out, el último en entrar: primero en salir).

Para implementar las funciones que manipulan la pila:
Crear la pila (CrearPila): 

La operación de creación de la pila inicia la pila como vacía.

    Stack<int> Pila;

La operación **push()**, añade o inserta un elemento en el tope de la pila.

    Pila.push(elemento);

La operación **pop()** eliminar un elemento indicado en el tope de la pila. 

    Pila.pop(elemento);

También existe operación de validación como vacía **(empty)** que verifica la existencia de elementos en la pila. 

    Pila.empty();

Otra operación que puede ejecutarse en una pila es determinar cuál elemento se encuentra en el tope de la pila pero sin eliminarlo. El extremo donde se realizan esta operación se denomina **top**.

    Pila.top();

Otra de la operación en las pilas es regresar el número de elementos que se encuentran en el **stack.**

    Pila.size();

Entonces decimos que una pila, por definición, es un contenedor en el que los elementos se insertan y extraen en un orden determinado, como se muestra continuación:

![Implementación de Pila](pila.png)
