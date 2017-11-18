#include "PilaInteractivo.h"
#include<stdio.h>

int n, val, aux;
char ins;

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%c", &ins);
        aux = 0;
        if (ins == 'a') {
            scanf("%d", &val);
            agrega(val);
        }
        if (ins == 's') {
            printf("%d\n", saca());
            aux = 1;
        }
    }

    if (aux == 0)
        printf("\n");
    return 0;
}
