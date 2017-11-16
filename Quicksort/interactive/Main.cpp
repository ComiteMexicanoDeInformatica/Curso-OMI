#include "quicksort.h"
#include <stdio.h>
#include <string.h>
using namespace std;

#define MAXN 2000
int n, v[MAXN];

int ElementoEnPosicion(int i) {
    if (i < 0 || i >= n)
        return -1;
    return v[i];
}

int Intercambiar(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= n)
        return 0;
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
    return 1;
}

void Quicksort(int nsize, int arr[]) {
    if (nsize > 1) {
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
            printf("0\n");
            return 0;
        }
    printf("1\n");
    return 0;
}
