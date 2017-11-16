#include <stdio.h>
#include "AdivinaElNumero.h"
#include <limits.h>
#include <algorithm>
#include <math.h>
using namespace std;

long long l,r,i,f,preguntas,p,lg;
bool d=false,found=false;

long long pista(long long x){

    preguntas ++;

    if(x > f) return -1;
    if(x < i) return 1;
    if(x==i && x==f) {
            found = true;
            p=preguntas;
            return 0;
    }

    int r_menor = x - i;
    int r_mayor = f - x;

    if(r_menor < r_mayor){
        i = min(x + 1,f);
        return 1;
    }
    if(r_mayor < r_menor){
        f = max(i,x-1);
        return -1;
    }
    if(r_mayor == r_menor){
        d = !d;
        if(!d) { i = min(x + 1,f); return 1;}
        if(d) { f = max(i,x-1); return -1;}
    }
}
int main()
{
    scanf("%lld %lld",&l,&r);
    lg = log2(r-l+1) + 1;
    i=l;
    f=r;
    adivina(l,r);
    if(!found) printf("0.0");

    if(found){
        if(preguntas <= lg){
            printf("1.0");
        }
        if(preguntas > lg && preguntas <= 2*lg){
            printf("0.5");
        }
        if(preguntas > 100){
            printf("0.0");
        }
    }
	return 0;
}
