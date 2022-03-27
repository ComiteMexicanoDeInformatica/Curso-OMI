#include "quicksort.h"

int HacerParticion(int inicio, int fin) {
  int piv = ElementoEnPosicion(fin - 1);
  int i = inicio - 1, j = fin;
  for (int k = inicio; k < fin; k++)
    if (ElementoEnPosicion(k) < piv) Intercambiar(++i, k);

  for (int k = fin - 1; k >= inicio; k--)
    if (ElementoEnPosicion(k) > piv) Intercambiar(--j, k);

  return (i + j) / 2;
}
