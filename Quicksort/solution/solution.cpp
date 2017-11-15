#include "quicksort.h"

// int ElementoEnPosicion(int i);
// bool Intercambiar(int i, int j);

int HacerParticion(int n) {
    int piv = ElementoEnPosicion(0);
    int i = 1, j = n - 1;

    while (i < j) {
        while (ElementoEnPosicion(i) <= piv)
            i++;
        while (ElementoEnPosicion(j) >= piv)
            j--;
        if (i < j)
            Intercambiar(i++, j--);
    }

    Intercambiar(0, j);
    return j;
}
