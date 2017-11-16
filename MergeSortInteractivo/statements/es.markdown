# La mejor cerveza
COMI Corp. se dio a la importante tarea de hacer una lista de las mejores $n$ cervezas nacionales, comenzando por la mejor cerveza, para esto convoco a sus más confiables y capacitados elementos en el arte de degustar cervezas y despues de una noche de borrachera ellos hicieron una votación sobre las $n$ cervezas nacionales pero como aun no recuperaban del todo la sobriedad olvidaron ordenar la lista de resultados.

Para ordenar la lista COMI Corp. ha solicitado ayuda a dos profesionales en el ordenamiento de listas:

**1. El mezclador**

**2. El combinador**

Y ha diseñado la siguiente estrategia con ayuda de John Von Neumann:
 
1. El mezclador sera el encargados de dividir el trabajo, primero partira a la mitad la lista de  votaciones de las $n$ cervezas de tal manera que cada sublista tenga el mismo numero de elementos $n/2$ o tal vez una sublista pueda tener un elemento  más que la otra y luego de estas dos sublistas formara 4 siguiendo la misma logica y asi hasta  tener listas de una sola votación entoces llamará a El combinador.

2. El combinador tomara dos sublistas ordenadas de la lista y los combinara de forma ordenada.

Sin embargo, el combinador se ha enfermado y la COMI Corp. necesita de tu ayuda. Para que tengas una idea mas clara de la estrategia puedes ver la siguiente imagen donde se ilustra la estrategia a seguir en un ejemplo:

 <img src="http://programminglife.io/public/images/Divide_and_Conquer.png" alt="Drawing" style="width: 200px;"/>


# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `combinar(int votaciones[],int izquierda,int mitad ,int derecha)`.

# Implementación

### La función

 ```combinar(int votaciones[],int izquierda, int mitad,int derecha)```

C/C++ `void combinar(int votaciones[],int izquierda,int mitad,int derecha);`

### Descripción
En la  función `combinar` los parametros `int izquierda`, `int mitad`  e `int derecha` te deben ayudar a saber que subarreglos del arreglo `int votaciones[]` esta combinando y ordenando la función `combinar` 
El evaluador buscará en tu código esta función y la llamará con los parametros `votaciones`, `izquierda`,`mitad` y `derecha`. Tu implementación deberá combinar y ordenar los elementos del arreglo `votaciones` entre `izquierda` y `mitad` con los elemnetos que estan entre `mitad+1` y `derecha`. Debes asumir que ambas sublistas estan ordenadas. 

### Parámetros

* `votaciones`: Es un arreglo de enteros que contiene los votos.
* `izquierda`: Es un entero que indica la posición del arreglo donde inicia la primera sublista a combinar y ordenar.
* `mitad`: Es un entero que indica la posición del arreglo donde termina la primera sublista a combinar y ordenar. La segunda sublista siempre comienza en `mitad+1`.
* `derecha`: Es un entero que indica la posición del arreglo donde termina la segunda sublista a combinar y ordenar. 

# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo. 
|| input

Función llamada

|| output

Valor devuelto

|| description

Descripción

|| input

combinar(votaciones,0,0,1)

|| output

-

|| description

Asumiendo que `int votaciones[] = {1,5,3,4,6,2}`
la primer sublista son los elementos entre la posición $0$  y $0$ es decir {1} la segunda  sublista son los elementos entre las posiciones $1$ y $1$ es decir {5} al combinar y ordenar estas listas el arreglo `votaciones` queda como sigue:
{1,5,3,4,6,2}
|| input

combinar(votaciones,4,4,5)

|| output

-

|| description

Asumiendo que `int votaciones[] = {1,5,3,4,6,2}`
la primer sublista son los elementos entre la posición $4$  y $4$ es decir {2} la segunda  sublista son los elementos entre las posiciones $5$ y $5$ es decir {6} al combinar y ordenar estas listas el arreglo `votaciones` queda como sigue:
{1,5,3,4,2,6}
|| input
combinar(votaciones,0,2,5)

|| output

-

|| description
Asumiendo que `int votaciones[] = {1,3,5,2,4,6}`
la primer sublista son los elementos entre la posición $0$  y $3$ es decir {1,5,3} la segunda  sublista son los elementos entre las posiciones $3$ y $5$ es decir {4,6,2} al combinar y ordenar estas listas el arreglo original queda como sigue:
{1,2,3,4,5,6}

|| end

# Restricciones

$0 \leq n \leq 10,000$

{{libinteractive:download}}
