#include <math.h>
#include <stdlib.h>

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int op, m, n1, n2;
  double raiz;
  cin >> m;
  for (int i = 1; i <= m; i++) {
    cin >> op;
    switch (op) {
      case 1:
        cin >> n1;
        cout << abs(n1) << endl;
        break;
      case 2:
        cin >> n1 >> n2;
        cout << max(n1, n2) << endl;
        break;
      case 3:
        cin >> n1 >> n2;
        cout << min(n1, n2) << endl;
        break;
      case 4:
        cin >> n1;
        raiz = sqrt((double)n1);
        cout << fixed << setprecision(2) << raiz << endl;
        break;
      case 5:
        cin >> n1 >> n2;
        cout << (long long)pow(n1, n2) << endl;
        break;
    }
  }
  return 0;
}
