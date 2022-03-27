#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>

using namespace std;
void solucion(string entrada, string salida);
int main() {
  int maxN = 1000, maxC = 1000000000, maxVal = 1000000, val, sum;
  int n, c, l[1010];

  /**generador de aleatorios**/
  std::random_device rd;
  std::mt19937 gen(rd());

  /**Ciclo para generar los casos en archivos .in**/
  for (int i = 0; i < 10; ++i) {
    ofstream in;
    stringstream ss;
    ss << i + 1;
    string str = ss.str();
    in.open(str + ".in");
    /** inicia tu codigo para generar el caso**/
    std::uniform_int_distribution<> dis(1, maxN);
    n = dis(gen);

    sum = 0;
    std::uniform_int_distribution<> dis2(0, maxVal);
    for (int j = 0; j < n; j++) {
      val = dis2(gen);
      l[j] = val;
      sum += val;
    }

    std::uniform_int_distribution<> dis3(0, sum);
    c = dis3(gen);

    in << n << " " << c << endl;

    for (int j = 0; j < n; j++) in << l[j] << endl;
    /**termina tu c�digo para generar el caso**/

    in.close();
    solucion(str + ".in", str + ".out");
  }
  return 0;
}
/** funci�n que recibe el nombre del archivo .in y el archivo .out**/
void solucion(string entrada, string salida) {
  /**inicia la redirecci�n de cin y cout. NO BORRAR**/
  std::ifstream in(entrada);
  std::streambuf *cinbuf = std::cin.rdbuf();
  std::cin.rdbuf(in.rdbuf());

  std::ofstream out(salida);
  std::streambuf *coutbuf = std::cout.rdbuf();
  std::cout.rdbuf(out.rdbuf());
  /**termina la redirecci�n de cin y cout**/

  /**la soluci�n del problema**/
  int n_, c_, lluvia_, total_ = 0, r;
  bool band = false;
  cin >> n_ >> c_;
  for (int d = 1; d <= n_; d++) {
    cin >> lluvia_;
    total_ += lluvia_;
    if (total_ >= c_ && !band) {
      r = d;        // respuesta de d�as en que se llen�
      band = true;  // no se requiere continuar
    }
  }
  cout << r << endl;
}
