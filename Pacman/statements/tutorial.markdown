Este problema es un claro ejemplo de recursión. 

Podemos tomar como caso base la longitud del sub-arreglo a ordenar. Si el sub-arreglo es vacío o de longitud 1, es decir, si `izquierda >= derecha`, entonces evidentemente no hay nada que hacer.

Por el contrario, si el arreglo tiene longitud mayor a 1, es decir, si`izquierda < derecha`, podemos dividirlo por la mitad. Esto es, lo dividimos en los sub-arreglos `izquierda, mitad` y `mitad + 1, derecha`. Es fácil ver que `mitad = izquierda + (derecha - izquierda)/2`.

Luego, procedemos a ordenar ambos sub-arreglos de manera recursiva, es decir, mandando a llamar la misma función de `mezclar` para ambos. 

Supongamos que después de esto, ambos quedan ordenados, por lo que debemos unirlos, para lo cual necesitamos llamar `combinar` para ambos sub-arreglos.

    void mezclar(int izquierda, int derecha) {
        if (izquierda < derecha){
            int mitad = izquierda + (derecha - izquierda)/2;
            mezclar(izquierda, mitad);
            mezclar(mitad + 1, derecha);
            combinar(izquierda, mitad, derecha);
        }
    }