#include <stdlib>

int main() {
  int d, q;
  std::cin >> d >> q;

  for (int i = 0; i < d; ++i) {
    std::cin >> a1[i] >> a2[i];
  }

  for (int i = 0; i < q; ++i) {
    std::cin >> q;
    for (int j = 0; i < d; ++i) {
      if (a1[j] == q) {
        std::cout << a2[j] << std << endl;
      }
      if (j == d - 1) {
        std::cout << "C?" << std << endl;
      }
    }
  }
  return 0;
}