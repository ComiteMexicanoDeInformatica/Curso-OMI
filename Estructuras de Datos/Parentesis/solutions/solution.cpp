#include <cstring>
#include <iostream>

using namespace std;
int pila[1000000];
string k;
int main() {
  int x = 0, y = 0;

  cin >> k;

  while (x != k.size()) {
    if (k[x] == '(') {
      pila[y] = 1;
      y++;
    } else {
      pila[y] = 0;
      y--;
      if (y < 0) {
        x = -1;
        break;
      }
    }
    x++;
  }
  if (x == -1) {
    cout << "NO";
  } else {
    if (y == 0)
      cout << "SI";
    else
      cout << "NO";
  }
}
