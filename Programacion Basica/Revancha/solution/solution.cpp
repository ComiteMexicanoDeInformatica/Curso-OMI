#include <iostream>

using namespace std;

int main() {
  int n, b, total, minimo = 999999999, maximo = -1;
  cin >> n;
  total = 0;

  for (int i = 0; i != n; i++) {
    cin >> b;
    total += b;
    minimo = min(minimo, b);
    maximo = max(maximo, b);
  }

  int promedio = total / n;
  cout << minimo << " " << maximo << " " << promedio;
}
