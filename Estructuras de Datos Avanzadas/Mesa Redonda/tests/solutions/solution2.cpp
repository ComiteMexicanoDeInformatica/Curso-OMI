#include <bits/stdc++.h>

using namespace std;

typedef struct mesa {
  mesa *sig;
  int num;  /// Número del niño
} mesa;

mesa *p, *a, *temp;
int n, k, c;  /// Número de niños, salto en la lista, y niños que salieron antes
              /// que Randy

void alta(int x) {
  if (p->sig == NULL) {  /// Si Lista Vacia, agrega el primero
    p->sig = a;
    a->num = x;
  } else {
    mesa *n;  /// Hay al menos uno,
    n = (mesa *)malloc(sizeof(mesa));
    n->sig = p->sig;
    n->num = x;
    a->sig = n;
    a = n;
  }
}

void baja() {
  temp->sig = a->sig;
  if (p == temp) p->sig = temp->sig;
  c++;  /// Hay otro niño que salió antes que Randy
}

int localiza(int x) {
  if (a->sig != NULL) {  /// Si hay alguien más?
    temp = a;
    a = a->sig;
  }
}

int main() {
  p = (mesa *)malloc(sizeof(mesa));
  p->sig = NULL;
  a = (mesa *)malloc(sizeof(mesa));
  a->sig = NULL;
  temp = (mesa *)malloc(sizeof(mesa));
  temp->sig = NULL;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {  /// Agrega a todos
    alta(i);
  }
  a = p;

  while (1) {  /// Ciclo infinito, hasta encontrar a Randy que es el 1, break
    a = a->sig;
    for (int i = 1; i <= k; i++) {
      localiza(i);
    }
    if (a->num == 1) break;  /// Se llegó a Randy
    baja();
  }

  cout << c;  /// Cantidad de niños que salieron antes que Randy

  return 0;
}
