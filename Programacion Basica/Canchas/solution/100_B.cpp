#include <bits/stdc++.h>
using namespace std;
int x_1, y_1, x_2, y_2;
int a_1, b_1, a_2, b_2;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> x_1 >> y_1 >> x_2 >> y_2;
  cin >> a_1 >> b_1 >> a_2 >> b_2;
  int s1 = (abs(x_1 - x_2) * abs(y_1 - y_2));
  int s2 = (abs(a_1 - a_2) * abs(b_1 - b_2));
  int res = s1 + s2;
  int a = max(x_1, a_1);
  int b = min(x_2, a_2);
  int c = max(y_1, b_1);
  int d = min(y_2, b_2);
  if (a < b && c < d) res -= ((b - a) * (d - c));
  cout << res << "\n";
}
