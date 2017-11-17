# La mejor cerveza
COMI Corp. se dio a la importante tarea de hacer una lista de las mejores $n$ cervezas nacionales, comenzando por la mejor cerveza, para esto convoco a sus más confiables y capacitados elementos en el arte de degustar cervezas y despues de una noche de borrachera ellos hicieron una votación sobre las $n$ cervezas nacionales pero como aun no recuperaban del todo la sobriedad olvidaron ordenar la lista de resultados.

Para ordenar la lista COMI Corp. ha solicitado ayuda a dos profesionales en el ordenamiento de listas:

**1. El mezclador**

**2. El combinador**

Y ha diseñado la siguiente estrategia con ayuda de John Von Neumann:
 
1. El mezclador sera el encargados de dividir el trabajo, primero partira a la mitad la lista de  votaciones de las $n$ cervezas de tal manera que cada sublista tenga el mismo numero de elementos $n/2$ o tal vez una sublista pueda tener un elemento  más que la otra y luego de estas dos sublistas formara 4 siguiendo la misma logica y asi hasta  tener listas de una sola votación entoces llamará a El combinador.

2. El combinador tomara dos sublistas ordenadas de la lista y los combinara de forma ordenada.

Sin embargo, el mezclador se ha enfermado y la COMI Corp. necesita de tu ayuda. 

Para que tengas una idea mas clara de la estrategia puedes ver la siguiente imagen donde se ilustra la estrategia a seguir en un ejemplo:

 <img src="http://programminglife.io/public/images/Divide_and_Conquer.png" alt="Drawing" style="width: 200px;"/>


# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `mezclar(int izquierda,int derecha)`.

# Implementación

### La función

 ```mezclar(int izquierda,int derecha)```

C/C++ `void mezclar(int izquierda,int derecha);`

### Descripción
En la  función `mezclar` tiene los parametros `int izquierda` e `int derecha` estos te diran cual subarreglo del arreglo de `votaciones` debes dividir en dos partes mientras sea posible para luego llamar a la funcion `combinar` . 
El evaluador buscará en tu código esta función y la llamará con los parametros `izquierda` y `derecha`. Tu implementación deberá ir dividiendo el  arreglo `votaciones` entre `izquierda` y `derecha` y llamarse recursivamente sobre cada division. Cuando ya no sea posible dividir mas el arreglo `votaciones` debes llamar a la funcion `combinar.

### Parámetros

* `izquierda`: Es un entero que indica la posición del arreglo donde inicia la sublista que se va a dividir.
* `derecha`: Es un entero que indica la posición del arreglo donde termina sublista que se va a dividir. 

## La función `combinar`
 ```combinar(int izquierda,int mitad,int derecha)```

C/C++ `void combinar(int izquierda,int mitad,int derecha);`

### Descrpción
La función `combinar` asume que los valores en el arreglo `votaciones` entre las posiciones `izquierda` y `mitad`  ya estan ordenados y asume lo mismo para los valores entre las posiciones `mitad+1` y `derecha`. No tiene ningun valor de regreso pero
en el arreglo `votaciones` combina y ordena los valores entre las posiciones `izquierda` y `derecha`
# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo. 
|| input

Función llamada

|| output

Valor devuelto

|| description

Descripción

|| input

mezclar(0,5)

|| output

-

|| description

Asumiendo que `int votaciones[] = {1,5,3,4,6,2}`
despues de llamar mezclar el arreglo queda ordenado completamente
{1,2,3,4,5,6}
|| input

mezclar(1,3)

|| output

-

|| description

Asumiendo que `int votaciones[] = {1,5,3,4,6,2}`
El arreglo queda ordenado entre las posiciones 1 y 3
{1,3,4,5,2,6}
|| end

# Restricciones

$0 /leq n /leq 10,000$

{{libinteractive:download}}
