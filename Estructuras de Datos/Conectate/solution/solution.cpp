#include <iostream>  // std::cout
#include <stack>     // std::stack
using namespace std;

const int maxN = 100000;
stack<int> arriba;
stack<int> abajo;
int placa[(2 * maxN)];
int salida[(2 * maxN)];
int siguiente[(2 + maxN)];
int n;
int push(int num) {
  int ar = maxN * 2;
  int ab = maxN * 2;
  int result = 0;
  if (!arriba.empty()) {
    ar = arriba.top();
  }
  if (!abajo.empty()) {
    ab = abajo.top();
  }
  if (ar > num && ab > num) {
    if (ar <= ab) {
      arriba.push(num);
      result = 1;
    } else {
      abajo.push(num);
      result = 2;
    }
  } else if (ar > num) {
    arriba.push(num);
    result = 1;
  } else if (ab > num) {
    abajo.push(num);
    result = 2;
  } else {
    result = -1;
  }
  return result;
}
int pop(int num) {
  int result = 0;

  if (!arriba.empty()) {
    if (arriba.top() == num) {
      arriba.pop();
      result = 1;
    }
  }
  if (!abajo.empty()) {
    if (abajo.top() == num) {
      abajo.pop();
      result = 2;
    }
  }
  return result;
}
int main() {
  int res = 0;
  bool esValido = true;
  // lee el valor de N
  cin >> n;
  n = 2 * n;
  // Lee el orden de los elementos en la placa
  for (int i = 0; i < n; i++) {
    cin >> placa[i];
    siguiente[placa[i]] = i;
  }
  for (int i = 0; i < n; i++) {
    // Quiero saber si es el número más cercano a la derecha
    if (siguiente[placa[i]] == i) {
      res = pop(i);
      salida[i] = res;
    } else {
      res = push(siguiente[placa[i]]);
      salida[i] = res;
      if (res == -1) {
        esValido = false;
        break;
      }
    }
  }
  if (esValido) {
    for (int i = 0; i < n; i++) {
      cout << salida[i] << endl;
    }
  } else {
    cout << 0 << endl;
  }
}
