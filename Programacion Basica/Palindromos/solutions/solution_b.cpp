#include <iostream>
using namespace std;
int main() {
  string palabra;
  bool esPalindromo = true;
  cin >> palabra;

  /**Pasamos la palabra a minusculas**/
  for (int i = 0; i < palabra.size(); i++)
    if ('A' <= palabra[i] && palabra[i] <= 'Z') palabra[i] += 'a' - 'A';

  /**Comparamos el primer caracter con el ultimo y asi sucesivamente**/
  for (int i = 0; i < palabra.size(); i++)
    if (palabra[i] != palabra[palabra.size() - 1 - i])
      esPalindromo = false;  // Encontramos una pareja donde difieren

  if (esPalindromo)
    cout << "Si";
  else
    cout << "No";
}
