#include <iostream>

using namespace std;

int fila[10000];
int n, t, x, f, l, s;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    switch (x) {
      case 1:
        cin >> t;
        fila[l] = t;
        l++;
        break;
      case 2:
        if (f < l) {
          s += fila[f];
          f++;
        }
        break;
      case 3:
        cout << l - f << endl;
        break;
      case 4:
        cout << s << endl;
        break;
    }
  }
  return 0;
}
