#include <iostream>
#include <fstream>
using namespace std;

#define MAXN 10000
int pila[MAXN], tope;

void agrega(int n) {
	pila[tope++] = n;
}

int saca() {
	return tope ? pila[--tope] : -1;
}

int main() {
    /**Lee la entrada**/
    ifstream in("data.in");
    int n, val, ans;
    char ins;

    /**Resuelve el problema**/
    in >> n;
    while (n--) {
        in >> ins;
        if (ins == 'a') {
            in >> val;
            agrega(val);
        }
        else if (ins == 's') {
            cin >> ans;
            /**Si la respuesta con el evaluador difiere, es WrongAnswer**/
            if (saca() != ans)
                return 0;
        }
    }

    return 1;
}
