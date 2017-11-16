#include "quicksort.h"
#include <stdio.h>
#include <string.h>
using namespace std;

#define MAXN 2000
int n, v[MAXN];

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

void Quicksort(int nsize, int arr[]) {
    if (nsize > 1) {
        printf("Se mando a llamar HacerParticion() para el arreglo:\n");
        for (int i = 0; i < nsize; i++)
            printf("%d ", arr[i]);
        printf("\n");

        n = nsize;
        memcpy(v, arr, sizeof(v));
        int piv = HacerParticion(nsize);

        int izq[nsize], der[nsize];
        memcpy(izq, v, sizeof(izq));
        memcpy(der, v + piv + 1, sizeof(der));

        Quicksort(piv, izq);
        Quicksort(nsize - piv - 1, der);
        memcpy(arr, izq, sizeof(izq));
        memcpy(arr + piv + 1, der, sizeof(der));
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
