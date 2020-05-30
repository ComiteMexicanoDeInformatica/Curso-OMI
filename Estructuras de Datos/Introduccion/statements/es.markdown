#Estructuras de Datos

En lo que se refiere a la resolución de problemas, muchas veces para plantear el problema imaginamos
objetos y acciones que se relacionan entre sí.
Por ejemplo, un mesero tiene platos de colores apilados; de vez en cuando el que lava los platos coloca un plato recién lavado sobre la pila de platos; y en otras ocasiones el mesero toma el plato que está hasta arriba y sirve ahí la comida que ha sido preparada por el cocinero para posteriormente llevarla a su destino. Si sabemos de qué color es la pila inicial de platos, y en qué momentos el que lava los platos colocó platos sobre la pila(y claro, también sabemos el color de estos), y en qué momentos el mesero retiró el plato que se encontraba hasta arriba; podemos saber de qué color será el plato que le toca a cada cliente. Una manera de saberlo podría ser, hacer una representación dramática de los hechos; pero esto no es necesario, ya que también podríamos tomar un lápiz y un papel, y escribir una lista de los colores de los platos, posteriormente, ir escribiendo los colores de los platos que se pusieron en la pila al final de la lista, y borrar el ultimo color de la lista cada que un plato se retire.

No se necesita ser un gran matemático para pensar en hacer eso, sin embargo, en el momento de querer implementar un programa en C que lo reproduzca, nos encontramos con que no tenemos ninguna lista donde se coloquen y se quiten cosas del final, tenemos solamente arreglos, variables, estructuras, apuntadores, etc. Claro que podemos simular esta lista con las herramientas que nos proporciona C, así pues, los objetos(como la pila de platos) ligados a operaciones(como poner un nuevo plato o quitar un plato) que modifican al objeto son llamados estructuras de datos.

***Una definición sencilla de estructura de datos: unión de un conjunto de datos y funciones que
modifican dicho conjunto.***

Es muy importante conocer las estructuras de datos mas comunes que se utilizan en la programación, ya que son vitales para plantear el problema y al resolverlo, poder implementar su solución eficazmente.

#Pilas

Una pila, es la estructura de datos mencionada en el ejemplo anterior, es decir, un altero de objetos. O mas formalmente, una estructura de datos en la cual solo se pueden hacer dos operaciones: colocar un elemento en la cima, o quitar un elemento de la cima.
Lo único que se puede hacer en una pila es colocar un objeto hasta arriba, o quitar el objeto que está arriba, ya que si se quita un objeto de abajo o del centro (lo mismo que si se intenta añadir uno), la pila colapsaría.

Si queremos programar algo similar, lo mas obvio es guardar la información de la pila en un arreglo. Las operaciones que comunmente se programan en una pila son:
___________
 * push *[Insertar en la pila]*
 * top *[Consultar el elemento que está en la cima de la pila]*
 * pop *[Extraer el elemento que está en la cima]*
 * size *[Consultar el número de elementos en la pila]*
 * empty *[Verificar si la pila está vacía]*
___________

#Colas

Imagina una conversación de chat entre dos personas, aunque los conversantes no se den cuenta, existe algo llamado lag, es decir, el tiempo que tardan las dos computadoras en mandarse y recibir los mensajes. Dependiendo de la conexión, el lag puede variar entre menos de un segundo o incluso mas de un minuto. Si por un momento, por falla del servidor, una de las computadoras pierde la conexión, y en ese momento un usuario está intentando mandar varios mensajes, el programa de chat guardará los mensajes que el usuario está tratando de mandar, y cuando se recupere la conexión, el programa de chat mandará los mensajes en el mismo orden que el usuario los escribió.

Obviamente, el programa de chat no usa una pila para eso, ya que si usara una pila, el receptor leería los
mensajes en el orden inverso que el emisor los escribió, es decir, en una pila el último que entra es el primero que sale. De ahí que a las pilas se les conozca como estructuras LIFO(Last In, First Out; Último en entrar, primero en salir). 

Existen otras estructuras llamadas colas, en una cola el primero que entra es el primero que sale. Su nombre deriva de las filas que se hacen en los supermercados, cines, bancos, etc. Donde el primero que llega, es el primero en ser atendido, y el último que llega es el último en ser atendido (suponiendo que no haya preferencias burocráticas en dicho establecimiento). Las colas, son conocidas como estructuras FIFO(First In, First Out; Primero en entrar, primero en salir).

Una cola es una estructura de datos, en la cual sólo se pueden aplicar dos operaciones: colocar un elemento al final, o quitar un elemento del principio. Sin embargo, en la implementación de una cola se programan las funcionalidades para:

_____________________________________
* push  *[Insertar al final de la cola]*
* front *[Consultar el elemento que está enfrente]*
* pop *[Extraer el elemento del frente]*
* size *[Consultar el número de elementos en la cola]*
* empty *[Consultar si la cola está vacía]*
_____________________________________

#Listas enlazadas

Frecuentemente necesitamos tener almacenadas listas de datos en memoria, y hacer operaciones de agregar o quitar números pero no al final ni al principio, sino en medio. Para solucionar estos y otros problemas, existen las listas enlazadas, Las listas enlazadas son estructuras de datos compuestas por una sucesión de elementos llamados nodos; en la que cada nodo contiene un dato y la dirección del próximo nodo, en caso de que lo haya.

La siguiente imagen muestra una representación gráfica de una lista enlazada.


Una forma de definir un nodo es:

* Una estructura vacía ó
* Un elemento de información y un elace a otro nodo.

La tarea de implementar una enlazada puede hacerse eficazmente con dos arreglos: uno para guardar los datos y otro para guardar los enlaces, además se requiere una variable que diga el tamaño de la lista. Lo único que falta definir es el elemento vacío, para ello, podemos asumir que el dato 0 es el elemento vacío, y en el momento que nos encontremos con él, sabemos que la lista ya habrá terminado. Insertar un nodo con un dato x en una lista requiere un tiempo lineal. Las funcionalidades que se programan para una lista enlazada son:

_____________________________________
* push_back  *[Insertar al final de la lista]*
* push_front *[Insertar el elemento que está enfrente]*
* pop_front *[Eliminar el elemento que está al inicio de la lista]*
* pop_back  *[Eliminar el elemento que está al final de la lista]*
* front *[Consultar el elemento que está al inicio de la lista]*
* back *[Consultar el elemento que está al final de la lista]*
* insert *[Insertar un elemento en medio de la lista]*
* erase *[Eliminar un elemento de en medio de la lista]*
* empty *[Consultar si la lista está vacía]*
* size *[Consultar el número de elementos en la lista]*

Existen otras estructuras de datos avanzadas como los árboles, colas de prioridad, BIT, etc, que abordaremos más adelante.





