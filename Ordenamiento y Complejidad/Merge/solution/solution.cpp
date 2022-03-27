#include "MergeSortInteractivo.h"
void mezclar(int izquierda, int derecha) {
  if (izquierda < derecha) {
    int mitad = izquierda + (derecha - izquierda) / 2;
    mezclar(izquierda, mitad);
    mezclar(mitad + 1, derecha);
    combinar(izquierda, mitad, derecha);
  }
}
