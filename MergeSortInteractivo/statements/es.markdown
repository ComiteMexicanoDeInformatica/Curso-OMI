# Contando Inversiones
Si consideramos el orden ascendente, una inversión en un arreglo de números es cualquier par ordenado (i,j) con la propiedad de que $i < j$, pero $a[i] > a[j]$ (el par (a[i], a[j] esta "desordenado" en el sentido ascendente). Por ejemplo, el areglo $(1, 2, 4, 3, 5)$ tiene $1$ inversión, y el arreglo $(5, 1, 2, 3, 4)$ tiene 4 inversiones. Recuerde que la cantidad de inversiones de un arreglo corresponde a la cantidad de intercambios de elementos que necesita efectuar un algoritmo de ordenación que intercambia elementos adyacentes. 
Tu tarea será contar las inversiones en un arreglo de enteros utilizando Merge Sort.
# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código las funciónes: `merge(int lista[],int temp[],int izquierda,int mitad,int derecha)` y `mergeSort(int lista[],int temp[],int izquierda,int derecha)`.

# Implementación

### La función
 ```merge(int lista[],int temp[],int izquierda,int mitad,int derecha)```

C/C++ `int merge(int lista[],int temp[],int izquierda,int mitad,int derecha);`

### Descripción
La  función `merge` debe recibir dos arreglo de enteros  `lista` y `temp` y los enteros `izquierda`, `mitad` y `derecha`. Esta función va a asumir que el subarreglo con valores entre `lista[izquierda]` y `lista[mitad]` estan ordenados al igual que los valores en el subarreglo con valores entre `lista[mitad+1]` y `lista[derecha]` y va a combinar estos dos subarreglos de forma ordenada de tal manera que el subarreglo con valores entre `lista[izquierda]` y `lista[derecha]` quede ordenado, durante el proceso debe contar el numero de inversiones (Estas inversiones deben ser primero almacenadas en el arreglo temporal `temp` y luego actualizadas en el arreglo `lista`) que hizo y regresar este valor.   
### Parámetros

* `lista`: Es el arreglo de enteros en el que contaremos las inversiones.
* `temp`: Es un arreglo de enteros temporal cuya función es almacenar inversiones para luego actualizar  
* `izquierda`: Es un entero que indica donde inicia el primer subarreglo a combinar.
* `mitad`: Es un entero que indica donde termina el primer subarreglo a combinar, el segundo subarreglo siempre inicia en `mitad+1`.
* `derecha`: Es un entero que indica donde termina el segundo subarreglo a combinar.

## La función
```mergeSort(int lista[],int temp[],int izquierda,int derecha)```
C/C++ `int mergeSort(int lista[],int temp[],int derecha,int izquierda);`

### Descripción
La  función `mergeSort` debe recibir dos arreglo de enteros  `lista` y `temp` y los enteros `izquierda` y `derecha`. Esta función va a dividir el trabajo haciendo dos llamdas recursivas e invocando a merge como sigue:
```
int mergeSort(int lista[],int temp[],int izquierda,int derecha){
  int mitad, inversiones = 0;
  if (derecha > izquierda)
  {
    mitad = (izquierda + derecha)/2;
    inversiones  = mergeSort(lista, temp, izquierda, mitad);
    inversiones += mergeSort(lista, temp, mitad+1, derecha);
    inversiones += merge(lista, temp, izquierda, mitad+1, derecha);
  }
  return inversiones;
}
### Parámetros

* `lista`: Es el arreglo de enteros en el que contaremos las inversiones.
* `temp`: Es un arreglo de enteros temporal cuya función es almacenar inversiones para luego actualizar  
* `izquierda`: Es un entero que indica donde inicia el subarreglo a dividir.
* `derecha`: Es un entero que indica donde termina el subarreglo a dividir.
# Rutina de Ejemplo

A continuación se muestran las primeras llamadas de una rutina de ejemplo. 
|| input

Función llamada

|| output

Valor devuelto

|| description

Descripción

|| input

contar(lista,6)

|| output

6

|| description

Asumiendo que `int lista[] = {1,5,3,4,6,2}`
el 5 esta antes que  el 3, 4 y 2 (3 inversiones); el 3 esta invertido con el 2 (1 inversión); el 4 esta invertido con el 2 (1 inversion) y el 6 esta invertido con el 2 (1 inversion). En total 6 inversiones.  
|| input

contar(lista,temp,)

|| output

5

|| description

Asumiendo que `int lista[] = {1, 20, 6, 4, 5}`
20 con 6, 4 y 5 (3 inversiones) y 6 con 4 y 5 (2 inversiones). En total 5 inversiones. 
|| input
contar(lista,6)

|| output

3

|| description
Asumiendo que `int lista[] = {1,3,5,2,4,6}`
3 con 2 (1 inversión) 5 con 2 y 4 (2 inversiones). En total 3 inversiones 

|| end

# Restricciones

$0 \leq n \leq 10,000$

{{libinteractive:download}}
