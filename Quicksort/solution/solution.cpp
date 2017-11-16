#include "quicksort.h"

// int ElementoEnPosicion(int i);
// int Intercambiar(int i, int j);

int HacerParticion(int n) {
    int piv = ElementoEnPosicion(n - 1);
    int i = -1, j;

    for (j = 0; j < n - 1; j++)
        if (ElementoEnPosicion(j) < piv)
            Intercambiar(++i, j);
    Intercambiar(++i, n - 1);

    piv = ElementoEnPosicion(i);
    for (j = i; j < n - 1; j++)
        if (piv != ElementoEnPosicion(j + 1))
            break;
    return (i + j) / 2;
}
