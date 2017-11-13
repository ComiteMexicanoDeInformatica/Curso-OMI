
#include<stdio.h>
int main(){
	int nFrutas;
	int nLunas=0;
	scanf("%i",&nFrutas);
	while(nFrutas%11!=1){
		nFrutas*=2;
		nLunas+=1;
	}
	printf("%i %i\n",nLunas,nFrutas);
}
