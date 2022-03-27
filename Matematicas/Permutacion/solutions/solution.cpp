#include <stdio.h>

#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int troy[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
int pos[20];
int main() {
  int a, b, c, d, y, z, res = 999999999, x = 0;
  while (x != 9) {
    cin >> pos[x];
    x++;
  }
  // sort(troy,troy+12);
  while (next_permutation(troy, troy + 9)) {
    x = 0;
    a = 0;
    b = 0;
    c = 0;
    while (x != 9) {
      if (x % 3 == 0) {
        a += pos[troy[x]];
      }
      if (x % 3 == 1) {
        b += pos[troy[x]];
      }
      if (x % 3 == 2) {
        c += pos[troy[x]];
      }
      x++;
    }
    y = max(a, b);
    y = max(y, c);

    x = min(a, b);
    x = min(x, c);

    res = min(res, y - x);
  }
  x = 0;
  a = 0;
  b = 0;
  c = 0;
  while (x != 9) {
    if (x % 3 == 0) {
      a += pos[troy[x]];
    }
    if (x % 3 == 1) {
      b += pos[troy[x]];
    }
    if (x % 3 == 2) {
      c += pos[troy[x]];
    }
    x++;
  }
  y = max(a, b);
  y = max(y, c);
  x = min(a, b);
  x = min(x, c);
  res = min(res, y - x);
  cout << res;
}
