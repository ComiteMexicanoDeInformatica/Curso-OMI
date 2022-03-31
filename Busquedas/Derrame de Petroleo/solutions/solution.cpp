#include <iostream>
#define maxcola 4000000
using namespace std;
#define optimizar_io            \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
struct estado {
  int fila, columna, nivel;
};

struct cola_circular {
  estado v[2000 * 2000];
  int inicio, fin, cont;
  cola_circular() {
    inicio = 0;
    fin = -1;
    cont = 0;
  }

  void insertar(estado edo) {
    fin = (fin + 1) % maxcola;
    v[fin] = edo;
    cont++;
  }
  estado consultar() { return v[inicio]; }
  void extraer() {
    inicio = (inicio + 1) % maxcola;
    cont--;
  }
  bool vacio() { return cont == 0; }
};

char mapa[2000][2000], salto;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int R, C, K;
estado padre, hijo;
cola_circular nodos;

bool estadoValido(estado edo) {
  /**Si se sale del mapa no es válido**/
  if (edo.fila < 0 || edo.fila >= R || edo.columna < 0 || edo.columna >= C)
    return false;
  /**Si es una pared '#', el inicio '$' o una casilla que ya fue explorada '*',
   * no es válido**/
  if (mapa[edo.fila][edo.columna] == '#' ||
      mapa[edo.fila][edo.columna] == '$' || mapa[edo.fila][edo.columna] == '*')
    return false;
  /**Si su nivel de profundidad en el árbol es mayor que K, no es válido**/
  if (edo.nivel > K) return false;
  return true;
}

int main() {
  optimizar_io cin >> R >> C >> K;
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      cin >> mapa[i][j];
      if (mapa[i][j] == '$') {
        padre.fila = i;
        padre.columna = j;
        padre.nivel = 0;
      }
    }
  }

  /**Busqueda en amplitud. Generar el estado padre y marcarlo como procesado
     La marca en esta solución se hará sobre el mapa con caracteres '$', '#' y
  '*'
  **/
  nodos.insertar(padre);
  /**El inicio ya está marcado con '$' **/

  while (!nodos.vacio()) {
    /**extraer el siguiente nodo de la cola, generar sus hijos e insertarlos,
     * solo si son estados válidos**/
    padre = nodos.consultar();
    nodos.extraer();
    padre.nivel++;
    for (int dir = 0; dir < 4; dir++) {
      hijo = padre;
      hijo.fila += dy[dir];
      hijo.columna += dx[dir];
      if (estadoValido(hijo)) {
        mapa[hijo.fila][hijo.columna] = '*';
        nodos.insertar(hijo);
      }
    }
  }
  /**Imprimir el mapa resultante**/
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) cout << mapa[i][j];
    cout << endl;
  }
  return 0;
}
