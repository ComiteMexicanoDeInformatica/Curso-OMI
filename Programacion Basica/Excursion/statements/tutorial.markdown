La primera observación que debemos considerar, es que necesitamos una forma eficiente de saber por cada pregunta cuántos pasajeros tiene el camión $x$. Notemos que $n \leq 10000$.
De modo que podemos crear un arreglo de tamaño $n$ donde cada índice representa un camión y así en cada índice guardamos la cantidad de pasajeros que viajan en ese camión.
Por lo tanto, por cada pregunta, basta con imprimir la casilla $x$ del arreglo que previamente creamos. Es decir, sea $A$ el arreglo, entonces, por cada pregunta, basta con imprimir $A[x]$.
