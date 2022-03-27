#include <stdlib.h>

#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>

using namespace std;

void solucion(string entrada, string salida) {
  /**inicia la redirección de cin y cout. NO BORRAR**/
  std::ifstream in(entrada);
  std::streambuf *cinbuf = std::cin.rdbuf();
  std::cin.rdbuf(in.rdbuf());

  std::ofstream out(salida);
  std::streambuf *coutbuf = std::cout.rdbuf();
  std::cout.rdbuf(out.rdbuf());
  /**termina la redirección de cin y cout**/

  /** Solucion **/
  string palabra;
  bool esPalindromo = true;
  cin >> palabra;

  for (int i = 0; i < palabra.size(); i++)
    if (palabra[i] != palabra[palabra.size() - 1 - i]) esPalindromo = false;

  if (esPalindromo)
    cout << "Si";
  else
    cout << "No";
  cout << endl;
}

int main() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dis1(97, 122);
  /**Ciclo para generar los casos en archivos .in**/
  int tamPalabras[20] = {5,   5,   10,  10,  20,  20,  50,  50,  100,  100,
                         200, 200, 300, 300, 500, 500, 750, 750, 1000, 1000};
  for (int n = 0; n < 20; ++n) {
    ofstream in;
    stringstream ss;
    ss << n + 1;
    string str = ss.str();
    in.open(str + ".in");
    /** inicia tu codigo para generar el caso **/
    uniform_int_distribution<> dis2(1, tamPalabras[n]);

    int tam = dis2(gen);
    char palabra[tam + 1];
    /** Crea palabras
     *   impares palabras palindromas **/
    if (n % 2) {
      int t = tam / 2 + (tam & 1);
      for (int x = 0; x < t; x++)
        palabra[x] = palabra[tam - x - 1] = ((char)dis1(gen));
    } else /** pares crea palabras no necesariamente palindromas **/
    {
      for (int x = 0; x < tam; x++) palabra[x] = ((char)dis1(gen));
    }
    palabra[tam] = '\0';
    in << palabra << endl;
    /** termina tu código para generar el caso **/

    in.close();
    solucion(str + ".in", str + ".out");
  }
  return 0;
}
