#include <stdio.h>

#include "quicksort.h"
using namespace std;

int n, v[10000];

int ElementoEnPosicion(int i) {
  if (i < 0 || i >= n) {
    printf(
        "Mandaste a llamar ElementoEnPosicion() para una posicion invalida.\n");
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

void Quicksort(int inicio, int fin) {
  if (fin - inicio > 1) {
    printf("Se mando a llamar HacerParticion() para el arreglo:\n");
    for (int i = inicio; i < fin; i++) printf("%d ", v[i]);
    printf("\n");

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
      printf("No ordenaste el arreglo. :(\n");
      return 0;
    }
  printf("Ordenaste correctamente el arreglo. :)\n");
  return 0;
}
