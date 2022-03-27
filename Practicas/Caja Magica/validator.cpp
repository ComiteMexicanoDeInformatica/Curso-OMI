#include <fstream>
#include <iostream>

using namespace std;

int main() {
  // lee "data.in" para obtener la entrada original.
  int r1, r2, c1, c2, d1, d2;
  bool sihay = false;
  {
    ifstream entrada_original("data.in", ifstream::in);
    entrada_original >> r1 >> r2;
    entrada_original >> c1 >> c2;
    entrada_original >> d1 >> d2;
  }

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      for (int g = 1; g < 10; g++) {
        for (int x = 1; x < 10; x++) {
          if (i == j || i == g || i == x || j == g || j == x || x == g)
            continue;
          if (x + g == r2 && x + j == c1 && x + i == d2 && g + i == c2 &&
              g + j == d1 && j + i == r1)
            sihay = true;
        }
      }
    }
  }

  // lee entrada estándar para obtener la salida del concursante.
  int a, b, c, d;
  if (sihay) {
    if (!(cin >> a >> b >> c >> d)) {
      // cualquier cosa que imprimas a cerr se ignora, pero es útil
      // para depurar con debug-rejudge.
      cerr << "Error leyendo la salida del concursante" << endl;
      cout << 0.0 << endl;
      return 0;
    }
  } else {
    if (!(cin >> a)) {
      // cualquier cosa que imprimas a cerr se ignora, pero es útil
      // para depurar con debug-rejudge.
      cerr << "Error leyendo la salida del concursante" << endl;
      cout << 0.0 << endl;
      return 0;
    }
  }

  // determina si la respuesta es correcta.
  if ((a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 &&
       a + d == d1 && b + c == d2) ||
      (a == -1 && sihay == false)) {
    cout << 1.0 << endl;
  } else {
    cerr << "Salida incorrecta" << endl;
    cout << 0.0 << endl;
  }
  return 0;
}
