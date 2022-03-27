#include <bits/stdc++.h>
using namespace std;
int x, y;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int op;
    cin >> op;
    if (op == 1) {
      cin >> x;
      cout << abs(x) << "\n";
    } else if (op == 2) {
      cin >> x >> y;
      cout << max(x, y) << "\n";
    } else if (op == 3) {
      cin >> x >> y;
      cout << min(x, y) << "\n";
    } else if (op == 4) {
      int aux;
      cin >> aux;
      cout << setprecision(2) << fixed << sqrt(aux) << "\n";
    } else {
      long long aux, aux2;
      cin >> aux >> aux2;

      cout << (long long)pow(aux, aux2) << "\n";
    }
  }
}
