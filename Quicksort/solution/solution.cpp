#include "quicksort.h"

// int ElementoEnPosicion(int i);
// int Intercambiar(int i, int j);

int HacerParticion(int n) {
    int piv = ElementoEnPosicion(n - 1);
    int i = -1, j;

    for (j = 0; j < n - 1; j++)
        if (ElementoEnPosicion(j) <= piv)
            Intercambiar(++i, j);

    Intercambiar(i + 1, n - 1);
    return i + 1;
}
