#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  srand(time(NULL));
  freopen("10.in", "w", stdout);
  int n = rand() % 1000;
  cout << n << endl;
  for (int i = 0; i < n; i++) {
    cout << i << " ";
  }
  cout << "\n";
}
