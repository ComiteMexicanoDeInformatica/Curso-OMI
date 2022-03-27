#include <math.h>
#include <stdlib.h>

#include <fstream>
#include <iomanip>
#include <iostream>
#include <limits>
#include <random>
#include <sstream>
#include <string>

using namespace std;
void solucion(string entrada, string salida);
int main() {
  /**Arreglo para definir los limites de cada caso**/
  int casos[10] = {5, 10, 20, 30, 50, 100, 125, 250, 500, 1000};

  /**generador de aleatorios**/
  std::random_device rd;
  std::mt19937 gen(rd());

  /**Ciclo para generar los casos en archivos .in**/
  for (int n = 0; n < 10; ++n) {
    ofstream in;
    stringstream ss;
    ss << n + 1;
    string str = ss.str();
    in.open(str + ".in");
    in << casos[n] << endl;

    std::uniform_int_distribution<> disInt(1, INT_MAX);
    for (int m = 1; m <= casos[n]; m++) {
      int operacion;
      std::uniform_int_distribution<> dis(1, 5);
      operacion = dis(gen);
      if (operacion == 1) {
        std::uniform_int_distribution<> dis1(1, 10);
        int signo, num;
        signo = dis1(gen);
        num = disInt(gen);
        if (signo % 2 == 0)
          in << operacion << " " << num << endl;
        else
          in << operacion << " -" << num << endl;
      }
      if (operacion == 2 or operacion == 3) {
        int n1, n2;
        n1 = disInt(gen);
        n2 = disInt(gen);
        in << operacion << " " << n1 << " " << n2 << endl;
      }
      if (operacion == 4) {
        int num;
        num = disInt(gen);
        in << operacion << " " << num << endl;
      }
      if (operacion == 5) {
        int base;
        int pot;
        std::uniform_int_distribution<> dis1(1, 10);
        base = dis1(gen);
        pot = dis1(gen);
        in << operacion << " " << base << " " << pot << endl;
      }
    }
    /**termina tu código para generar el caso**/
    in.close();
    solucion(str + ".in", str + ".out");
  }
  return 0;
}
/** función que recibe el nombre del archivo .in y el archivo .out**/
void solucion(string entrada, string salida) {
  /**inicia la redirección de cin y cout. NO BORRAR**/
  std::ifstream in(entrada);
  std::streambuf *cinbuf = std::cin.rdbuf();
  std::cin.rdbuf(in.rdbuf());

  std::ofstream out(salida);
  std::streambuf *coutbuf = std::cout.rdbuf();
  std::cout.rdbuf(out.rdbuf());
  /**termina la redirección de cin y cout**/

  int op, m, n1, n2;
  double raiz;
  cin >> m;
  for (int i = 1; i <= m; i++) {
    cin >> op;
    switch (op) {
      case 1:
        cin >> n1;
        cout << abs(n1) << endl;
        break;
      case 2:
        cin >> n1 >> n2;
        cout << max(n1, n2) << endl;
        break;
      case 3:
        cin >> n1 >> n2;
        cout << min(n1, n2) << endl;
        break;
      case 4:
        cin >> n1;
        raiz = sqrt(n1);
        cout << fixed << setprecision(2) << raiz << endl;
        break;
      case 5:
        cin >> n1 >> n2;
        cout << (int)pow(n1, n2) << endl;
        break;
    }
  }
}
