#include "quicksort.h"
#include <stdio.h>
using namespace std;

#define MAXN 2000
int n, *v;

int ElementoEnPosicion(int i) {
    if (i < 0 || i >= n) {
        printf("Mandaste a llamar ElementoEnPosicion() para una posicion invalida.\n");
        return -1;
    }
    printf("El elemento en la posicion %d es %d\n", i, v[i]);
    return v[i];
}

int Intercambiar(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= n) {
        printf("Mandaste a llamar Intercambiar() para posiciones invalidas.\n");
        return 0;
    }
    printf("Llamaste a intercambiar %d y %d\n", v[i], v[j]);
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
    return 1;
}

void Quicksort(int nsize, int *arr) {
    if (nsize > 1) {
        n = nsize;
        v = arr;

        printf("Se mando a llamar HacerParticion() para el arreglo:\n");
        for (int i = 0; i < nsize; i++)
            printf("%d ", arr[i]);
        printf("\n");

        int piv = HacerParticion(nsize);
        Quicksort(piv, arr);
        Quicksort(nsize - piv - 1, arr + piv + 1);
    }
}

int main() {
    int nsize, arr[MAXN];
    scanf("%d", &nsize);
    for (int i = 0; i < nsize; i++)
        scanf("%d", &arr[i]);
    Quicksort(nsize, arr);

    for (int i = 0; i < nsize - 1; i++)
        if (arr[i] > arr[i + 1]) {
            printf("No ordenaste el arreglo. :(\n");
            return 0;
        }
    printf("Ordenaste correctamente el arreglo. :)\n");
    return 0;
}
