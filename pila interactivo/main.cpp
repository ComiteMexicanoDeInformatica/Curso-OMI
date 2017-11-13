#include<stdio.h>
#include "pila_intectivo.h"

char ins,val;

int main()
{
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf(" %c %d",&ins,&val);
        if(ins=='a') agrega(val);
        if(ins=='s') printf("%d\n",saca());
    }

    return 0;
}
