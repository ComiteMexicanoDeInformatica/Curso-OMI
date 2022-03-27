#include <iostream>

using namespace std;

int main() {
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      for (int g = 1; g < 10; g++) {
        for (int x = 1; x < 10; x++) {
          if (i == j || i == g || i == x || j == g || j == x || x == g)
            continue;
          if (x + g == r2 && x + j == c1 && x + i == d2 && g + i == c2 &&
              g + j == d1 && j + i == r1) {
            cout << j << " " << i << endl << x << " " << g << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << -1 << endl;
  return 0;
}