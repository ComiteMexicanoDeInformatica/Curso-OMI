#include <bits/stdc++.h>
using namespace std;
#define MAX 102
#define ll long long
int n, m;
ll A[MAX];
ll B[MAX];
bool solve(int k) {
  for (int i = 0; i < n; i++) {
    if (k % A[i] != 0) return false;
  }
  for (int i = 0; i < m; i++) {
    if (B[i] % k != 0) return false;
  }
  return true;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }
  sort(A, A + n);
  sort(B, B + m);
  for (int i = A[n - 1]; i <= B[0]; i++) {
    if (solve(i)) cout << i << " ";
  }
  cout << "\n";
}
