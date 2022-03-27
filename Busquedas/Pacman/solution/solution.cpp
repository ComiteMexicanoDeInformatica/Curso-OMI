#include <queue>

#include "Pacman.h"

using namespace std;

bool flag[10000];
int pasos[10000];
queue<int> busca;

int buscaComida(int pos) {
  busca.push(pos);
  pasos[pos] = 0;
  flag[pos] = true;

  while (!busca.empty()) {
    int actual = busca.front();

    if (hayComida(actual)) {
      return pasos[actual];
    }

    int norte = esPosibleAvanzar(actual, 'n');
    if (norte != -1 && !flag[norte]) {
      busca.push(norte);
      pasos[norte] = pasos[actual] + 1;
      flag[norte] = true;
    }

    int oeste = esPosibleAvanzar(actual, 'o');
    if (oeste != -1 && !flag[oeste]) {
      busca.push(oeste);
      pasos[oeste] = pasos[actual] + 1;
      flag[oeste] = true;
    }

    int sur = esPosibleAvanzar(actual, 's');
    if (sur != -1 && !flag[sur]) {
      busca.push(sur);
      pasos[sur] = pasos[actual] + 1;
      flag[sur] = true;
    }

    int este = esPosibleAvanzar(actual, 'e');
    if (este != -1 && !flag[este]) {
      busca.push(este);
      pasos[este] = pasos[actual] + 1;
      flag[este] = true;
    }

    busca.pop();
  }

  return -1;
}
