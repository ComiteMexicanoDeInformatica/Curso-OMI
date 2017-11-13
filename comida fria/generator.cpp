#include <bits/stdc++.h>

using namespace std;

int main()
{

    /* Inicializa la semilla */
    srand (time(NULL));
    /* Genera un número entre el 1 y el 1000 */
    n = rand() % 1000 + 1;
    cout << n << endl;
    while(n--)
    {
        i = rand() % 1000000 + 1;
        cout << i << endl;
    }

    return 0;
}
