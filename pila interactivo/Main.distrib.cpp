#include<stdio.h>
#include "pila_interactivo.h"

char ins,val;

int main()
{
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf(" %c",&ins);
        if(ins=='a') {
                scanf("%d",&val);
                agrega(val);
        }
        if(ins=='s') printf("%d\n",saca());
    }

    return 0;
}
