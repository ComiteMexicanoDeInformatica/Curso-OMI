#include <stdio.h>

#include "quicksort.h"
using namespace std;

int n, v[10000];

int ElementoEnPosicion(int i) {
  if (i < 0 || i >= n) return -1;
  return v[i];
}

int Intercambiar(int i, int j) {
  if (i < 0 || i >= n || j < 0 || j >= n) return 0;
  int aux = v[i];
  v[i] = v[j];
  v[j] = aux;
  return 1;
}

void Quicksort(int inicio, int fin) {
  if (fin - inicio > 1) {
    int piv = HacerParticion(inicio, fin);
    Quicksort(inicio, piv);
    Quicksort(piv + 1, fin);
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", &v[i]);
  Quicksort(0, n);

  for (int i = 0; i < n - 1; i++)
    if (v[i] > v[i + 1]) {
      printf("0\n");
      return 0;
    }
  printf("1\n");
  return 0;
}
