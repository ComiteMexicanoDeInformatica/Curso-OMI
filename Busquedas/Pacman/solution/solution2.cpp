#include <queue>
#include <utility>

#include "Pacman.h"
using namespace std;

#define MAXN 1000000
typedef pair<int, int> pii;

bool vis[MAXN];
queue<pii> cola;
char dir[4] = {'n', 's', 'e', 'o'};

int buscaComida(int pos) {
  cola.push(pii(pos, 0));
  vis[pos] = true;

  while (!cola.empty()) {
    pii actual = cola.front();
    cola.pop();

    if (hayComida(actual.first)) return actual.second;

    for (int i = 0; i < 4; i++) {
      int sig = esPosibleAvanzar(actual.first, dir[i]);
      if (sig != -1 && !vis[sig]) {
        cola.push(pii(sig, actual.second + 1));
        vis[sig] = true;
      }
    }
  }

  return -1;
}
