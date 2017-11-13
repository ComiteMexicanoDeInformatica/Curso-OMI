
#include<stdio.h>
FILE* inputFile;
FILE* outputFile;
int main(){
	int vegetales;
	int nLunasLlenas=0;
	scanf("%i",&vegetales);
	while(vegetales%11!=1){
		vegetales*=2;
		nLunasLlenas++;
	}
	printf("%i %i\n",nLunasLlenas,vegetales);
}
