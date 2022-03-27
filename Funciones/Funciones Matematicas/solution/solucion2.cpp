#include <bits/stdc++.h>
#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  float a1, b1;
  int f, k;
  cin >> f;
  for (int i = 0; i != f; i++) {
    cin >> k;
    if (k == 1) {
      cin >> a;
      if (a < 0) {
        a *= -1;
      }
      cout << a << endl;
    }
    if (k == 2) {
      cin >> a >> b;
      cout << max(a, b) << endl;
    }
    if (k == 3) {
      cin >> a >> b;
      cout << min(a, b) << endl;
    }
    if (k == 4) {
      cin >> a1;
      a1 = sqrt(a1);
      /*
      a1*=100;
      int kora=a1;
      a1=kora;
      a1/=100;
      */
      cout << setprecision(2) << fixed;
      cout << a1 << endl;
    }
    if (k == 5) {
      cin >> a >> b;
      c = a;
      if (b == 0) {
        cout << 1 << endl;
      } else {
        for (int j = 1; j != b; j++) {
          a *= c;
        }
        cout << a << endl;
      }
    }
  }
}
