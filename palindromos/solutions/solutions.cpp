#include <iostream>
using namespace std;
int main() {
    string palabra;
    bool esPalindromo = true;
    cin >> palabra;

    for (int i = 0; i < palabra.size(); i++)
        if (palabra[i] != palabra[palabra.size() - 1 - i])
            esPalindromo = false;

    if (esPalindromo)
        cout << "Si";
    else
        cout << "No";
}
