#include "PilaInteractivo.h"
#include <stdio.h>
#define MAXN 100000

int pila[MAXN], tope;

void insertar(int x) {
	pila[tope++] = x;
}

int eliminar() {
	return tope ? pila[--tope] : -1;
}

int n, val;
char ins;

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf(" %c", &ins);
        if (ins == 'a') {
            scanf("%d", &val);
            agrega(val);
            insertar(val);
        }
        if (ins == 's') {
            if (saca() != eliminar()) {
                printf("0\n");
                return 0;
            }
        }
    }

    printf("1\n");
    return 0;
}
