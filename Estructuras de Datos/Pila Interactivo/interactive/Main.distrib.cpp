#include <stdio.h>

#include "PilaInteractivo.h"

int n, val;
char ins;

int main() {
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf(" %c", &ins);
    if (ins == 'a') {
      scanf("%d", &val);
      agrega(val);
    }
    if (ins == 's') printf("%d\n", saca());
  }
  printf("\n");
  return 0;
}
