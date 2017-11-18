#include "Pacman.h"
#include <iostream>
using namespace std;

int F, C, P, R;
char MAP[100][100];
double puntos = 1;

int hayComida(int pos){

    int col = (pos-1) % C;
    int fil = (pos-1) / C;

    if (MAP[fil][col] == 'F') {
        puntos = 0.5;
        cout << "Te encontraste con un fantasma y tus puntos bajan a la mitad :\'(\n";
    } else if (MAP[fil][col] == 'C'){
        cout << "Hay comida en la posicion " << pos << " :D\n";
        return 1;
    }
    cout << "No hay comida en la posicion " << pos << " :(\n";
    return 0;
}

int esPosibleAvanzar(int posActual, char direccion){
    int col = (posActual-1) % C;
    int fil = (posActual-1) / C;

    switch (direccion) {
        case 'n':
            if (fil != 0 && MAP[fil-1][col] != '#'){
                return (fil-1) * C + col+1;
            }
        case 's':
            if (fil != (F-1) && MAP[fil+1][col] != '#'){
                return (fil+1) * C + col+1;
            }
        case 'o':
            if (col != 0 && MAP[fil][col-1] != '#'){
                return (fil) * C + col;
            }
        case 'e':
            if (col != (C-1) && MAP[fil][col+1] != '#'){
                return (fil) * C + col;
            }
        default:
            return -1;
    }
}

int main() {
    cin >> F >> C >> P >> R;
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < C; j++) {
            cin >> MAP[i][j];
        }
    }

    if (buscaComida(P) == R){
        cout << "Encontraste la ruta mas corta\n";
    } else {
        cout << "No es la respuesta correcta\n";
    }
}
