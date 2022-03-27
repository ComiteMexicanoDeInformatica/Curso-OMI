#include <bits/stdc++.h>
using namespace std;
#define MAX 2002
int x, y;
int n, c, k;
char m[MAX][MAX];
bool vis[MAX][MAX];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
void dfs(int i, int j, int t) {
  if (i >= n || j >= c || i < 0 || j < 0 || m[i][j] == '#') return;
  if (t == 0) return;
  if (vis[i][j]) return;
  vis[i][j] = true;
  m[i][j] = '*';
  for (int idx = 0; idx < 4; idx++) {
    dfs(i + dx[idx], j + dy[idx], k - 1);
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> c >> k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < c; j++) {
      cin >> m[i][j];
      if (m[i][j] == '$') {
        x = i;
        y = j;
      }
    }
  }
  k = min(k, (max(n, c)));
  dfs(x, y, k);
  m[x][y] = '$';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < c; j++) {
      cout << m[i][j];
    }
    cout << "\n";
  }
}
