#include <stdio.h>

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int criba[1000001];
int main() {
  srand(time(NULL));
  int x = 2, y = 0, z;
  while (x != 1000000) {
    if (criba[x] == 0) {
      y = x;
      y += x;
      while (y <= 1000000) {
        criba[y] = 1;
        y += x;
      }
    }
    x++;
  }
  cin >> z;
  x = 0;
  while (x != z) {
    cin >> y;
    if (criba[y] == 0) {
      cout << "SI" << endl;
    } else {
      cout << "NO" << endl;
    }
    x++;
  }
}
