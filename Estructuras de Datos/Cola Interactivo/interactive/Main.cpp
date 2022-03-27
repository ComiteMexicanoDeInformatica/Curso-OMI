#include <iomanip>
#include <iostream>

#include "ColaInteractivo.h"

using namespace std;
int arreglo2[10000];
int ini, fin;
void agrega2(int n) {
  arreglo2[fin] = n;
  fin++;
}

int saca2() {
  if (fin - ini == 0) {
    return -1;
  } else {
    ini++;
    return arreglo2[ini - 1];
  }
}

int main() {
  cin.sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  cerr << n << endl;
  int r = 0;
  for (int i = 0; i < n; i++) {
    char a;
    cin >> a;

    if (a == 'a') {
      int value;
      cin >> value;

      agrega(value);
      agrega2(value);
    } else if (a == 's') {
      if (saca() != saca2()) {
        r = 1;
      }
    }
  }
  cout << r;
}
