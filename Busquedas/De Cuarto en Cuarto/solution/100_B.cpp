#include "DeCuartoEnCuarto.h"

// Main
//	int siguienteCuarto(int n)
//	void move(int c)
//	void regresa()
bool ok = false;
bool memo[200002];
void Player1(int x, int y) {
  if (memo[x]) return;
  memo[x] = true;
  if (x == y) {
    ok = true;
    return;
  }
  if (ok) return;
  int a = siguienteCuarto(1), b = siguienteCuarto(2);
  if (!memo[a] && !ok) {
    move(a);
    Player1(a, y);
    if (!ok) regresa();
  }
  if (!memo[b] && !ok) {
    move(b);
    Player1(b, y);
    if (!ok) regresa();
  }
}
