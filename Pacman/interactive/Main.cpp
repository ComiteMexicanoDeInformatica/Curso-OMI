#include "Pacman.h"
#include <iostream>

using namespace std;

int F, C, P, R;
char MAP[100][100];
double puntos = 1;

int hayComida(int pos){
    pos--;
    int col = pos % C;
    int fil = pos / C;

    if (MAP[fil][col] == 'F') {
        puntos = 0.5;
        cerr << "Te encontraste con un fantasma y tus puntos bajan a la mitad :\'(\n";
    } else if (MAP[fil][col] == 'C'){
        cerr << "Hay comida en la posicion " << pos << " :D\n";
        return 1;
    }
    cerr << "No hay comida en la posicion " << pos << " :(\n";
    return 0;
}

int esPosibleAvanzar(int posActual, char direccion){
    posActual--;
    int col = posActual % C;
    int fil = posActual / C;

    switch (direccion) {
        case 'n':
            return fil != 0 && MAP[fil-1][col] != '#';
        case 's':
            return fil != (F-1) && MAP[fil+1][col] != '#';
        case 'o':
            return col != 0 && MAP[fil][col-1] != '#';
        case 'e':
            return col != (C-1) && MAP[fil][col+1] != '#';
        default:
            return 0;
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
        cout << puntos;
    } else {
        cout << "0";
    }
}
