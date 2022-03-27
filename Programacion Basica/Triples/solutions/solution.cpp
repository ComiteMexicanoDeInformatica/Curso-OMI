#include <iostream>

using namespace std;

int main() {
  int n, i = 0, x, m;
  cin >> n;
  int nums[n];
  for (x = 1; x <= n; x++) {
    cin >> m;
    if (m % 3 == 0) nums[i++] = x;
  }
  if (i) {
    cout << i << endl;
    for (x = 0; x < i; x++) cout << nums[x] << " ";
    cout << endl;
  } else
    cout << "No hay triples.\n";
  return 0;
}
