#include "PilaInteractivo.h"

int arreglo[10000];
int tam;

void agrega(int n) { arreglo[tam++] = n; }

int saca() {
  if (tam == 0) {
    return -1;
  } else {
    return arreglo[--tam];
  }
}
