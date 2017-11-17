#include <iostream>
#include <iomanip>

#include "ColaInteractivo.h"

using namespace std;

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cerr << n << endl;

    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;

        if (a == 'a') {
            int value;
            cin >> value;

            agrega(value);
        } else if (a == 's') {
            cout << saca() << endl;
        }
    }
}
