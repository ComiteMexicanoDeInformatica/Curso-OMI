#include <stdlib.h>  //malloc

#include <iostream>
using namespace std;

void localiza(int x);
void alta(int x);
void baja();

typedef struct reg {
  reg *sig;
  int dat;  // número de alumno
} reg;

reg *p, *a, *aux;
int n, k, c;

int main() {
  p = (reg *)malloc(sizeof(reg));  // inicio d ela lista
  p->sig = NULL;
  a = (reg *)malloc(sizeof(reg));  // nodo actual
  a->sig = NULL;
  aux = (reg *)malloc(sizeof(reg));
  aux->sig = NULL;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) alta(i);
  a = p;
  while (1) {
    a = a->sig;
    for (int i = 1; i <= k; i++) localiza(i);
    if (a->dat == 1) break;  // regresa con Randy
    baja();
  }
  cout << c;
  return 0;
}

void alta(int x) {
  if (p->sig == NULL) {  // Si Lista Vacia
    p->sig = a;
    a->dat = x;
  } else {
    reg *n;
    n = (reg *)malloc(sizeof(reg));
    n->sig = p->sig;
    n->dat = x;
    a->sig = n;
    a = n;
  }
}

void localiza(int x) {
  if (a->sig != NULL) {  // Solo queda Randy
    aux = a;
    a = a->sig;
  }
}

void baja() {
  aux->sig = a->sig;
  if (p == aux) p->sig = aux->sig;
  c++;
}
