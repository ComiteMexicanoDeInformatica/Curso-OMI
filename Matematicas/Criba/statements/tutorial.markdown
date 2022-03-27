#Solución

La criba de Eratóstenes es un algoritmo que permite hallar todos los números primos menores que un número natural dado $n$. Se forma una tabla con todos los números naturales comprendidos entre $2$ y $n$, y se van tachando los números que no son primos de la siguiente manera: Comenzando por el $2$, se tachan todos sus múltiplos; comenzando de nuevo, cuando se encuentra un número entero que no ha sido tachado, ese número es declarado primo, y se procede a tachar todos sus múltiplos, así sucesivamente. El proceso termina cuando el cuadrado del mayor número confirmado como primo o no lo es. Criba

#Explicación

---

Teniendo ya tu arreglo ordenado como se muestra a continuación en un rango de 1 a 100:

**Es importante que recuerdes que debes de dejar de repetir el proceso cuando llegas al número primo que es mayor a la raíz cuadrada del numero mayor del arreglo**

!{Arreglo Ordenado}(criba1.jpg)

**Paso 1.-** Lo primero que debes de hacer es encontrar tu primer numero primo que en este caso sería el **2** y con esto eliminas todos los **múltiplos del 2** en este caso serían todos los números pares, quedando de la siguiente forma:

!{Eliminado los múltiplos de 2}(criba2.jpg)

**Paso 2.-** Ahora buscaremos el siguiente número primo que no ha sido eliminado, en este caso es el 3 y buscamos todo los múltiplos de 3 que no han sido eliminados.

!{Eliminamos los múltiplos de 3}(criba3.jpg)

**Paso 3.-** El siguiente primo no eliminado es el 5, y vamos a eliminar todos los múltiplos de 5 no eliminados.

!{Eliminamos múltiplos de 5}(criba5.jpg)

**Paso 4.-** Ahora continuamos con el 7 y repetimos el procedimiento.

!{Eliminamos múltiplos de 7}(criba7.jpg)

**Paso 5.-** Como el siguiente primo es 11 y este número es mayor a 10 que es la raíz cuadrada del número más grande de nuestro arreglo ahí termina el proceso.

Ahora ya tendríamos la CRIBA de Eratóstenes y solo tendríamos que buscar ahí.
