#include <bits/stdc++.h>
using namespace std;
string v;
int n;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> v;
  n = v.size();
  for (int i = 0, j = n - 1; i < j; i++, j--) {
    if (v[i] != v[j]) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Si\n";
}
