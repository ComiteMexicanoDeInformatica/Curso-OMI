#include <iostream>
using namespace std;

int main() {
  int d, w, trad;
  cin >> d >> w;

  int dicc1[10001];
  int dicc2[10001];

  for (int i = 0; i < d; i++) {
    cin >> dicc1[i] >> dicc2[i];
  }

  int checa = 0;

  for (int i = 0; i < w; i++) {
    cin >> trad;

    checa = 0;

    /// buscamos en donde se encuentra trad dentro de dicc1
    for (int j = 0; j < d; j++) {
      if (dicc1[j] == trad) {
        cout << dicc2[j] << endl;  /// se garantiza que solo aparecera una vez
        checa = 1;  /// significa que existe trad en nuestro diccionario
      }
    }

    if (checa == 0) {
      cout << "C?" << endl;
    }
  }
}
