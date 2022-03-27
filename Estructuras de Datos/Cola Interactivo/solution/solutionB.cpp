#include "ColaInteractivo.h"

int queue[10000];
int start = 0, end = 0;

int queue[10000];
int start = 0, end = 0;

void agrega(int N) { queue[end++] = N; }

int saca() {
  if (start == end) return -1;
  return queue[start++];
}
