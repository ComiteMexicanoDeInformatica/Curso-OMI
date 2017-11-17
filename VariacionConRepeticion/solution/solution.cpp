#include <iostream>
using namespace std;
int main() {
    long long n, k, j;
    cin >> n >> k >> j;

    /** Precalculamos las potencias **/
    long long potencias[k + 1];
    potencias[0] = 1;
    for (int i = 1; i <= k; i++)
        potencias[i] = potencias[i - 1] * n;

    j--; //Si no lo ponemos, empezamos a contar desde j = 0
    for (int i = 1, c; i <= k; i++) {
        /** Busca la primera letra que exceda, el caracter buscado es el anterior **/
        for (c = 1; c <= n + 1; c++)
            if (c * potencias[k - i] > j)
                break;
        cout << char('a' + --c);
        j -= c * potencias[k - i];
    }
    return 0;
}
