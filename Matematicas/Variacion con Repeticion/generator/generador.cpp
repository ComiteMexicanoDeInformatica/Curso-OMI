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
  int N[16] = {2, 3, 3, 4, 5, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10, 10};
  int K[16] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
  long long J;
  long long maxJ;
  long long ds;

  /**generador de aleatorios**/
  std::random_device rd;
  std::mt19937 gen(rd());

  /**Ciclo para generar los casos en archivos .in**/

  for (int c = 0; c < 16; ++c) {
    ofstream in;
    stringstream ss;
    ss << c + 1;
    string str = ss.str();
    in.open(str + ".in");

    in << N[c] << " " << K[c] << " ";

    maxJ = (long long)pow(N[c], K[c]);
    std::uniform_int_distribution<long long> disInt(
        1, max((long long)2, maxJ / 10));
    ds = min((long long)100000, disInt(gen));
    std::normal_distribution<double> normal(maxJ / 2, (double)ds);
    for (int i = 1; i <= ds; i++) J = (long long)normal(gen);
    in << J << endl;
    in.close();
  }
  return 0;
}
