La primera observación que debemos considerar, es que necesitamos una forma eficiente de saber por cada pregunta cuantos pasajeros tiene el camión $x$. Notemos que $n \leq 10000$.
De modo que podemos que es posible crear un arreglo de tamaño $n$. Entonces, podemos almacenar las cantidades de pasajeros para cualquier camión.
Por lo tanto, la solución es que por cada pregunta que debamos contestar, solo basta con imprimir la casilla $x$ del arreglo que previamente creamos.
Así pues, sea $A$ el arreglo, entonces por cada pregunta, basta con imprimir $A[x]$.