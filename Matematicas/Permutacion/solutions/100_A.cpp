#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll res;
vector<ll> v;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 0; i < 9; i++) {
    ll x;
    cin >> x;
    v.push_back(x);
  }
  res = (1LL << 60);
  sort(v.begin(), v.end());
  do {
    vector<ll> arr;
    ll s = 0;
    for (int i = 0; i < 9; i++) {
      if ((i + 1) % 3 == 0) {
        s += v[i];
        arr.push_back(s);
        s = 0;
      } else
        s += v[i];
    }
    sort(arr.begin(), arr.end());
    res = min(res, arr[2] - arr[0]);
  } while (next_permutation(v.begin(), v.end()));
  cout << res << "\n";
}
