#Permutación

---

##Descripción##

**¿Qué son?** Permutaciones sin repetición o permutaciones ordinarias de n elementos (de orden n) son los distintos grupos de n elementos distintos que se pueden hacer, de forma que dos grupos se diferencian únicamente en el orden de colocación. Se representa por Pn.

**¿Cómo se forman?** Para construir las permutaciones sin repetición de un conjunto de n elementos, tenemos que construir grupos de n elementos sin que se puedan repetir. Se trata entonces de hacer lo mismo que se ha hecho con las variaciones sin repetición de orden n a partir de un conjunto de n elementos.

    De un elemento. A = {1}. Únicamente existe una permutación: 1.


    De dos elementos. A = {1,2}. V2,2 = 2. Las dos permutaciones son: 12 y 21.

    De tres elementos. A = {1,2,3}. V3,3 = 6. Las seis permutaciones son: 123 , 132 , 213 , 231 , 312 y 321.


    De cuatro elementos. A = {1,2,3,4}. V4,4 = 24. Las veinticuatro permutaciones son: 1234 , 1243 , 1324 , 1342 , 1423 , 1432 , 2134 , 2143 , 2314 , 2341 , 2413 , 2431 , 3124 , 3142 , 3214 , 3241 , 3412 , 3421 , 4123 , 4132 , 4213 , 4231 , 4312 , 4321.

Y así podemos seguir construyendo permutaciones de cualquier número de elementos. En la siguiente escena se puede seguir la construcción de permutaciones sin repetición de cuatro elementos utilizando el diagrama de árbol.

**¿Cuántas hay?**. Dada la relación existente entre permutaciones y variaciones sin repetición, se puede deducir que:

    Pn = Vn,n = n · (n-1) · · · (n-n+1) = n!.

En la siguiente escena se puede calcular el número de permutaciones sin repetición de cualquier orden.

##Explicación##
En este problema buscamos tener las permutaciones para agrupar los cargueros y así encontrar al diferencia entre el que tenga mas carga y el que tenga menos carga, por ejemplo si introducimos:

    Cargueros = {1, 2, 3, 4, 5, 6, 7, 8, 9}

    Tenemos como salida = 0

Ya que permutados esa sería la diferencia entre uno y otro.
