#include "ColaInteractivo.h"

int arreglo[10000];
int inicio, fin;

int saca()
{
    if (inicio == fin) {
        return -1;
    }

    return arreglo[++inicio];
}

int longitud()
{
    return fin - inicio;
}

void agrega(int n)
{
    arreglo[++fin] = n;
}
