#include <iostream>
using namespace std;
int main() {
    int n;
    long long CoefBinom[51][51];
    cin >> n;

    /**Inicializamos los coeficientes binomiales usando
    la Identidad de Pascal**/
    for (int i = 0; i <= 50; i++) {
        CoefBinom[i][0] = 1;
        CoefBinom[i][i] = 1;
        for (int j = 1; j < i; j++)
            CoefBinom[i][j] = CoefBinom[i - 1][j - 1] + CoefBinom[i - 1][j];
    }

    /**Los casos n = 0 y n = 1 los consideramos aparte**/
    if (n == 0)
        cout << "1";
    else if (n == 1)
        cout << "x+y";
    else {
        cout << "x^" << n << "+";
        for (int i = n - 1; i > 0; i--) {
            cout << CoefBinom[n][i] << "x";
            if (i != 1) //Verificamos que el exponente de x no sea 1
                cout << "^" << i;
            cout << "y";
            if (n - i != 1) //Verificamos que el exponente de y no sea 1
                cout << "^" << n - i;
            cout << "+";
        }
        cout << "y^" << n;
    }
}
