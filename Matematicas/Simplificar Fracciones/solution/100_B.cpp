#include <bits/stdc++.h>
using namespace std;
#define MAX 102
#define ll long long
ll a, b;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    ll mcd = __gcd(a, b);
    a /= mcd;
    b /= mcd;
    cout << a << " " << b << "\n";
  }
}
