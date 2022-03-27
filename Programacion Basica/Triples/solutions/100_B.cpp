#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<ll> sol;
ll v[100002];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    if (v[i] % 3 == 0) sol.push_back(i + 1);
  }
  if (!(int)sol.size()) {
    cout << "no hay triples\n";
    return 0;
  }
  cout << (int)sol.size() << "\n";
  for (int i = 0; i < (int)sol.size(); i++) cout << sol[i] << " ";
  cout << "\n";
}
