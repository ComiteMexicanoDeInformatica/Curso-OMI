#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <queue>
#include <random>
#include <sstream>
#include <string>

using namespace std;
void solucion(string entrada, string salida);
int getPos(int fila, int col, int columnas) {
  return ((fila * columnas) + (col + 1));
}
int getPosFila(int pos, int columnas) { return ((pos - 1) / columnas); }
int getPosColumna(int pos, int columnas) { return ((pos - 1) % columnas); }
int main() {
  queue<int> pendientes;
  char mapa[102][102];
  int pasos[102][102];
  int walls;
  int distComida;
  int comida = 0;
  int filas, columnas;
  /**generador de aleatorios**/
  random_device rd;
  mt19937 gen(rd());
  /**Ciclo para generar los casos en archivos .in**/
  uniform_int_distribution<long long> dis(1, 100);
  // generate rows quantity
  // int filas = dis(gen);
  // generate cols quantity
  // int columnas = dis(gen);7
  // cout << "filas, columnas, paredes, distanciaComida"<< endl;
  for (int n = 0; n < 10; ++n) {
    int comida = 0;

    cin >> filas;
    cin >> columnas;
    cin >> walls;
    cin >> distComida;
    uniform_int_distribution<> posDis(1, filas * columnas);
    // init map
    for (int i = 0; i < filas; i++) {
      for (int j = 0; j < columnas; j++) {
        mapa[i][j] = '.';
        pasos[i][j] = filas * columnas + 1;
      }
    }
    // generate walls

    // walls = filas*columnas/(7);
    for (int i = 0; i < walls; i++) {
      int aux = posDis(gen);
      mapa[getPosFila(aux, columnas)][getPosColumna(aux, columnas)] = '#';
    }

    // generate PacManPosition
    int posPacman = posDis(gen);
    mapa[getPosFila(posPacman, columnas)][getPosColumna(posPacman, columnas)] =
        '.';
    pasos[getPosFila(posPacman, columnas)][getPosColumna(posPacman, columnas)] =
        0;
    pendientes.push(posPacman);
    while (!pendientes.empty()) {
      int f, c, cp, of, oc;
      cp = pendientes.front();
      pendientes.pop();
      f = getPosFila(cp, columnas);
      c = getPosColumna(cp, columnas);
      // norte
      if (f >= 1) {
        of = -1;
        oc = 0;
        if (mapa[(f + of)][(c + oc)] == '.' &&
            pasos[(f + of)][(c + oc)] > (filas * columnas)) {
          pasos[(f + of)][(c + oc)] = pasos[f][c] + 1;
          pendientes.push(getPos((f + of), (c + oc), columnas));
        }
      }
      // sur
      if (f < (filas - 1)) {
        of = 1;
        oc = 0;
        if (mapa[(f + of)][(c + oc)] == '.' &&
            pasos[(f + of)][(c + oc)] > (filas * columnas)) {
          pasos[(f + of)][(c + oc)] = pasos[f][c] + 1;
          pendientes.push(getPos((f + of), (c + oc), columnas));
        }
      }
      // oeste
      if (c >= 1) {
        of = 0;
        oc = -1;
        if (mapa[(f + of)][(c + oc)] == '.' &&
            pasos[(f + of)][(c + oc)] > (filas * columnas)) {
          pasos[(f + of)][(c + oc)] = pasos[f][c] + 1;
          pendientes.push(getPos((f + of), (c + oc), columnas));
        }
      }
      // este
      if (c < (columnas - 1)) {
        of = 0;
        oc = 1;
        if (mapa[(f + of)][(c + oc)] == '.' &&
            pasos[(f + of)][(c + oc)] > (filas * columnas)) {
          pasos[(f + of)][(c + oc)] = pasos[f][c] + 1;
          pendientes.push(getPos((f + of), (c + oc), columnas));
        }
      }
    }
    comida = -1;
    for (int i = 0; i < filas; i++) {
      for (int j = 0; j < columnas; j++) {
        if (pasos[i][j] == distComida && comida == -1) {
          mapa[i][j] = 'C';
          comida = distComida;
        } else if (pasos[i][j] > distComida && mapa[i][j] == '.' &&
                   distComida != -1) {
          mapa[i][j] = 'F';
        }
      }
    }

    ofstream in;
    stringstream ss;
    ss << n + 1;
    string str = ss.str();
    in.open(str + ".in");
    /** inicia tu codigo para generar el caso**/
    in << filas << " " << columnas << " " << posPacman << " " << comida << endl;
    for (int i = 0; i < filas; i++) {
      for (int j = 0; j < columnas; j++) {
        in << mapa[i][j];
      }
      in << endl;
    }
    /**termina tu código para generar el caso**/
    in.close();
    in.open(str + ".out");
    /** inicia tu codigo para generar el caso**/
    in.close();
  }
  return 0;
}
