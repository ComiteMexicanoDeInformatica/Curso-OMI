# Contando Inversiones

# Entrada y Salida

**Este es un problema interactivo**, por lo que no tendrás que leer la entrada ni imprimir la salida, sino implementar en tu código la función `contarInversion(int tam,int lista[])`.

# Implementación

### La función

 ```contarInversion(int tam,int lista[])```

C/C++ `int contarInversion(int tam,int lista[]);`

### Descripción
La  función `contarInversion` debe recibir un arreglo de enteros y su tamaño y debe regresar  el numero de inversiones en el arreglo. El evaluador buscará en tu código esta función y la llamará con los parametros `tam` y `lista`.

### Parámetros

* `lista`: Es un arreglo de enteros.
* `tam`: Es un entero que indica la cantidad de enteros que hay en lista 

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

contar(lista,5)

|| output

5

|| description

Asumiendo que `int votaciones[] = {1, 20, 6, 4, 5}`
20 con 6, 4 y 5 (3 inversiones) y 6 con 4 y 5 (2 inversiones). En total 5 inversiones. 
|| input
contar(lista,6)

|| output

3

|| description
Asumiendo que `int votaciones[] = {1,3,5,2,4,6}`
3 con 2 (1 inversión) 5 con 2 y 4 (2 inversiones). En total 3 inversiones 

|| end

# Restricciones

$0 \leq n \leq 1,000,000$

{{libinteractive:download}}
