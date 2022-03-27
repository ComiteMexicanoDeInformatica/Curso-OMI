#include <stdlib.h>

#include <algorithm>
#include <ctime>
#include <iostream>

#include "recuerdame.h"

using namespace std;

int main() {
  int numero;
  int arr[100];
  int preguntas;

  srand(time(NULL));

  cin >> numero;

  cout << "el numero que quiero que recuerdes es: " << numero << endl;

  recuerdame(numero);

  preguntas = rand() % 99 + 2;

  bool correcto = true;

  for (int i = 0; i < preguntas; i++) {
    int x = rand() % 10 + 1;
    cout << "me puedes recordar si soy  " << x << "?" << endl;

    bool respuesta = soy(x);

    if (respuesta) {
      cout << "si soy";
    } else {
      cout << "no soy";
    }

    correcto &= respuesta == (x == numero);
    cout << endl;
  }

  if (correcto) {
    cout << "felicidades contestaste todas las respuestas correctamente";
  } else {
    cout << "no contestaste correctamente, revisa tu solucion, y recuerda que "
            "puedes utilizar variables globales";
  }
  cout << endl;
}
