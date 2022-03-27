#include <bits/stdc++.h>
using namespace std;
#define MAX 10002
#define ll long long
ll n, p;
ll v[MAX];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> p;
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  while (p--) {
    int x;
    cin >> x;
    cout << v[x] << "\n";
  }
}
