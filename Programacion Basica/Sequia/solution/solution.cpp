#include <iostream>

using namespace std;
int n, c, lluvia, total, r;
bool lleno = false;
int main() {
  cin >> n >> c;
  for (int d = 1; d <= n; d++) {
    cin >> lluvia;
    total += lluvia;
    if (total >= c && !lleno) {
      r = d;         // respuesta de días en que se llenó
      lleno = true;  // no se requiere continuar
    }
  }
  cout << r;
  return 0;
}
