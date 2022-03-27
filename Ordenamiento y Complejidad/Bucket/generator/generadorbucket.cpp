#include <stdio.h>
#include <stdlib.h>

#include <ctime>
#include <iostream>

using namespace std;

int main() {
  freopen("0.in", "w", stdout);
  srand(time(NULL));
  int x = 0, y, z;
  cout << 1;

  y = rand() % 1000;
  y++;
  cout << y << endl;
  while (x != y) {
    z = rand() % 100;
    cout << z << " ";
    x++;
  }
}
