#include <iostream>
#include <stack>
using namespace std;

struct pista {
  int fila, columna;
};

stack<pista> pila;
pista mapa[50][50];
pista huella;
bool visitados[50][50];
int N, F, C;
int caminos = 0;
int main() {
  cin >> N;
  cin >> F >> C;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) cin >> mapa[i][j].fila >> mapa[i][j].columna;
  /**Tratar de iniciar un camino desde cada casilla del mapa**/
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      /**Hacemos un ciclo para seguir las pistas hasta encontrar el destino o
      bien, llegar a una casilla que no lleva a ninguna parte. Necesitamos
      marcar las casillas por las que ya pasamos para evitar pisar una casilla
      más de una vez en el mismo camino, si esto ocurriera tendríamos un ciclo
      infinito.
      **/
      if (i == F && j == C) continue;
      huella.fila = i;
      huella.columna = j;
      while (!(huella.fila == F && huella.columna == C) &&
             !(huella.fila == -1 && huella.columna == -1) &&
             (!visitados[huella.fila][huella.columna])) {
        /**marcamos la casilla como visitada, metemos la coordenada a la pila y
         * pasamos a la siguiente pista**/
        visitados[huella.fila][huella.columna] = true;
        pila.push(huella);
        huella = mapa[huella.fila][huella.columna];
      }
      if (huella.fila == F && huella.columna == C) caminos++;
      /**Es necesario quitar las marcas que dejamos el camino explorado, como
      todas están en la pila, sacamos una a una y desmarcamos las casillas para
      que puedan ser usadas por otro camino.
      **/

      while (!pila.empty()) {
        huella = pila.top();
        pila.pop();
        visitados[huella.fila][huella.columna] = false;
      }
    }
  cout << caminos;
  return 0;
}
