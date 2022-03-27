#include "ColaInteractivo.h"

Declaración de Variables

    int arreglo[10000];
    int ini,fin;

Función que agrega un elemento en la cola

    void agrega(int n)
    {
        arreglo[fin] = n;
        fin++;
    }

Función que saca un elemento de la cola

    int saca()
    {
        if (fin-ini == 0) {
         	return -1;
        } else {
            ini++;
         	    return arreglo[ini-1];
        }
    }
