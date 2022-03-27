#include <stdlib.h>

#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int c = 0;
  int a[50000];

  for (int i = 0; i < n; i++) {
    int r;
    std::cin >> r;

    if (r % 3 == 0) {
      a[c] = i + 1;
      c++;
    }
  }

  if (c > 0) {
    for (int i = 0; i < c; i++) {
      std::cout << a[i] << " ";
    }
  } else {
    std::cout << "no hay triples";
  }

  return 0;
}