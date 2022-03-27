#include <iostream>

using namespace std;

int main() {
  int a, b, c, n, aux, contador = 0;

  cin >> b >> c >> n;
  aux = b % c;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a % c == aux) {
      contador++;
    }
  }

  cout << contador;

  return 0;
}
