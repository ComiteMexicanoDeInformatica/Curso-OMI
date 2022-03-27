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
  int casos[10] = {5, 50, 100, 200, 500, 1000, 1500, 2500, 5000, 10000};

  /**generador de aleatorios**/
  std::random_device rd;
  std::mt19937 gen(rd());

  /**Ciclo para generar los casos en archivos .in**/
  std::uniform_int_distribution<> disInt(1, INT_MAX);
  std::poisson_distribution<> dis4(1);
  std::uniform_int_distribution<> dis1000(1, 1000);
  for (int n = 0; n < 10; ++n) {
    ofstream in;
    stringstream ss;
    ss << n + 1;
    string str = ss.str();
    in.open(str + ".in");
    in << casos[n] << endl;

    int m = 0;
    while (m < casos[n]) {
      int operacion, t;
      operacion = dis4(gen);
      if (operacion < 0 or operacion >= 4) continue;
      operacion++;
      m++;
      switch (operacion) {
        case 1:
          t = dis1000(gen);
          in << operacion << " " << t << endl;
          break;
        case 2:
        case 3:
        case 4:
          in << operacion << endl;
          break;
      }
    }
    /**termina tu código para generar el caso**/
    in.close();
  }
  return 0;
}
