#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
using namespace std;

long long CoefBinom[51][51];
void Pascal();
void Solucion(int, ofstream&);

int main() {
    int casos[10] = {0, 1, 4, 7, 10, 15, 24, 33, 47, 50};
    Pascal();

    for (int i = 0; i < 10; i++) {
        stringstream archivo;
        archivo << i + 1;
        ofstream fin("../cases/" + archivo.str() + ".in");
        ofstream fout("../cases/" + archivo.str() + ".out");

        fin << casos[i];
        Solucion(casos[i], fout);

        fin.close();
        fout.close();
    }
}

/**Inicializamos los coeficientes binomiales usando
   la Identidad de Pascal**/
void Pascal() {
    for (int i = 0; i <= 50; i++) {
        CoefBinom[i][0] = 1;
        CoefBinom[i][i] = 1;
        for (int j = 1; j < i; j++)
            CoefBinom[i][j] = CoefBinom[i - 1][j - 1] + CoefBinom[i - 1][j];
    }
}

void Solucion(int n, ofstream &fout) {
    /**Los casos n = 0 y n = 1 los consideramos aparte**/
    if (n == 0)
        fout << "1";
    else if (n == 1)
        fout << "x+y";
    else {
        fout << "x^" << n << "+";
        for (int i = n - 1; i > 0; i--) {
            fout << CoefBinom[n][i] << "x";
            if (i != 1) //Verificamos que el exponente de x no sea 1
                fout << "^" << i;
            fout << "y";
            if (n - i != 1) //Verificamos que el exponente de y no sea 1
                fout << "^" << n - i;
            fout << "+";
        }
        fout << "y^" << n;
    }
}
