#include "AdivinaElNumero.h"
#include <stdio.h>
void adivina(long long a,long long b){
    printf("lol");
    int resp;
    long long md;

    while(a!=b){
            md = (a + b)/2;
            resp = pista(md);
            if(resp == 0) return;
            if(resp == 1){
                a = md+1;
            }else{
                b = md;
            }
    }

    pista(a);
    return;
}
