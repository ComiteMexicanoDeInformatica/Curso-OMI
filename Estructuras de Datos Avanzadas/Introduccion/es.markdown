#Explicación de structs y uso de la STL

Una estructura de datos es un grupo de elementos de datos agrupados bajo un mismo nombre. Cada elemento de datos se conoce como miembro de datos y pueden ser de diferente tipo y diferente longitud. La forma de definir una estructura es haciendo uso de la palabra `struct`. La declaración de `struct` debe acabar con una llave. El tamaño de una estructura es al menos tan grande como la suma de los tamaños de sus miembros. La declaración de una estructura a continuación:

    Struct type_nombre
    {
        Struct-declaration-list;
    }

El `type_nombre` es el nombre de la estructura que integra el grupo de elementos de datos que pueden ser de diferentes tipos de datos. Si desea acceder a los miembros de la estructura de datos, debe declararse la variable de estructura de la siguiente manera:

    Struct type_nombre variable;

Una vez definida la variable tipo struct, se accede a cada elemento de la estructura de datos de la siguiente manera: 

    Variable_Struct_type.elemento_declaration_list

Una estructura de datos es un objeto struct, las direcciones de sus elementos (y las direcciones de las unidades del campo de asignación de bits) aumentan en el orden en que se definieron los miembros. Los punteros sirven para señalar objetos y también para manipularlos. Un puntero puede apuntar a una estructura y puede acceder a sus campos, se puede convertir en un puntero a su primer miembro (o, si el miembro es un campo de bits, a su unidad de asignación). Del mismo modo, un puntero al primer miembro de una estructura se puede convertir en un puntero a la estructura adjunta. Puede haber un relleno sin nombre entre dos miembros de una estructura o después del último miembro, pero no antes del primer miembro. La sintaxis para la declaración de estructura es la siguiente:

    <tipo_objeto > * <etiqueta_puntero> [= <iniciador>]

En este caso, tipo_objeto es de la forma struct punto, con lo que la declaración es:

    struct punto * ptr;

Opcionalmente puede incluirse un iniciador como en el ejemplo anterior:

    struct punto * ptr = &pto;



#Uso de la STL

La librería STL es una colección de algoritmos y contenedores como son: vectores, listas enlazadas, conjuntos ordenados que son de fácil uso y eficaces. La manipulación de los contenedores es a través de iteradores que permite recorrer fácilmente un contenedor sin tomar en cuenta la implementación de la misma. Un iterador y un const_iterator permiten recorrer un contenedor de inicio a fin. Un const_iterator contrariamente a un iterator, da acceso únicamente para la lectura del elemento deseado. Así, un recorrido con const_iterator no produce cambios en el contenedor. Es por ello que un contenedor “const” puede ser recorrido por const_iterators pero no por iterators.  

En importante tener conocimiento de las clases que manejan la librería STL y elegir la que se adapte a la necesidad de la solución. Sea x el tamaño de un contenedor. Un algoritmo es llamado lineal (en O(x)) si su tiempo de cálculo es proporcional a x. Igualmente, un algoritmo puede ser instantáneo (O(1)), logarítmico O(log(x)), polinomial O(x^k), exponencial O(e(x)).

    std::pair<T1,T2>

Un par es una estructura de dos elementos contenidos de tipos diferentes eventualmente. Ciertos algoritmos de STL (por ejemplo find) devuelven pares (posición del elemento encontrado y un booleano que indica si ha sido encontrado). 

    std::list<T,...>

La clase list provee una estructura genérica de listas enlazadas pudiendo eventualmente contener repeticiones. 

    std::vector<T,...>

Todos los elementos contenidos en el vector están contiguos en memoria, lo que permite acceder inmediatamente a cualquier elemento. 

    std::set<T,...>

La clase set permite describir un conjunto ordenado y sin repetición de elementos. Previamente es necesario parar este orden como parámetro template (un funtor). Por defecto, el funtor std::less (basado en el operador <) es utilizado, lo que equivale a tener un conjunto de elementos clasificados del más pequeño al más grande. Concretamente, basta con implementar el operador < de una clase o una estructura de tipo T para poder definir un std::set<T>. Además, el tipo T debe disponer de un constructor vacío T(). 

    std::map<K,T,...>

Un map permite asociar una contraseña a un dato. El map toma a los menos dos parámetros templates: el tipo de la clave K y el tipo del dato T. Al igual que std::set, el tipo K debe ser ordenado (este orden puede ser pasado como 3er parámetro template, std::less<K> par défaut) y, el tipo T solo asigna un constructor vacío.
