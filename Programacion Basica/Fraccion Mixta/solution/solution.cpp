#include <iostream>

using namespace std;

int main() {
  int n, d, a, b;
  cin >> n >> d;

  a = n / d;
  b = n % d;

  if (b != 0) {
    cout << a << ' ' << b << '/' << d << endl;
  } else {
    cout << a << endl;
  }
}
