#include "quicksort.h"

// int ElementoEnPosicion(int i);
// bool Intercambiar(int i, int j);

int HacerParticion(int n) {
    int piv = ElementoEnPosicion(n - 1);
    int i = -1, j, k = n;

    for (j = 0; j < n; j++)
        if (ElementoEnPosicion(j) < piv)
            Intercambiar(++i, j);

    for (j = n - 1; j >= 0; j--)
        if (ElementoEnPosicion(j) > piv)
            Intercambiar(--k, j);

    return (i + k) / 2;
}
