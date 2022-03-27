#include <stdlib.h>

#include <algorithm>
#include <iostream>

#include "recuerdame.h"

using namespace std;

int main() {
  int numero;
  int arr[100];
  int preguntas;
  int semilla;

  cin >> numero >> semilla;

  srand(semilla);

  recuerdame(numero);

  preguntas = rand() % 99 + 2;

  bool correcto = true;

  for (int i = 0; i < preguntas; i++) {
    int x = rand() % 10 + 1;
    correcto &= (soy(x) == (x == numero));
  }

  cout << correcto << endl;
}
