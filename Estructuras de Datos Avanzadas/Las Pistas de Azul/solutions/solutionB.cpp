#include <iostream>
#include <stack>
#define MAX 50

using namespace std;

struct coord {
  int a, b;
};

coord house[MAX][MAX];
bool flag[MAX][MAX];
int N, a, b, x, y, cont;
coord aux;
stack<coord> path;

bool valid(coord c) {
  if (c.a == -1 && c.b == -1) return false;
  if (flag[c.a][c.b]) return false;
  return true;
}

int main() {
  cin >> N;
  cin >> x >> y;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a >> b;
      house[i][j].a = a;
      house[i][j].b = b;
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      aux.a = i;
      aux.b = j;
      if (i == x && j == y) continue;

      while (valid(aux)) {
        flag[aux.a][aux.b] = true;
        path.push(aux);
        aux = house[aux.a][aux.b];
        // cout<<'(' <<aux.a << ',' << aux.b <<") ";
        if (aux.a == x && aux.b == y) {
          cont++;
          break;
        }
      }
      // cout<<endl;

      while (!path.empty()) {
        aux = path.top();
        flag[aux.a][aux.b] = false;
        path.pop();
      }
    }
  }

  cout << cont;
}
