#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <stack>
#include <utility>

#include "DeCuartoEnCuarto.h"
#define p1 first
#define p2 second
using namespace std;

long long num_moves = 0;
int num_nodos, ini, fin;
stack<int> camino;
int e[500010][3];

int siguienteCuarto(int n) {
  if (n < 1 || n > 2 || camino.empty()) return -1;
  return e[camino.top()][n];
}

void move(int c) {
  if (camino.empty() || (e[camino.top()][1] != c && e[camino.top()][2] != c)) {
    printf("0.0");
    exit(0);
  }

  camino.push(c);
  num_moves++;
  return;
}

void regresa() {
  if (camino.size() <= 1) {
    printf("0.0");
    exit(0);
  }
  camino.pop();
  return;
}

int main() {
  scanf("%d %d %d", &num_nodos, &ini, &fin);

  for (int i = 1; i <= num_nodos; i++) {
    scanf("%d %d", &e[i][1], &e[i][2]);
  }

  camino.push(ini);

  Player1(ini, fin);

  if (camino.empty() || camino.top() != fin) {
    printf("0.0");
    return 0;
  }

  if (num_moves <= num_nodos) {
    printf("1.0");
  }
  if (num_moves > num_nodos && num_moves <= 2 * num_nodos) {
    printf("0.5");
  }
  if (num_moves > 2 * num_nodos) {
    printf("0.0");
  }
  return 0;
}
