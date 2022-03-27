#include "quicksort.h"

// int ElementoEnPosicion(int i);
// bool Intercambiar(int i, int j);

int HacerParticion(int inicio, int fin) {
  int piv = ElementoEnPosicion(fin - 1);
  int i = inicio - 1, j = fin, k;

  for (k = inicio; k < fin; k++)
    if (ElementoEnPosicion(k) < piv) Intercambiar(++i, k);

  for (k = fin - 1; k >= inicio; k--)
    if (ElementoEnPosicion(k) > piv) Intercambiar(--j, k);

  return (i + j) / 2;
}
