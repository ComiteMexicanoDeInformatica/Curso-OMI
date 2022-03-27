#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>

using namespace std;
void solucion(string entrada, string salida);
int main() {
  /**Arreglo para definir los limites de cada caso**/
  int casos[10] = {100, 100, 500, 500, 1000, 1000, 5000, 5000, 10000, 10000};

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
    /** inicia tu codigo para generar el caso**/
    if (n % 2 == 0)  // en casos pares no hay sobreventa de tickets
    {
      /**la función dis establece el límite inferior y superior del random**/
      std::uniform_int_distribution<> dis(1, sqrt(casos[n]));
      int r = dis(gen);
      int s = dis(gen);
      in << r << " " << s << endl << casos[n];
    } else  // en casos impares hay sobreventa de tickets
    {
      std::uniform_int_distribution<> dis(casos[n] / 2 + 1, casos[n]);
      int r = dis(gen);
      int s = dis(gen);
      int sobreventa = 1000000000 - r * s;
      in << r << " " << s << endl << sobreventa;
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

  /**la solución del problema**/
  int n, d, a, b;
  cin >> n >> d;

  a = n / d;
  b = n % d;

  if (b != 0) {
    std::cout << a << ' ' << b << '/' << d << std::endl;
  } else {
    std::cout << a << std::endl;
  }
}
