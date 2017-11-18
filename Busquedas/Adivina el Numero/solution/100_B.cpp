#include "AdivinaElNumero.h"

// Main
//	long long pista(long long x)

void adivina(long long a, long long b) {
	while(a<b){
        long long mid=(a+b)/2LL ;
        int aux=pista(mid);
        if(aux==-1){
            b=mid-1;
        }
        else if(aux==1){
            a=mid+1;
        }
        else return;
	}
	pista(a);
}

