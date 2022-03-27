#include <iostream>

int main() {
  int n, d, m, r;
  std::cin >> n >> d;

  if (n < d) {
    std::cout << n << "/" << d << std;
    endl;
  } else {
    m = n / d;
    r = n % d;

    if (r == 0) {
      std::cout << m << std::endl;
    } else {
      std::cout << m << " " << r << "/" << d << std;
      endl;
    }
  }
}